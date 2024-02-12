#ifndef MQTTCLIENT_H
#define MQTTCLIENT_H

#include <QDialog>
#include <QDebug>
#include <QString>
#include <QByteArray>
#include <QMessageBox>
#include <QMqttClient>

#define MQTT_DEFAULT_HOSTNAME       "qcopter.mosquitto.org"
#define MQTT_DEFAULT_PORT           1883
#define MQTT_DEFAULT_USERNAME       "QCOPTER_MEND0Z0"
#define MQTT_DEFAULT_PASSWORD       "QCOPTER_MEND0Z0"
#define MQTT_DEFAULT_TOPIC          "QCOPTER0"
#define MQTT_DEFAULT_TOPIC_CAMERA   "QCOPTER_CAM"
#define MQTT_DEFAULT_QoS            2                   //A garanteed connection is good.
#define MQTT_DEFAULT_QoS_CAMERA     0                   //A losless connection is fine.

#define MQTT_TOPIC_MAX              99                  //Maximum number of drone and topics that can be created.

namespace Ui {
class MQTTClient;
}

class MQTTClient : public QDialog
{
    Q_OBJECT

public:
    explicit MQTTClient(QWidget *parent = nullptr);
    ~MQTTClient();

    void ObjectsDisable( void );

signals:
    void QCopter_Connected( void );
    void QCopter_Disconnected( void );
    void QCopter_NewMessage( QString data );

private slots:
    void mqttConnect( void );
    void mqttPanelClose( void );
    void mqttDisconnect( void );
    void mqttSubscribeDefault( void );
    void mqttReceivedMessages( QMqttMessage &msg );

public slots:
    void mqttSubscribe( uint8_t topicIndex );


private:
    Ui::MQTTClient *ui;

    struct{
        QString hostname;                       //This will hold the hostname for mqtt broker (I will set this to qcopter.mosquitto.org)
        quint16 port;                           //This will hold the mqtt broker port number (It's by default 1883)
        QString username;                       //This will hold the username we should use to connect to the mqtt broker
        QString password;                       //This will hold the password we should use to connect to the mqtt broker
        QMqttTopicFilter topic;                //This will hold the topic that we need to publish and subscribe to
        quint8  QoS;                            //This will hold the QoS level which is 2 (Garantee the data will be sent)
        bool  numberOfTopic[MQTT_TOPIC_MAX];    //This will hold the number of drone that is connected to the mqtt broker
        QString messages;                       //This will hold any messages that come in.
    }mqtt_client;

    QMqttClient *qcopter_mqttClient;

    void ObjectsInit( void );
    void ObjectsEnable( void );
    void ConnectFunctions( void );
    void DisonnectFunctions( void );
};

#endif // MQTTCLIENT_H
