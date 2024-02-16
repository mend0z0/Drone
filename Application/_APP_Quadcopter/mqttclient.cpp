#include "mqttclient.h"
#include "ui_mqttclient.h"

MQTTClient::MQTTClient(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::MQTTClient)
{
    ui->setupUi(this);
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


bool MQTTClient::PingResult()
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

void MQTTClient::mqttSendMsg(QByteArray msg)
{
    qcopter_mqttClient->publish( mqtt_client.topic, msg, mqtt_client.QoS, false);
}

void MQTTClient::PingMQTTBroker(QString ipAddr)
{
    QString processCmd = "ping -n 4 " + ipAddr;     //ping the host ip for 4 times.
    qDebug() << "Running " << processCmd;

    pingProcess->startCommand(processCmd);

    GifLoading(true);
}


void MQTTClient::mqttSubscribeDefault()
{
    //now we need to subscribe
    auto subscription = qcopter_mqttClient->subscribe( mqtt_client.topic.name(), mqtt_client.QoS);

    if(!subscription){
       mqttMessageBox->critical(this, "Error", "The console can't subscribe");
    }
    else{
        ui->pushButton_mqttConnect_Disconnect->setEnabled(true);
        ui->pushButton_mqttConnect_Disconnect->setText("Disconnect");
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
}

void MQTTClient::mqttSubscribeSwitch(uint8_t topicIndex)
{
    // This will check the topic number
    // The theory is each drone that is connected new to the server (mqtt broker)
    // will publish an announcement and then will get an individual number from the Application
    // then that number will be saved in the bool mqtt_client.numberOfTopic[topicIndex] as true
    // Once it got disconnected, then that status will switch to false. now the search method will
    // be simple and it's just starting from 1 to 99 and checking what spot is available and that spot
    // will be assigned to the new connected drone. By disconnecting, it means drone disconnects from
    // router (no wireless connection), othewise drone will be active and by switching between drones we only change topic, that's it!
    // I need to figure out how to notify if a drone is disconnected, there are some ways of that retaining thing, but I'll check later about it.
}

void MQTTClient::ParamInit()
{
    mqtt_client.hostname.append(MQTT_DEFAULT_HOSTNAME);
    mqtt_client.port = MQTT_DEFAULT_PORT;
    mqtt_client.username.append(MQTT_DEFAULT_USERNAME);
    mqtt_client.password.append(MQTT_DEFAULT_PASSWORD);
    mqtt_client.topic.setName(MQTT_DEFAULT_TOPIC);
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

    connect(qcopter_mqttClient, SIGNAL(connected()), this, SLOT(mqttSubscribeDefault()));
    connect(qcopter_mqttClient, SIGNAL(disconnected()), this, SLOT(mqttDisconnected()));

    connect(pingProcess, SIGNAL(finished(int,QProcess::ExitStatus)), this, SLOT(PingResult()));
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
