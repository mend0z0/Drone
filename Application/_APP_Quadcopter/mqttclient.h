#ifndef MQTTCLIENT_H
#define MQTTCLIENT_H

#include <QDialog>
#include <QDebug>
#include <QString>
#include <QByteArray>
#include <QMessageBox>
#include <QMqttClient>
#include <QMqttMessage>
#include <QMqttSubscription>
#include <QProcess>
#include <QPalette>
#include <QMovie>

#define MQTT_DEFAULT_HOSTNAME       "192.168.0.148"
#define MQTT_DEFAULT_PORT           3667
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
    void ObjectsInit( void );

Q_SIGNALS:
    void connected();
    void disconnected();
    void messageStatusChanged(qint32 id, QMqtt::MessageStatus s, const QMqttMessageStatusProperties &properties);
    void messageSent(qint32 id);
    void pingResponseReceived();
    void brokerSessionRestored();
    void messageReceived(QMqttMessage msg);

signals:
    void QCopter_Connected( void );
    void QCopter_Disconnected( void );

private slots:
    void mqttParamSet( void );

    void mqttConnectDisconnectButton( void );
    void mqttPanelClose( void );

    void mqttSubscribeDefault( void );
    void mqttDisconnected( void );
    bool PingResult();

public slots:
    void mqttSubscribeSwitch( uint8_t topicIndex );
    void mqttSendMsg(QByteArray msg);


private:
    Ui::MQTTClient *ui;

    struct{
        QString hostname;                       //This will hold the hostname for mqtt broker (I will set this to qcopter.mosquitto.org)
        quint16 port;                           //This will hold the mqtt broker port number (It's by default 1883)
        QString username;                       //This will hold the username we should use to connect to the mqtt broker
        QString password;                       //This will hold the password we should use to connect to the mqtt broker
        QMqttTopicName topic;                //This will hold the topic that we need to publish and subscribe to
        quint8  QoS;                            //This will hold the QoS level which is 2 (Garantee the data will be sent)
        bool  numberOfTopic[MQTT_TOPIC_MAX];    //This will hold the number of drone that is connected to the mqtt broker
        QString messages;                       //This will hold any messages that come in.
    }mqtt_client;

    QPalette buttonPalette;
    QMovie  *connectionWaitGif = new QMovie(this);

    QProcess *pingProcess = new QProcess();
    QMessageBox *mqttMessageBox = new QMessageBox(this);
    QMqttClient *qcopter_mqttClient = new QMqttClient(this);

    void ParamInit( void );
    void ObjectsEnable( void );
    void ObjectsDisable( void );
    void ConnectFunctions( void );

    void PingMQTTBroker( QString ipAddr );

    void GifLoading( bool cmd );

};

#endif // MQTTCLIENT_H
