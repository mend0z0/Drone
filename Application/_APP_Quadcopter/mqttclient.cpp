#include "mqttclient.h"
#include "ui_mqttclient.h"

MQTTClient::MQTTClient(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::MQTTClient)
{
    ui->setupUi(this);

    mqttSendTimeout->start(1000);

    ParamInit();
    ConnectFunctions();
}

MQTTClient::~MQTTClient()
{
    delete ui;
}


void MQTTClient::mqttConnectDisconnectButton()
{
    if(qcopter_mqttClient->state() == QMqttClient::Connected)
    {
        //This here will disconnect mqtt only when it's been connected before!
        ObjectsEnable();
        qcopter_mqttClient->disconnectFromHost();

        ui->pushButton_mqttConnect_Disconnect->setEnabled(true);
        ui->pushButton_mqttConnect_Disconnect->setText("Connect");
        buttonPalette.setColor( QPalette::Active, QPalette::Button, Qt::white);
        ui->pushButton_mqttConnect_Disconnect->setPalette(buttonPalette);
    }
    else if(qcopter_mqttClient->state() == QMqttClient::Disconnected)
    {
        //Reading the lineEdit inputs.
        mqttParamSet();
        //pinging the host to see if it's existed in the network.
        PingMQTTBroker( ui->lineEdit_mqttHostName->text());
    }
    else{
        ui->pushButton_mqttConnect_Disconnect->setDisabled(true);
    }
}

void MQTTClient::mqttParamSet( void )
{
    ObjectsDisable();

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

void MQTTClient::mqttPanelClose()
{
    pingProcess->kill();
    ObjectsDisable();
    close();
}

void MQTTClient::PingResult()
{
    QByteArray pingResults;

    pingResults.append(pingProcess->readAll());
    pingProcess->terminate();

    GifLoading(false);

    qDebug().noquote() << pingResults;

    if(pingResults.contains("Approximate round trip times in milli-seconds:"))
    {
        //if we could ping the hostIP then we send the connect to host, otherwise we display an error
        qcopter_mqttClient->connectToHost();
    }
    else if((pingResults.contains("Destination host unreachable.")) || (pingResults.contains("Request timed out.")))
    {
        mqttMessageBox->critical(this, "Error", "The Selected IP Broker is Unreachable \r\n");
        ObjectsEnable();            //opening the boxes for another try
    }
}

void MQTTClient::mqttNewReceivedGeneral(QMqttMessage msg)
{
    emit QCopter_NewMsgGeneral(msg);
}

void MQTTClient::mqttNewReceivedStatus(QMqttMessage msg)
{
    emit QCopter_NewMsgStatus(msg);
}

void MQTTClient::mqttNewReceivedCommand(QMqttMessage msg)
{
    emit QCopter_NewMsgCommand(msg);
}

void MQTTClient::MQTTSendTimerTimeout()
{
    mqtt_client.sendMessageTimeOut = false;
}

void MQTTClient::mqttSendMsg(QByteArray msg)
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

void MQTTClient::PingMQTTBroker(QString ipAddr)
{
    QString processCmd = "ping -n 4 " + ipAddr;     //ping the host ip for 4 times.
    qDebug() << "Running " << processCmd;

    pingProcess->startCommand(processCmd);

    GifLoading(true);
}

void MQTTClient::mqttSubscribtion()
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
        mqttMessageBox->critical(this, "Error", "The console can't subscribe to General channel");
        connectionStatus &= false;
    }
    else{
        connect(subscriptionGeneral, SIGNAL(messageReceived(QMqttMessage)), this, SLOT(mqttNewReceivedGeneral(QMqttMessage)));
        connectionStatus = true;
    }

    if(!subscriptionStatus){
       mqttMessageBox->critical(this, "Error", "The console can't subscribe to Status channel");
        connectionStatus &= false;
    }
    else{
       connect(subscriptionStatus, SIGNAL(messageReceived(QMqttMessage)), this, SLOT(mqttNewReceivedStatus(QMqttMessage)));
       connectionStatus = true;
    }

    if(!subscriptionCommand){
       mqttMessageBox->critical(this, "Error", "The console can't subscribe to Command channel");
       connectionStatus &= false;
    }
    else{
       connect(subscriptionCommand, SIGNAL(messageReceived(QMqttMessage)), this, SLOT(mqttNewReceivedCommand(QMqttMessage)));
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

void MQTTClient::mqttDisconnected()
{
    ui->pushButton_mqttConnect_Disconnect->setEnabled(true);
    ui->pushButton_mqttConnect_Disconnect->setText("Connect");
    buttonPalette.setColor( QPalette::Active, QPalette::Button, Qt::white);
    ui->pushButton_mqttConnect_Disconnect->setPalette(buttonPalette);

    mqttMessageBox->critical(this, "Error", "You got disconnected from server");
    emit QCopter_MQTTServerStatus(false);
}

void MQTTClient::ParamInit()
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

void MQTTClient::ObjectsInit(void)
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

    connectionWaitGif->setFileName("D:/Projects/STP/Quadcopter/Application/Resources/Gifs/connectionLoading.gif");
    connectionWaitGif->setFormat("gif");
    qDebug() << connectionWaitGif->isValid();
    ui->label_gif->setMovie(connectionWaitGif);
    ui->label_gif->setVisible(false);


    if(qcopter_mqttClient->state() == QMqttClient::Connected)
    {
        ui->pushButton_mqttConnect_Disconnect->setEnabled(true);
        ui->pushButton_mqttConnect_Disconnect->setText("Disconnect");
        buttonPalette.setColor( QPalette::Active, QPalette::Button, Qt::green);
        ui->pushButton_mqttConnect_Disconnect->setPalette(buttonPalette);

        ObjectsDisable();
    }
    else if(qcopter_mqttClient->state() == QMqttClient::Disconnected)
    {
        ui->pushButton_mqttConnect_Disconnect->setEnabled(true);
        ui->pushButton_mqttConnect_Disconnect->setText("Connect");
        buttonPalette.setColor( QPalette::Active, QPalette::Button, Qt::white);
        ui->pushButton_mqttConnect_Disconnect->setPalette(buttonPalette);

        ObjectsEnable();
    }
    else
    {
        ui->pushButton_mqttConnect_Disconnect->setDisabled(true);
    }


}

void MQTTClient::ObjectsEnable()
{
    ui->lineEdit_mqttHostName->setEnabled(true);
    ui->lineEdit_mqttPort->setEnabled(true);
    ui->lineEdit_mqttUsername->setEnabled(true);
    ui->lineEdit_mqttPassword->setEnabled(true);

    ui->pushButton_mqttConnect_Disconnect->setEnabled(true);
}

void MQTTClient::ObjectsDisable()
{
    ui->lineEdit_mqttHostName->setDisabled(true);
    ui->lineEdit_mqttPort->setDisabled(true);
    ui->lineEdit_mqttUsername->setDisabled(true);
    ui->lineEdit_mqttPassword->setDisabled(true);
}

void MQTTClient::ConnectFunctions()
{
    connect(ui->pushButton_mqttConnect_Disconnect, SIGNAL(clicked(bool)), this, SLOT(mqttConnectDisconnectButton()));
    connect(ui->pushButton_mqttCancel, SIGNAL(clicked(bool)), this, SLOT(mqttPanelClose()));

    connect(qcopter_mqttClient, SIGNAL(connected()), this, SLOT(mqttSubscribtion()));
    connect(qcopter_mqttClient, SIGNAL(disconnected()), this, SLOT(mqttDisconnected()));

    connect(pingProcess, SIGNAL(finished(int,QProcess::ExitStatus)), this, SLOT(PingResult()));

    connect(mqttSendTimeout, SIGNAL(timeout()), this, SLOT(mqttSendMsg()));
}

void MQTTClient::GifLoading(bool cmd)
{
    if(cmd){

        ui->label_mqttHostName->setVisible(false);
        ui->label_mqttPort->setVisible(false);
        ui->label_mqttUsername->setVisible(false);
        ui->label_mqttPassword->setVisible(false);

        ui->lineEdit_mqttHostName->setVisible(false);
        ui->lineEdit_mqttPort->setVisible(false);
        ui->lineEdit_mqttUsername->setVisible(false);
        ui->lineEdit_mqttPassword->setVisible(false);


        ui->label_gif->setVisible(true);
        ui->label_gif->raise();
        connectionWaitGif->start();
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

        ui->label_gif->setVisible(false);
        connectionWaitGif->stop();
    }
}
