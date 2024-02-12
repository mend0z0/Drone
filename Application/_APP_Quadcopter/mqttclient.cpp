#include "mqttclient.h"
#include "ui_mqttclient.h"

MQTTClient::MQTTClient(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::MQTTClient)
{
    ui->setupUi(this);

    ObjectsInit();  //if this UI appears it means the application is already disconnected and now we should connect again
}

MQTTClient::~MQTTClient()
{
    delete ui;
}

void MQTTClient::mqttConnect()
{
    //going through setting parameters and trying to connect to the mosquito server
    qcopter_mqttClient = new QMqttClient(this);
    qcopter_mqttClient->setHostname(ui->label_mqttHostname->text());
    qcopter_mqttClient->setPort(static_cast<quint16>(ui->lineEdit_mqttPort->text().toInt()));
    qcopter_mqttClient->setUsername(ui->lineEdit_mqttUsername->text());
    qcopter_mqttClient->setPassword(ui->lineEdit_mqttPassword->text());
    qcopter_mqttClient->connectToHost();

    ObjectsDisable();
}

void MQTTClient::mqttPanelClose()
{
    ObjectsDisable();
    close();
}

void MQTTClient::mqttDisconnect()
{
    //This here will disconnect mqtt only when it's been connected before!
    DisonnectFunctions();
    emit QCopter_Disconnected();
}

void MQTTClient::mqttSubscribeDefault()
{
    //now we need to subscribe
    auto subscription = qcopter_mqttClient->subscribe( mqtt_client.topic, mqtt_client.QoS);

    if(!subscription){
        QMessageBox::critical(this, "Error", QString::number(qcopter_mqttClient->error()));
        return;
    }
    //if everything went well we emit connect signal and will close the page.
    emit QCopter_Connected();
    mqttPanelClose();
}

void MQTTClient::mqttReceivedMessages(QMqttMessage &msg)
{
    mqtt_client.messages.clear();
    mqtt_client.messages.append(msg.payload());
    emit QCopter_NewMessage(mqtt_client.messages);
}

void MQTTClient::mqttSubscribe(uint8_t topicIndex)
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

void MQTTClient::ObjectsInit(void)
{
    mqtt_client.hostname.append(MQTT_DEFAULT_HOSTNAME);
    mqtt_client.port = MQTT_DEFAULT_PORT;
    mqtt_client.username.append(MQTT_DEFAULT_USERNAME);
    mqtt_client.password.append(MQTT_DEFAULT_PASSWORD);
    mqtt_client.topic.setFilter(MQTT_DEFAULT_TOPIC);
    mqtt_client.QoS = MQTT_DEFAULT_QoS;
    mqtt_client.numberOfTopic[0] = true;                //The 0 is home that is always true and can't be assigned to individual drone.

    ui->lineEdit_mqttHostName->setText(mqtt_client.hostname);
    ui->lineEdit_mqttPort->setText(QString::number(mqtt_client.port));
    ui->lineEdit_mqttUsername->setText(mqtt_client.username);
    ui->lineEdit_mqttPassword->setText(mqtt_client.password);

    //Change the color of edit lines to gray..
    ConnectFunctions();
    ObjectsEnable();
}

void MQTTClient::ObjectsEnable()
{
    ui->lineEdit_mqttHostName->setEnabled(true);
    ui->lineEdit_mqttPort->setEnabled(true);
    ui->lineEdit_mqttUsername->setEnabled(true);
    ui->lineEdit_mqttPassword->setEnabled(true);
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
    connect(ui->pushButton_mqttConnect, SIGNAL(clicked(bool)), this, SLOT(mqttConnect()));
    connect(ui->pushButton_mqttCancel, SIGNAL(clicked(bool)), this, SLOT(mqttPanelClose()));
    connect(qcopter_mqttClient, SIGNAL(connected()), this, SLOT(mqttSubscribe()));
    connect(qcopter_mqttClient, SIGNAL(disconnected()), this, SLOT(mqttDisconnect()));
    connect(qcopter_mqttClient, SIGNAL(messageReceived(QByteArray,QMqttTopicName)), this, SLOT(mqttReceivedMessages(QMqttMessage)));
}

void MQTTClient::DisonnectFunctions()
{
    disconnect(ui->pushButton_mqttConnect, SIGNAL(clicked(bool)), this, SLOT(mqttConnect()));
    disconnect(ui->pushButton_mqttCancel, SIGNAL(clicked(bool)), this, SLOT(close()));
    disconnect(qcopter_mqttClient, SIGNAL(connected()), this, SLOT(mqttSubscribeDefault()));
    disconnect(qcopter_mqttClient, SIGNAL(disconnected()), this, SLOT(mqttDisconnect()));
}
