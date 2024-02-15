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

void Quadcopter_MainWindow::MQTTReceivedMsg(QByteArray data, QMqttTopicName topic)
{
    QPalette mqttTxtPallete;
    mqttTxtPallete.setColor( foregroundRole(), QColor(0,255,0));
    ui->plainTextEdit_LogPanel->setPalette(mqttTxtPallete);
    QDateTime qcopterCurrentDateTime = QDateTime::currentDateTime();
    //add time and date to the received data
    ui->plainTextEdit_LogPanel->appendPlainText(qcopterCurrentDateTime.toString("yyyy-MM-dd HH:mm:ss"));
    ui->plainTextEdit_LogPanel->appendPlainText(": ");
    ui->plainTextEdit_LogPanel->appendPlainText(data);
    ui->plainTextEdit_LogPanel->appendPlainText("\r\n");

    ui->label_MQTTTopic->setText("Topic: " + topic.name());
    //ui->label_MQTTQoS->setText("QoS: " + QString::number(qcopterConsole->qos()));
}

void Quadcopter_MainWindow::ConnectFunctions()
{
    connect(ui->pushButton_ConnectServer, SIGNAL(clicked(bool)), this, SLOT(MQTTConsole()));
    connect(qcopterConsole, SIGNAL(messageReceived(QByteArray,QMqttTopicName)), this, SLOT(MQTTReceivedMsg(QByteArray,QMqttTopicName)));
    connect(qcopterConsole, SIGNAL(ProcessMsgs(QByteArray,QString)), this, SLOT(MQTTReceivedMsg(QByteArray,QMqttTopicName)));

}

