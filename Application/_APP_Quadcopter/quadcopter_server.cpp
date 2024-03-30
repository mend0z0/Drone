#include "quadcopter_server.h"
#include "ui_quadcopter_server.h"

quadcopter_server::quadcopter_server(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::quadcopter_server)
{
    ui->setupUi(this);

    mqttSendTimeout->start(1000);
    connect(ui->pushButton_Close, SIGNAL(clicked(bool)), this, SLOT(ServerPanelClose()));
    connect(serverPingProcess, SIGNAL(finished(int,QProcess::ExitStatus)), this, SLOT(ServerReadIPV4()));

    MQTTParamInit();
    MQTTConnectFunctions();
    UDPParamInit();
    UDPConnectFunctions();
}

quadcopter_server::~quadcopter_server()
{
    delete ui;
}

void quadcopter_server::ServerParamInit(void)
{
    CheckAPIPV4();
    MQTTParamUpdate();
    UDPParamUpdate();
}

void quadcopter_server::ServerPanelClose()
{
    mqttPingProcess->kill();
    udpPingProcess->kill();
    serverPingProcess->kill();
    MQTTObjectsDisable();
    close();
}

void quadcopter_server::CheckAPIPV4()
{
    serverPingProcess->startCommand("ipconfig");
}

void quadcopter_server::ServerReadIPV4()
{
    QString ipv4;
    QByteArray ipconfigResults;
    ipv4Regex.setPattern("IPv4 Address\\. \\. \\. \\. \\. \\. \\. \\. \\. \\. \\. : (\\d*[\\.]\\d*[\\.]\\d*[\\.]\\d*)");
    gatewayRegex.setPattern("(\\d*[\\.]\\d*[\\.]\\d*[\\.]\\d*)[\\w*\\W*]$");

    ipconfigResults = serverPingProcess->readAll();
    serverPingProcess->terminate();

    qDebug() << ipconfigResults;
    tempMatch = ipv4Regex.match(ipconfigResults);
    qDebug() << "IPV4" << ipv4Regex.captureCount() << tempMatch.captured(1);


    if(tempMatch.hasMatch() == false)
    {
        consolMessageBox->critical(this, "Error", "Device is not connected to any network media \r\n");
    }

    ipv4 = tempMatch.captured(1);
    qDebug() << "IPV4" << ipv4;

    tempMatch = gatewayRegex.match(ipconfigResults);
    qDebug() << "defaultGateway" << gatewayRegex.captureCount() << tempMatch.captured(1);

    defaultGateway = tempMatch.captured(1);
    qDebug() << "defaultGateway" << defaultGateway;

    emit QCopter_ApplicationIPV4(ipv4);
}

/*
 *
 *  MQTT functions
 *
*/

void quadcopter_server::MQTTConnectDisconnectButton()
{
    if(qcopter_mqttClient->state() == QMqttClient::Connected)
    {
        //This here will disconnect mqtt only when it's been connected before!
        qcopter_mqttClient->disconnectFromHost();
        ui->pushButton_mqttConnect_Disconnect->setText("Connect");
        MQTTObjectsEnable();
    }
    else if(qcopter_mqttClient->state() == QMqttClient::Disconnected)
    {
        //Reading the lineEdit inputs.
        MQTTObjectsDisable();
        MQTTParamSet();
        //pinging the host to see if it's existed in the network.
        MQTTPingMQTTBroker( ui->lineEdit_mqttHostName->text());
    }
}

void quadcopter_server::MQTTParamSet( void )
{
    //going through setting parameters and trying to connect to the mosquito server

    qDebug() << "1- HostName: " << ui->lineEdit_mqttHostName->text().trimmed();
    qcopter_mqttClient->setHostname(ui->lineEdit_mqttHostName->text());

    qDebug() << "2- Port: " << static_cast<quint16>(ui->lineEdit_mqttPort->text().toInt());
    qcopter_mqttClient->setPort(static_cast<quint16>(ui->lineEdit_mqttPort->text().toInt()));

    qDebug() << "3- Username: " << ui->lineEdit_mqttUsername->text();
    qcopter_mqttClient->setUsername(ui->lineEdit_mqttUsername->text());

    qDebug() << "4- Password: " << ui->lineEdit_mqttPassword->text();
    qcopter_mqttClient->setPassword(ui->lineEdit_mqttPassword->text());
}

void quadcopter_server::MQTTPingResult()
{
    QByteArray pingResults;

    pingResults.append(mqttPingProcess->readAll());
    mqttPingProcess->terminate();

    MQTTGifLoading(false);

    qDebug().noquote() << pingResults;

    if(pingResults.contains("Approximate round trip times in milli-seconds:"))
    {
        //if we could ping the hostIP then we send the connect to host, otherwise we display an error
        qcopter_mqttClient->connectToHost();
    }
    else if((pingResults.contains("Destination host unreachable.")) || (pingResults.contains("Request timed out.")))
    {
        consolMessageBox->critical(this, "Error", "The Selected IP Broker is Unreachable \r\n");
        MQTTObjectsEnable();            //opening the boxes for another try
    }
}

void quadcopter_server::MQTTNewReceivedGeneral(QMqttMessage msg)
{
    emit QCopter_NewMsgGeneral(msg);
}

void quadcopter_server::MQTTNewReceivedStatus(QMqttMessage msg)
{
    emit QCopter_NewMsgStatus(msg);
}

void quadcopter_server::MQTTNewReceivedCommand(QMqttMessage msg)
{
    emit QCopter_NewMsgCommand(msg);
}

void quadcopter_server::MQTTSendTimerTimeout()
{
    mqtt_client.sendMessageTimeOut = false;
}

void quadcopter_server::MQTTSendMsg(QByteArray msg)
{
    if(mqtt_client.sendMessageTimeOut == true)
    {
        return;
    }

    qDebug() << "MQTT: " << msg;
    qcopter_mqttClient->publish( mqtt_client.topicCommand, msg, mqtt_client.QoS, false);

    mqttSendTimeout->stop();
    mqttSendTimeout->start(1000);
    mqtt_client.sendMessageTimeOut = true;
}

void quadcopter_server::MQTTPingMQTTBroker(QString ipAddr)
{
    QString processCmd = "ping -n 4 " + ipAddr;     //ping the host ip for 4 times.
    qDebug() << "Running " << processCmd;

    mqttPingProcess->startCommand(processCmd);

    MQTTGifLoading(true);
}

void quadcopter_server::MQTTSubscribtion()
{
    bool connectionStatus = false;

    //now we need to subscribe
    auto subscriptionGeneral = qcopter_mqttClient->subscribe( mqtt_client.topicGeneral.name(), mqtt_client.QoS);
    auto subscriptionStatus = qcopter_mqttClient->subscribe( mqtt_client.topicStatus.name(), mqtt_client.QoS);
    auto subscriptionCommand = qcopter_mqttClient->subscribe( mqtt_client.topicCommand.name(), mqtt_client.QoS);

    qDebug() << "Topic: " << mqtt_client.topicGeneral.name() << " & QoS: " << mqtt_client.QoS;
    qDebug() << "Subscription status: " << subscriptionGeneral;

    qDebug() << "Topic: " << mqtt_client.topicStatus.name() << " & QoS: " << mqtt_client.QoS;
    qDebug() << "Subscription status: " << subscriptionStatus;

    qDebug() << "Topic: " << mqtt_client.topicCommand.name() << " & QoS: " << mqtt_client.QoS;
    qDebug() << "Subscription status: " << subscriptionCommand;

    if(!subscriptionGeneral){
        consolMessageBox->critical(this, "Error", "The console can't subscribe to General channel");
        connectionStatus &= false;
    }
    else{
        connect(subscriptionGeneral, SIGNAL(messageReceived(QMqttMessage)), this, SLOT(MQTTNewReceivedGeneral(QMqttMessage)));
        connectionStatus = true;
    }

    if(!subscriptionStatus){
        consolMessageBox->critical(this, "Error", "The console can't subscribe to Status channel");
        connectionStatus &= false;
    }
    else{
        connect(subscriptionStatus, SIGNAL(messageReceived(QMqttMessage)), this, SLOT(MQTTNewReceivedStatus(QMqttMessage)));
        connectionStatus = true;
    }

    if(!subscriptionCommand){
        consolMessageBox->critical(this, "Error", "The console can't subscribe to Command channel");
        connectionStatus &= false;
    }
    else{
        connect(subscriptionCommand, SIGNAL(messageReceived(QMqttMessage)), this, SLOT(MQTTNewReceivedCommand(QMqttMessage)));
        connectionStatus = true;
    }

    if(connectionStatus == true)
    {
        ui->pushButton_mqttConnect_Disconnect->setEnabled(true);
        ui->pushButton_mqttConnect_Disconnect->setText("Disconnect");
        buttonPalette.setColor( QPalette::Active, QPalette::Button, Qt::green);
        ui->pushButton_mqttConnect_Disconnect->setPalette(buttonPalette);
        emit QCopter_MQTTServerStatus(true);
    }
    else
    {
        ui->pushButton_mqttConnect_Disconnect->setEnabled(true);
        ui->pushButton_mqttConnect_Disconnect->setText("Connect");
        buttonPalette.setColor( QPalette::Active, QPalette::Button, Qt::green);
        ui->pushButton_mqttConnect_Disconnect->setPalette(buttonPalette);
    }

}

void quadcopter_server::MQTTDisconnected()
{
    ui->pushButton_mqttConnect_Disconnect->setEnabled(true);
    ui->pushButton_mqttConnect_Disconnect->setText("Connect");

    consolMessageBox->critical(this, "Error", "You got disconnected from server");
    emit QCopter_MQTTServerStatus(false);
}

void quadcopter_server::MQTTParamInit()
{
    mqtt_client.hostname.append(MQTT_DEFAULT_HOSTNAME);
    mqtt_client.port = MQTT_DEFAULT_PORT;
    mqtt_client.username.append(MQTT_DEFAULT_USERNAME);
    mqtt_client.password.append(MQTT_DEFAULT_PASSWORD);
    mqtt_client.topicGeneral.setName(MQTT_DEFAULT_TOPIC_GENERAL);
    mqtt_client.topicStatus.setName(MQTT_DEFAULT_TOPIC_STATUS);
    mqtt_client.topicCommand.setName(MQTT_DEFAULT_TOPIC_COMMAND);
    mqtt_client.QoS = MQTT_DEFAULT_QoS;
    mqtt_client.numberOfTopic[0] = true;                //The 0 is home that is always true and can't be assigned to individual drone.

    ui->lineEdit_mqttHostName->setText(mqtt_client.hostname);
    ui->lineEdit_mqttPort->setText(QString::number(mqtt_client.port));
    ui->lineEdit_mqttUsername->setText(mqtt_client.username);
    ui->lineEdit_mqttPassword->setText(mqtt_client.password);
}

void quadcopter_server::MQTTParamUpdate()
{
    mqtt_client.hostname.clear();
    mqtt_client.hostname.append(ui->lineEdit_mqttHostName->text());

    mqtt_client.port = static_cast<quint16>(ui->lineEdit_mqttPort->text().toInt());

    mqtt_client.username.clear();
    mqtt_client.username.append(ui->lineEdit_mqttUsername->text());

    mqtt_client.password.clear();
    mqtt_client.password.append(ui->lineEdit_mqttPassword->text());

    ui->pushButton_mqttConnect_Disconnect->setText("Connect");
    buttonPalette.setColor( QPalette::Active, QPalette::Button, Qt::white);
    ui->pushButton_mqttConnect_Disconnect->setPalette(buttonPalette);

    mqttConnectionWaitGif->setFileName("D:/Projects/STP/Quadcopter/Application/Resources/Gifs/connectionLoading.gif");
    mqttConnectionWaitGif->setFormat("gif");
    qDebug() << mqttConnectionWaitGif->isValid();
    ui->label_MQTTGif->setMovie(mqttConnectionWaitGif);
    ui->label_MQTTGif->setVisible(false);


    if(qcopter_mqttClient->state() == QMqttClient::Connected)
    {
        ui->pushButton_mqttConnect_Disconnect->setEnabled(true);
        ui->pushButton_mqttConnect_Disconnect->setText("Disconnect");
        buttonPalette.setColor( QPalette::Active, QPalette::Button, Qt::green);
        ui->pushButton_mqttConnect_Disconnect->setPalette(buttonPalette);

        MQTTObjectsDisable();
    }
    else if(qcopter_mqttClient->state() == QMqttClient::Disconnected)
    {
        ui->pushButton_mqttConnect_Disconnect->setEnabled(true);
        ui->pushButton_mqttConnect_Disconnect->setText("Connect");
        buttonPalette.setColor( QPalette::Active, QPalette::Button, Qt::white);
        ui->pushButton_mqttConnect_Disconnect->setPalette(buttonPalette);

        MQTTObjectsEnable();
    }
    else
    {
        ui->pushButton_mqttConnect_Disconnect->setDisabled(true);
    }
}

void quadcopter_server::MQTTObjectsEnable()
{
    ui->lineEdit_mqttHostName->setEnabled(true);
    ui->lineEdit_mqttPort->setEnabled(true);
    ui->lineEdit_mqttUsername->setEnabled(true);
    ui->lineEdit_mqttPassword->setEnabled(true);

    ui->pushButton_mqttConnect_Disconnect->setEnabled(true);
}

void quadcopter_server::MQTTObjectsDisable()
{
    ui->lineEdit_mqttHostName->setDisabled(true);
    ui->lineEdit_mqttPort->setDisabled(true);
    ui->lineEdit_mqttUsername->setDisabled(true);
    ui->lineEdit_mqttPassword->setDisabled(true);

    ui->pushButton_mqttConnect_Disconnect->setDisabled(true);
}

void quadcopter_server::MQTTConnectFunctions()
{
    connect(ui->pushButton_mqttConnect_Disconnect, SIGNAL(clicked(bool)), this, SLOT(MQTTConnectDisconnectButton()));

    connect(qcopter_mqttClient, SIGNAL(connected()), this, SLOT(MQTTSubscribtion()));
    connect(qcopter_mqttClient, SIGNAL(disconnected()), this, SLOT(MQTTDisconnected()));

    connect(mqttPingProcess, SIGNAL(finished(int,QProcess::ExitStatus)), this, SLOT(MQTTPingResult()));

    connect(mqttSendTimeout, SIGNAL(timeout()), this, SLOT(MQTTSendTimerTimeout()));
}

void quadcopter_server::MQTTGifLoading(bool cmd)
{
    if(cmd){

        ui->label_mqttHostName->setHidden(true);
        ui->label_mqttPort->setHidden(true);
        ui->label_mqttUsername->setHidden(true);
        ui->label_mqttPassword->setHidden(true);

        ui->lineEdit_mqttHostName->setHidden(true);
        ui->lineEdit_mqttPort->setHidden(true);
        ui->lineEdit_mqttUsername->setHidden(true);
        ui->lineEdit_mqttPassword->setHidden(true);


        ui->label_MQTTGif->setVisible(true);
        ui->label_MQTTGif->raise();
        mqttConnectionWaitGif->start();
    }
    else{

        ui->label_mqttHostName->setVisible(true);
        ui->label_mqttPort->setVisible(true);
        ui->label_mqttUsername->setVisible(true);
        ui->label_mqttPassword->setVisible(true);

        ui->lineEdit_mqttHostName->setVisible(true);
        ui->lineEdit_mqttPort->setVisible(true);
        ui->lineEdit_mqttUsername->setVisible(true);
        ui->lineEdit_mqttPassword->setVisible(true);

        ui->label_MQTTGif->setVisible(false);
        mqttConnectionWaitGif->stop();
    }
}

/*
 *
 *  UDP functions
 *
*/

void quadcopter_server::UDPConnect()
{
    qDebug() << "UDP New IP" << udp_socket.hostIP;
    qDebug() << "UDP New Port" << udp_socket.port;
    qcopter_udpsocket->bind(QHostAddress(udp_socket.hostIP), udp_socket.port);
    ui->pushButton_UDPConnection->setText("Disconnect");
    UDPObjectsEnable();
    emit QCopter_UDPUpdateState(true);
}

void quadcopter_server::UDPReceivedData()
{
    QByteArray newData;
    QHostAddress udpDroneIPV4;
    quint16 udpDronePort;
    newData.resize(qcopter_udpsocket->pendingDatagramSize());

    qcopter_udpsocket->readDatagram(newData.data(), newData.size(), &udpDroneIPV4, &udpDronePort);
    qDebug() << "Message From: " << udpDroneIPV4;
    qDebug() << "Message Port: " << udpDronePort;
    qDebug() << "Message" << newData;

    emit QCopter_UDPNewData( &newData, &udpDroneIPV4, &udpDronePort);
}

void quadcopter_server::UDPPingResult()
{
    QByteArray pingResults;

    pingResults.append(udpPingProcess->readAll());
    udpPingProcess->terminate();

    UDPGifLoading(false);

    qDebug().noquote() << pingResults;

    if(pingResults.contains("Approximate round trip times in milli-seconds:"))
    {
        //if we could ping the hostIP then we send the connect to host, otherwise we display an error
        UDPParamUpdate();
        UDPConnect();
    }
    else if((pingResults.contains("Destination host unreachable.")) || (pingResults.contains("Request timed out.")))
    {
        consolMessageBox->critical(this, "Error", "The Selected IP Broker is Unreachable \r\n");
        UDPObjectsEnable();            //opening the boxes for another try
    }
}

void quadcopter_server::UDPParamInit()
{
    ui->lineEdit_ValueUDPHostIP->setText(UDP_DEFAULT_HOSTIP);
    ui->lineEdit_ValueUDPPort->setText(QString::number(UDP_DEFAULT_PORT));

    udpConnectionWaitGif->setFileName("D:/Projects/STP/Quadcopter/Application/Resources/Gifs/connectionLoading.gif");
    udpConnectionWaitGif->setFormat("gif");
    qDebug() << udpConnectionWaitGif->isValid();
    ui->label_UDPGif->setMovie(udpConnectionWaitGif);
    ui->label_UDPGif->setVisible(false);

    UDPParamUpdate();
}

void quadcopter_server::UDPParamUpdate()
{
    udp_socket.hostIP = ui->lineEdit_ValueUDPHostIP->text();
    udp_socket.port = ui->lineEdit_ValueUDPPort->text().toInt();
}

void quadcopter_server::UDPObjectsEnable()
{
    ui->lineEdit_ValueUDPHostIP->setEnabled(true);
    ui->lineEdit_ValueUDPPort->setEnabled(true);
    ui->pushButton_UDPConnection->setEnabled(true);
}

void quadcopter_server::UDPObjectsDisable()
{
    ui->lineEdit_ValueUDPHostIP->setDisabled(true);
    ui->lineEdit_ValueUDPPort->setDisabled(true);
    ui->pushButton_UDPConnection->setDisabled(true);
}

void quadcopter_server::UDPConnectFunctions()
{
    connect(ui->pushButton_UDPConnection, SIGNAL(clicked(bool)), this, SLOT(UDPCheckConnection()));
    connect(qcopter_udpsocket, SIGNAL(readyRead()), this, SLOT(UDPReceivedData()));
    connect(udpPingProcess, SIGNAL(finished(int,QProcess::ExitStatus)), this, SLOT(UDPPingResult()));

}

void quadcopter_server::UDPGifLoading(bool cmd)
{
    if(cmd){

        ui->label_UDPHostIP->setHidden(true);
        ui->label_UDPPort->setHidden(true);

        ui->lineEdit_ValueUDPHostIP->setHidden(true);
        ui->lineEdit_ValueUDPPort->setHidden(true);


        ui->label_UDPGif->setVisible(true);
        ui->label_UDPGif->raise();
        udpConnectionWaitGif->start();

        UDPObjectsDisable();
    }
    else{

        ui->label_UDPHostIP->setVisible(true);
        ui->label_UDPPort->setVisible(true);

        ui->lineEdit_ValueUDPHostIP->setVisible(true);
        ui->lineEdit_ValueUDPPort->setVisible(true);

        ui->label_UDPGif->setHidden(true);
        udpConnectionWaitGif->stop();
    }
}

void quadcopter_server::UDPCheckConnection()
{
    QAbstractSocket::SocketState udpState;

    udpState = qcopter_udpsocket->state(); //this will get the state of socket

    if(udpState == QAbstractSocket::BoundState)
    {
        qcopter_udpsocket->close();

        ui->pushButton_UDPConnection->setText("Connect");

        emit QCopter_UDPUpdateState(false);
    }
    else if(udpState == QAbstractSocket::UnconnectedState)
    {
        //run a local connection to see if the port can be opened!
        QString processCmd = "ping -n 4 " + defaultGateway;     //ping the host ip for 4 times.
        qDebug() << "Running " << processCmd;

        udpPingProcess->startCommand(processCmd, QIODevice::ReadWrite);

        UDPGifLoading(true);

        ui->pushButton_UDPConnection->setDisabled(true);
    }

}
