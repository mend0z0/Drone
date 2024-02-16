#include "quadcopter_mainwindow.h"
#include "ui_quadcopter_mainwindow.h"

Quadcopter_MainWindow::Quadcopter_MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Quadcopter_MainWindow)
{
    ui->setupUi(this);

    lostConnectionGif->setFileName("D:/Projects/STP/Quadcopter/Application/Resources/Gifs/LostConnection.gif");
    lostConnectionGif->setFormat("gif");
    qDebug() << lostConnectionGif->isValid();
    ui->label_DroneCameraView->setMovie(lostConnectionGif);
    ui->label_DroneCameraView->setVisible(false);
    ui->label_Camera1_2->setMovie(lostConnectionGif);
    ui->label_Camera1_2->setVisible(false);
    ui->label_Camera2_2->setMovie(lostConnectionGif);
    ui->label_Camera2_2->setVisible(false);
    ui->label_Camera3_2->setMovie(lostConnectionGif);
    ui->label_Camera3_2->setVisible(false);
    ui->label_Camera4_2->setMovie(lostConnectionGif);
    ui->label_Camera4_2->setVisible(false);
    ui->label_Camera5_2->setMovie(lostConnectionGif);
    ui->label_Camera5_2->setVisible(false);

    ConnectFunctions();

    NoisyTVGifControl(true, 1);
    NoisyTVGifControl(true, 2);
    NoisyTVGifControl(true, 3);
    NoisyTVGifControl(true, 4);
    NoisyTVGifControl(true, 5);
    NoisyTVGifControl(true, 6);

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
    QString tempMsg;
    QPalette mqttTxtPallete;
    mqttTxtPallete.setColor( foregroundRole(), QColor(0,255,0));
    ui->plainTextEdit_LogPanel->setPalette(mqttTxtPallete);
    QDateTime qcopterCurrentDateTime = QDateTime::currentDateTime();
    //add time and date to the received data
    tempMsg.append(qcopterCurrentDateTime.toString("yyyy-MM-dd HH:mm:ss") + ": " + msg.payload());
    ui->plainTextEdit_LogPanel->appendPlainText(tempMsg);

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

    connect(qcopterConsole, SIGNAL(QCopter_NewMessage(QMqttMessage)), this, SLOT(MQTTReceivedMsg(QMqttMessage)));
}

void Quadcopter_MainWindow::NoisyTVGifControl(bool cmd, uint8_t screenNumber)
{

    switch (screenNumber)
    {
    case 1:
        if(cmd)
        {
            ui->graphicsView_DroneCameraView->setVisible(false);

            ui->label_DroneCameraView->setVisible(true);
            lostConnectionGif->start();
        }
        else
        {
            ui->graphicsView_DroneCameraView->setVisible(true);

            ui->label_DroneCameraView->setVisible(false);
            lostConnectionGif->stop();
        }
        break;
    case 2:
        if(cmd)
        {
            ui->graphicsView_Camera0->setVisible(false);

            ui->label_Camera1_2->setVisible(true);
            //ui->label_MainScreen->raise();
            lostConnectionGif->start();
        }
        else
        {
            ui->graphicsView_Camera0->setVisible(true);

            ui->label_Camera1_2->setVisible(false);
            lostConnectionGif->stop();
        }
        break;
    case 3:
        if(cmd)
        {
            ui->graphicsView_Camera1->setVisible(false);

            ui->label_Camera2_2->setVisible(true);
            //ui->label_MainScreen->raise();
            lostConnectionGif->start();
        }
        else
        {
            ui->graphicsView_Camera1->setVisible(true);

            ui->label_Camera2_2->setVisible(false);
            lostConnectionGif->stop();
        }
        break;
    case 4:
        if(cmd)
        {
            ui->graphicsView_Camera2->setVisible(false);

            ui->label_Camera3_2->setVisible(true);
            //ui->label_MainScreen->raise();
            lostConnectionGif->start();
        }
        else
        {
            ui->graphicsView_Camera2->setVisible(true);

            ui->label_Camera3_2->setVisible(false);
            lostConnectionGif->stop();
        }
        break;
    case 5:
        if(cmd)
        {
            ui->graphicsView_Camera3->setVisible(false);

            ui->label_Camera4_2->setVisible(true);
            //ui->label_MainScreen->raise();
            lostConnectionGif->start();
        }
        else
        {
            ui->graphicsView_Camera3->setVisible(true);

            ui->label_Camera4_2->setVisible(false);
            lostConnectionGif->stop();
        }
        break;
    case 6:
        if(cmd)
        {
            ui->graphicsView_Camera4->setVisible(false);

            ui->label_Camera5_2->setVisible(true);
            //ui->label_MainScreen->raise();
            lostConnectionGif->start();
        }
        else
        {
            ui->graphicsView_Camera4->setVisible(true);

            ui->label_Camera5_2->setVisible(false);
            lostConnectionGif->stop();
        }
        break;
    default:
        break;
    }
}

