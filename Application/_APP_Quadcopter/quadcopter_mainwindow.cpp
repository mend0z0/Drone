#include "quadcopter_mainwindow.h"
#include "ui_quadcopter_mainwindow.h"

Quadcopter_MainWindow::Quadcopter_MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Quadcopter_MainWindow)
{
    ui->setupUi(this);

    ConnectFunctions();

}

Quadcopter_MainWindow::~Quadcopter_MainWindow()
{
    delete ui;
}

void Quadcopter_MainWindow::MQTTConsole()
{
    qcopterConsole->ObjectsInit();
    qcopterConsole->setModal(true);
    qcopterConsole->exec();
}

void Quadcopter_MainWindow::MQTTReceivedMsg(QMqttMessage msg)
{
    QPalette mqttTxtPallete;
    mqttTxtPallete.setColor( foregroundRole(), QColor(0,255,0));
    ui->plainTextEdit_LogPanel->setPalette(mqttTxtPallete);
    QDateTime qcopterCurrentDateTime = QDateTime::currentDateTime();
    //add time and date to the received data
    ui->plainTextEdit_LogPanel->appendPlainText(qcopterCurrentDateTime.toString("yyyy-MM-dd HH:mm:ss"));
    ui->plainTextEdit_LogPanel->appendPlainText(": ");
    ui->plainTextEdit_LogPanel->appendPlainText(msg.payload());
    ui->plainTextEdit_LogPanel->appendPlainText("\r\n");

    ui->label_MQTTTopic->setText("Topic: " + msg.topic().name());

    ui->label_MQTTQoS->setText("QoS: " + QString::number(msg.qos()));
}

void Quadcopter_MainWindow::ButtonForward( void )
{
    qDebug() << "Forward has been pressed";
    qcopterConsole->mqttSendMsg("Forward");
}

void Quadcopter_MainWindow::ButtonReverse( void )
{
    qDebug() << "Reverse has been pressed";
    qcopterConsole->mqttSendMsg("Reverse");
}

void Quadcopter_MainWindow::ButtonLeft( void )
{
    qDebug() << "Left has been pressed";
    qcopterConsole->mqttSendMsg("Left");
}

void Quadcopter_MainWindow::ButtonRight( void )
{
    qDebug() << "Right has been pressed";
    qcopterConsole->mqttSendMsg("Right");
}

void Quadcopter_MainWindow::DialCompass( int value )
{
    QByteArray tempdirDegree;
    //ui->dial_AdjustDirection->value()
    tempdirDegree.append(QString::number(value).toStdString());
    qDebug() << "Compass value " << tempdirDegree;
    qcopterConsole->mqttSendMsg(tempdirDegree);
}

void Quadcopter_MainWindow::DroneSelectNext()
{
    //unsubscribe the current topic
    //and increase the topic value
    //subscribe to the new topic value
    qDebug() << "Next Camera has been pressed";
}

void Quadcopter_MainWindow::DroneSelectPrevious()
{
    //unsubscribe the current topic
    //and decrease the topic value
    //subscribe to the new topic value
    qDebug() << "Previous Camera has been pressed";
}

void Quadcopter_MainWindow::ButtonCameraShutter()
{
    //Save a png image from the main screen.
    qDebug() << "Shutter Camera has been pressed";
}

void Quadcopter_MainWindow::ConnectFunctions()
{
    connect(ui->pushButton_ConnectServer, SIGNAL(clicked(bool)), this, SLOT(MQTTConsole()));

    connect(ui->pushButton_MoveForward, SIGNAL(clicked(bool)), this, SLOT(ButtonForward()));
    connect(ui->pushButton_MoveReverse, SIGNAL(clicked(bool)), this, SLOT(ButtonReverse()));
    connect(ui->pushButton_MoveLeft, SIGNAL(clicked(bool)), this, SLOT(ButtonLeft()));
    connect(ui->pushButton_MoveRight, SIGNAL(clicked(bool)), this, SLOT(ButtonRight()));

    connect(ui->dial_AdjustDirection, SIGNAL(valueChanged(int)), this, SLOT(DialCompass(int)));
    connect(ui->pushButton_DroneSelectNext, SIGNAL(clicked(bool)), this, SLOT(DroneSelectNext()));
    connect(ui->pushButton_DroneSelectPrevious, SIGNAL(clicked(bool)), this, SLOT(DroneSelectPrevious()));
    connect(ui->pushButton_DroneCameraSnapshot, SIGNAL(clicked(bool)), this, SLOT(ButtonCameraShutter()));

    connect(qcopterConsole, SIGNAL(messageReceived(QMqttMessage)), this, SLOT(MQTTReceivedMsg(QMqttMessage)));
}

