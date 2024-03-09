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
#include <mqttclient.h>
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

private slots:
    void MQTTConsole(void);
    void MQTTReceivedMsgGeneral(QMqttMessage msg);
    void MQTTReceivedMsgStatus(QMqttMessage msg);
    void MQTTReceivedMsgCommand(QMqttMessage msg);
    void MQTTSentMsg(QMqttMessage msg);
    void MQTTUpdateServerStatus( bool status );

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
    void UpdateDroneIndex( uint8_t index );
    void UpdateBatteryLevel( uint16_t value );

    void QuadcopterParamInit( void );
    void QuadcopterParamUpdate( QJsonObject inputObj );
    void ClockInit( void );
    void ClockUpdate( void );

private:
    Ui::Quadcopter_MainWindow *ui;

    const qreal fontPointSize = 8;
    const qreal fontLetterSpacing = (fontPointSize * 12);

    MQTTClient *qcopterConsole = new MQTTClient();
    QMovie  *lostConnectionGif = new QMovie(this);
    QTimer *qcopterGeneralTimer = new QTimer(this);
    QTimer *qcopterButtonTimer = new QTimer(this);

    void ConnectFunctions( void );
    void DisconnectFunctions( void );
    void EnablePanel( void );
    void DisablePanel( void );

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
        QTextCharFormat txtPanelFormatGeneral;
        QTextCharFormat txtPanelFormatStatus;
        QTextCharFormat txtPanelFormatCommand;
        QPen txtBrush;
        bool lockPanel;
        uint8_t index;
    }qcopter;



};
#endif // QUADCOPTER_MAINWINDOW_H
