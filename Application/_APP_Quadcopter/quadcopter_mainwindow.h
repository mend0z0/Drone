#ifndef QUADCOPTER_MAINWINDOW_H
#define QUADCOPTER_MAINWINDOW_H

#include <QMainWindow>

#include <mqttclient.h>

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
    void PlainTextUpdate( QString data );

private:
    Ui::Quadcopter_MainWindow *ui;

    MQTTClient *qcopterConsole = new MQTTClient();

    void ConnectFunctions( void );
    void DisconnectFunctions( void );

};
#endif // QUADCOPTER_MAINWINDOW_H
