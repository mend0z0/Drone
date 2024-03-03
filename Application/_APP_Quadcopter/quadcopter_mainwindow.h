#ifndef QUADCOPTER_MAINWINDOW_H
#define QUADCOPTER_MAINWINDOW_H

#include <QMainWindow>
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

QT_BEGIN_NAMESPACE
namespace Ui { class Quadcopter_MainWindow; }
QT_END_NAMESPACE

class Quadcopter_MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    Quadcopter_MainWindow(QWidget *parent = nullptr);
    ~Quadcopter_MainWindow();

private slots:
    void MQTTConsole(void);
    void MQTTReceivedMsg(QMqttMessage msg);

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

    void QuadcopterParamInit( void );
    void QuadcopterParamUpdate( QJsonObject inputObj );
    void ClockInit( void );
    void ClockUpdate( void );

private:
    Ui::Quadcopter_MainWindow *ui;

    MQTTClient *qcopterConsole = new MQTTClient();
    QMovie  *lostConnectionGif = new QMovie(this);
    QTimer *qcopterGeneralTimer = new QTimer(this);
    QTimer *qcopterButtonTimer = new QTimer(this);

    void ConnectFunctions( void );
    void DisconnectFunctions( void );

    void NoisyTVGifControl( bool cmd, uint8_t screenNumber);

    struct{
        QDateTime time;
        QJsonObject jsonObjCommand;
        QJsonObject jsonObjStatus;
        QJsonDocument jsonDocStatus;
        QJsonDocument jsonDocCommand;
        QFont clockFont;
        QPixmap PixmapButtonOn;
        QPixmap PixmapButtonOff;
        bool lockPanel;
    }qcopter;



};
#endif // QUADCOPTER_MAINWINDOW_H
