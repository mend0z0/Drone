#ifndef QUADCOPTER_SERVER_H
#define QUADCOPTER_SERVER_H

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
#include <QTimer>

#include <QUdpSocket>
#include <QHostAddress>
#include <QAbstractSocket>
#include <QRegularExpression>
#include <QRegularExpressionMatch>

#define MQTT_DEFAULT_HOSTNAME       "192.168.0.148"
#define MQTT_DEFAULT_PORT           3667
#define MQTT_DEFAULT_USERNAME       "QCOPTER_MEND0Z0"
#define MQTT_DEFAULT_PASSWORD       "QCOPTER_MEND0Z0"
#define MQTT_DEFAULT_TOPIC_GENERAL  "QCOPTER_GENERAL"
#define MQTT_DEFAULT_TOPIC_STATUS   "QCOPTER_STATUS"
#define MQTT_DEFAULT_TOPIC_COMMAND  "QCOPTER_COMMAND"
#define MQTT_DEFAULT_TOPIC_CAMERA   "QCOPTER_CAM"
#define MQTT_DEFAULT_QoS            2                   //A garanteed connection is good.
#define MQTT_DEFAULT_QoS_CAMERA     0                   //A losless connection is fine.

#define MQTT_TOPIC_MAX              99                  //Maximum number of drone and topics that can be created.

#define UDP_DEFAULT_HOSTIP         "127.0.0.1"
#define UDP_DEFAULT_PORT           554                  // Real Time Streaming Protocol (RTSP) port number

namespace Ui {
class quadcopter_server;
}

class quadcopter_server : public QDialog
{
    Q_OBJECT

public:
    explicit quadcopter_server(QWidget *parent = nullptr);
    ~quadcopter_server();

    void ServerParamInit( void );

Q_SIGNALS:
    void connected();
    void disconnected();
    void messageStatusChanged(qint32 id, QMqtt::MessageStatus s, const QMqttMessageStatusProperties &properties);
    void messageSent(qint32 id);
    void pingResponseReceived();
    void brokerSessionRestored();
    void messageReceived(QMqttMessage msg);

signals:
    void QCopter_ApplicationIPV4( QString ipv4);

    void QCopter_Connected( void );
    void QCopter_Disconnected( void );
    void QCopter_NewMsgGeneral( QMqttMessage msg );
    void QCopter_NewMsgStatus( QMqttMessage msg );
    void QCopter_NewMsgCommand( QMqttMessage msg );
    void QCopter_MQTTServerStatus( bool status );

    void QCopter_UDPNewData( QByteArray *data, QHostAddress *host = nullptr, quint16 *port = nullptr);
    void QCopter_UDPUpdateState( bool state );

private slots:
    void ServerPanelClose( void );
    void ServerReadIPV4( void );

    void MQTTParamSet( void );
    void MQTTConnectDisconnectButton( void );
    void MQTTSubscribtion( void );
    void MQTTDisconnected( void );
    void MQTTPingResult();
    void MQTTNewReceivedGeneral(QMqttMessage msg);
    void MQTTNewReceivedStatus(QMqttMessage msg);
    void MQTTNewReceivedCommand(QMqttMessage msg);
    void MQTTSendTimerTimeout( void );

    void UDPConnect( void );
    void UDPReceivedData( void );
    void UDPPingResult();
    void UDPCheckConnection();

public slots:
    void MQTTSendMsg(QByteArray msg);

private:
    Ui::quadcopter_server *ui;

    QString defaultGateway;
    QRegularExpressionMatch tempMatch;
    QRegularExpression ipv4Regex;
    QRegularExpression gatewayRegex;

    QProcess *serverPingProcess = new QProcess();
    QMessageBox *consolMessageBox = new QMessageBox(this);

    void CheckAPIPV4( void );

    /*************************************
     *          MQTT Functions
     **************************************/

    struct{
        QString hostname;                       // This will hold the hostname for mqtt broker (I will set this to qcopter.mosquitto.org)
        quint16 port;                           // This will hold the mqtt broker port number (It's by default 1883)
        QString username;                       // This will hold the username we should use to connect to the mqtt broker
        QString password;                       // This will hold the password we should use to connect to the mqtt broker
        QMqttTopicName topicGeneral;            // This will hold the topic that we may need it as general communication to publish and subscribe to
        QMqttTopicName topicStatus;             // This will hold the topic that we receive status from drone
        QMqttTopicName topicCommand;            // This will hold the topic that we send command and receive what we have sent to drone
        quint8  QoS;                            // This will hold the QoS level which is 2 (Garantee the data will be sent)
        bool  numberOfTopic[MQTT_TOPIC_MAX];    // This will hold the number of drone that is connected to the mqtt broker
        QString messages;                       // This will hold any messages that come in.
        bool sendMessageTimeOut;
    }mqtt_client;


    QPalette buttonPalette;
    QMovie  *mqttConnectionWaitGif = new QMovie(this);

    QProcess *mqttPingProcess = new QProcess();
    QMqttClient *qcopter_mqttClient = new QMqttClient(this);

    QTimer *mqttSendTimeout = new QTimer(this);

    void MQTTParamInit( void );
    void MQTTParamUpdate( void );
    void MQTTObjectsEnable( void );
    void MQTTObjectsDisable( void );
    void MQTTConnectFunctions( void );

    void MQTTPingMQTTBroker( QString ipAddr );

    void MQTTGifLoading( bool cmd );

    /*************************************
     *          UDP Functions
     **************************************/

    struct{
        QString hostIP;
        quint16 port;
    }udp_socket;

    QProcess *udpPingProcess = new QProcess();
    QUdpSocket *qcopter_udpsocket = new QUdpSocket(this);
    QMovie  *udpConnectionWaitGif = new QMovie(this);
    //QAbstractSocket *qcopter_udpsocket = new QAbstractSocket( QAbstractSocket::UdpSocket, this);

    void UDPParamInit( void );
    void UDPParamUpdate( void );
    void UDPObjectsEnable( void );
    void UDPObjectsDisable( void );
    void UDPConnectFunctions( void );
    void UDPGifLoading( bool cmd );

};

#endif // QUADCOPTER_SERVER_H
