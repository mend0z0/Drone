#ifndef QUADCOPTER_MAINWINDOW_H
#define QUADCOPTER_MAINWINDOW_H

#include <QMainWindow>
#include <QWidget>
#include <QDebug>
#include <QString>
#include <QByteArray>
#include <QSlider>
#include <QDateTime>
#include <QTimer>
#include <QFont>
#include <QPalette>
#include <QColor>
#include <quadcopter_server.h>
#include <QMovie>
#include <QJsonObject>
#include <QJsonDocument>
#include <QJsonArray>
#include <QJsonValue>
#include <QJsonParseError>
#include <QVariant>
#include <QPixmap>
#include <QImage>
#include <QTextCharFormat>
#include <QPen>
#include <QKeyEvent>
#include <QTransform>
#include <QPainter>
#include <QFileDevice>
#include <QFileDialog>

QT_BEGIN_NAMESPACE
namespace Ui { class Quadcopter_MainWindow; }
QT_END_NAMESPACE

class Quadcopter_MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    Quadcopter_MainWindow(QWidget *parent = nullptr);
    ~Quadcopter_MainWindow();
    const uint8_t QCOPTER_INDEX_MAX = 99UL;
    const uint16_t QCOPTER_BATTERY_VOLTAGE = 3700UL;

protected:
    void keyPressEvent(QKeyEvent *inputCmd);

private slots:
    void ServerConsole(void);

    void MQTTReceivedMsgGeneral(QMqttMessage msg);
    void MQTTReceivedMsgStatus(QMqttMessage msg);
    void MQTTReceivedMsgCommand(QMqttMessage msg);
    void MQTTSentMsg(QMqttMessage msg);
    void MQTTUpdateServerStatus( bool status );

    void UDPUpdateConnectionStatus( bool status );

    void LoRaWANUpdateConnectionStatus( bool status );

    void ButtonReadDisable( void );
    void ButtonReadEnable( void );
    void ButtonReadStatus( void );
    void ButtonForward( void );
    void ButtonReverse( void );
    void ButtonLeft( void );
    void ButtonRight( void );

    void AnimationButtonForward( void );
    void AnimationButtonReverse( void );
    void AnimationButtonLeft( void );
    void AnimationButtonRight( void );

    void GeologicalPosition( int value );
    void Throttle( int value );

    void DroneSelectNext( void );
    void DroneSelectPrevious( void );
    void ButtonCameraShutter( void );
    void DroneDisplayCamera( QByteArray *data, QHostAddress *host = nullptr, quint16 *port = nullptr);

    void SaveLogFile( void );

    void QuadcopterPanelInit( void );
    void QuadcopterParamInit( void );
    void ClockInit( void );
    void LogPanelInit( void );

    void UpdateValueTemperature( int value );
    void UpdateValueHumidity( int value );
    void UpdateValuePressure( int value );
    void UpdateValueBattery( int value );
    void UpdateValueDisplacement( int value );
    void UpdateValueSpeed( int value );
    void UpdateValueHeight( int value );
    void UpdateGeoPos( int value );

    void UpdateDroneIndex( uint8_t index );
    void UpdateDroneIPV4( QString ipv4 );

    void ClockUpdate( void );
    void KeyboardTimerUpdate( void );

    void QuadcopterParamUpdate( QJsonObject inputObj );

private:
    Ui::Quadcopter_MainWindow *ui;

    const qreal fontPointSize = 8;
    const qreal fontLetterSpacing = (fontPointSize * 16);

    quadcopter_server *qcopterConsole = new quadcopter_server();
    QMovie  *lostConnectionGif = new QMovie(this);
    QTimer *qcopterGeneralTimer = new QTimer(this);
    QTimer *qcopterButtonTimer = new QTimer(this);
    QTimer *qcopterKeyboardTimer = new QTimer(this);

    void ConnectFunctions( void );
    void DisconnectFunctions( void );
    void EnablePanel( void );
    void DisablePanel( void );
    void InitFunctions( void );

    void NoisyTVGifControl( bool cmd, uint8_t screenNumber);

    struct{
        QDateTime time;
        QJsonObject jsonObjCommand;
        QJsonObject jsonObjStatus;
        QJsonDocument jsonDocStatus;
        QJsonDocument jsonDocCommand;
        QFont clockFont;
        QFont generalLabelsFont;
        QPixmap PixmapButtonOn;
        QPixmap PixmapButtonOff;
        QPixmap compasOnSpot;
        QTransform compasTransform;
        QPainter compasPainter;
        QTextCharFormat txtPanelFormatGeneral;
        QTextCharFormat txtPanelFormatStatus;
        QTextCharFormat txtPanelFormatCommand;
        QPen txtBrush;
        bool lockPanel;
        bool keyboardTimeout;
        uint8_t index;
    }qcopter;

    struct limitValues{
        int value_max;
        int value_min;
        int value_upper_limit;
        int value_lower_limit;
    };

    struct limitValues temperature;
    struct limitValues humidity;
    struct limitValues pressure;
    struct limitValues battery;
    struct limitValues displacement;
    struct limitValues speed;
    struct limitValues height;


};
#endif // QUADCOPTER_MAINWINDOW_H
