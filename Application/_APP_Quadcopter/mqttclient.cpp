#include "mqttclient.h"
#include "ui_mqttclient.h"

MQTTClient::MQTTClient(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::MQTTClient)
{
    ui->setupUi(this);

    InitObjects();  //if this UI appears it means the application is already disconnected and now we should connect again

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
}

void MQTTClient::mqttDisconnect()
{
    //This here will disconnect mqtt only when it's been connected before!
    DisonnectFunctions();
    emit QCopter_Disconnected();
}

void MQTTClient::mqttSubscribeDefault()
{


    qcopter_mqttClient->setWillTopic(mqtt_client.topic);
    qcopter_mqttClient->setWillQoS(mqtt_client.QoS);


    //if everything went well
    emit QCopter_Connected();

    close();
}

void MQTTClient::InitObjects(void)
{
    mqtt_client.hostname.append(MQTT_DEFAULT_HOSTNAME);
    mqtt_client.port = MQTT_DEFAULT_PORT;
    mqtt_client.username.append(MQTT_DEFAULT_USERNAME);
    mqtt_client.password.append(MQTT_DEFAULT_PASSWORD);
    mqtt_client.topic.append(MQTT_DEFAULT_TOPIC);
    mqtt_client.QoS = MQTT_DEFAULT_QoS;

    ui->lineEdit_mqttHostName->setText(mqtt_client.hostname);
    ui->lineEdit_mqttPort->setText(QString::number(mqtt_client.port));
    ui->lineEdit_mqttUsername->setText(mqtt_client.username);
    ui->lineEdit_mqttPassword->setText(mqtt_client.password);

    //Change the color of edit lines to gray...

    ConnectFunctions();
}

void MQTTClient::ConnectFunctions()
{
    connect(ui->pushButton_mqttConnect, SIGNAL(clicked(bool)), this, SLOT(mqttConnect()));
    connect(ui->pushButton_mqttCancel, SIGNAL(clicked(bool)), this, SLOT(close()));
    connect(qcopter_mqttClient, SIGNAL(connected()), this, SLOT(mqttSubscribe()));
    connect(qcopter_mqttClient, SIGNAL(disconnected()), this, SLOT(mqttDisconnect()));
}

void MQTTClient::DisonnectFunctions()
{
    disconnect(ui->pushButton_mqttConnect, SIGNAL(clicked(bool)), this, SLOT(mqttConnect()));
    disconnect(ui->pushButton_mqttCancel, SIGNAL(clicked(bool)), this, SLOT(close()));
    disconnect(qcopter_mqttClient, SIGNAL(connected()), this, SLOT(mqttSubscribeDefault()));
    disconnect(qcopter_mqttClient, SIGNAL(disconnected()), this, SLOT(mqttDisconnect()));
}
