#ifndef QUADCOPTER_MAINWINDOW_H
#define QUADCOPTER_MAINWINDOW_H

#include <QMainWindow>
#include <QDebug>
#include <QString>
#include <QByteArray>
#include <QDateTime>
#include <QFont>
#include <QPalette>
#include <QColor>
#include <mqttclient.h>
#include <QMovie>

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

    void DialCompass( int value );

    void DroneSelectNext( void );
    void DroneSelectPrevious( void );
    void ButtonCameraShutter( void );

private:
    Ui::Quadcopter_MainWindow *ui;

    MQTTClient *qcopterConsole = new MQTTClient();

    QMovie  *lostConnectionGif = new QMovie(this);

    void ConnectFunctions( void );
    void DisconnectFunctions( void );

    void NoisyTVGifControl( bool cmd, uint8_t screenNumber);

};
#endif // QUADCOPTER_MAINWINDOW_H
