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

    qcopter.PixmapButtonOn.load("D:/Projects/STP/Quadcopter/Application/Resources/Textures/Circle_FilledGreen.png");
    qcopter.PixmapButtonOff.load("D:/Projects/STP/Quadcopter/Application/Resources/Textures/Circle_Empty.png");
    qcopter.compasOnSpot.load("D:/Projects/STP/Quadcopter/Application/Resources/Icons/GeoPosLighting.png");


    qcopterGeneralTimer->start(500);
    qcopterButtonTimer->start(100); // 100 miliseconds
    qcopterKeyboardTimer->start(1000);

    MQTTUpdateServerStatus(false);
}

Quadcopter_MainWindow::~Quadcopter_MainWindow()
{
    delete ui;
}

void Quadcopter_MainWindow::Quadcopter_MainWindow::keyPressEvent(QKeyEvent *inputCmd)
{
    int tempKey = inputCmd->key();

    //qDebug() << tempKey;

    //add a timeout here!!.....................................................
    if(qcopter.keyboardTimeout == false)
    {
        return;
    }

    if((tempKey == 'w') || (tempKey == 'W'))
    {
        ButtonForward();
    }
    else if((tempKey == 's') || (tempKey == 'S'))
    {
        ButtonReverse();
    }
    else if((tempKey == 'a') || (tempKey == 'A'))
    {
        ButtonLeft();
    }
    else if((tempKey == 'd') || (tempKey == 'D'))
    {
        ButtonRight();
    }
    else if((tempKey == 'h') || (tempKey == 'H'))
    {
        if(qcopter.jsonObjCommand.value("ELEVATE").toInt() < 300)
        {
            Throttle(qcopter.jsonObjCommand.value("ELEVATE").toInt() + 1);
        }
    }
    else if((tempKey == 'c') || (tempKey == 'C'))
    {
        if(qcopter.jsonObjCommand.value("ELEVATE").toInt() > 0)
        {
            Throttle(qcopter.jsonObjCommand.value("ELEVATE").toInt() - 1);
        }
    }
    else if((tempKey == 'e') || (tempKey == 'E'))
    {
        DroneSelectNext();
    }
    else if((tempKey == 'q') || (tempKey == 'Q'))
    {
        DroneSelectPrevious();
    }
    else if((tempKey == 'f') || (tempKey == 'F'))
    {
        ButtonCameraShutter();
    }

    qcopter.keyboardTimeout = false;

}

void Quadcopter_MainWindow::ServerConsole()
{
    qcopterConsole->ServerParamInit();
    qcopterConsole->setModal(true);
    qcopterConsole->exec();
}

void Quadcopter_MainWindow::FCTRLDebugConsole()
{
    fctrlDebugConsol->debugModeHeader.clear();
    fctrlDebugConsol->debugModeHeader.append("Flight Controller Debug Console");
    fctrlDebugConsol->DebugModeParamInit();
    fctrlDebugConsol->setModal(true);
    fctrlDebugConsol->exec();
}

void Quadcopter_MainWindow::RCTRLDebugConsole()
{
    rctrlDebugConsol->debugModeHeader.clear();
    rctrlDebugConsol->debugModeHeader.append("Radio Controller Debug Console");
    rctrlDebugConsol->DebugModeParamInit();
    rctrlDebugConsol->setModal(true);
    rctrlDebugConsol->exec();
}

void Quadcopter_MainWindow::MQTTReceivedMsgGeneral(QMqttMessage msg)
{
    QString tempMsg;
    qcopter.time = QDateTime::currentDateTime();

    qcopter.txtPanelFormatGeneral.setFont(QFont("Helvetica"));
    qcopter.txtPanelFormatGeneral.setFontLetterSpacing(fontLetterSpacing);
    qcopter.txtPanelFormatGeneral.setFontPointSize(fontPointSize);
    qcopter.txtBrush.setColor(QColor(255,255,255));
    qcopter.txtPanelFormatGeneral.setTextOutline(qcopter.txtBrush);
    ui->plainTextEdit_LogPanel->setCurrentCharFormat(qcopter.txtPanelFormatGeneral);

    tempMsg.append(qcopter.time.toString(   "yyyy-MM-dd HH:mm:ss") +
                                            "\n[ Topic: " + msg.topic().name() +
                                            ", QoS: " + QString::number(msg.qos()) +
                                            " ]\n" + msg.payload());

    ui->plainTextEdit_LogPanel->appendPlainText(tempMsg);
}

void Quadcopter_MainWindow::MQTTReceivedMsgStatus(QMqttMessage msg)
{
    QString tempMsg;
    QByteArray tempJsonDataInput = msg.payload();
    qcopter.time = QDateTime::currentDateTime();

    qcopter.txtPanelFormatStatus.setFont(QFont("Helvetica"));
    qcopter.txtPanelFormatStatus.setFontLetterSpacing(fontLetterSpacing);
    qcopter.txtPanelFormatStatus.setFontPointSize(fontPointSize);
    qcopter.txtBrush.setColor(QColor(74, 148, 0));
    qcopter.txtPanelFormatStatus.setTextOutline(qcopter.txtBrush);
    ui->plainTextEdit_LogPanel->setCurrentCharFormat(qcopter.txtPanelFormatStatus);

    tempMsg.append(qcopter.time.toString(   "yyyy-MM-dd HH:mm:ss") +
                                            "\n[ Topic: " + msg.topic().name() +
                                            ", QoS: " + QString::number(msg.qos()) +
                                            " ]\n" + tempJsonDataInput);

    ui->plainTextEdit_LogPanel->appendPlainText(tempMsg);

    qcopter.jsonDocStatus = QJsonDocument::fromJson(tempJsonDataInput);
    QuadcopterParamUpdate(qcopter.jsonDocStatus.object());
}

void Quadcopter_MainWindow::MQTTReceivedMsgCommand(QMqttMessage msg)
{
    QString tempMsg;
    qcopter.time = QDateTime::currentDateTime();

    qcopter.txtPanelFormatCommand.setFont(QFont("Helvetica"));
    qcopter.txtPanelFormatCommand.setFontLetterSpacing(fontLetterSpacing);
    qcopter.txtPanelFormatCommand.setFontPointSize(fontPointSize);
    qcopter.txtBrush.setColor(QColor(255,0,0));
    qcopter.txtPanelFormatCommand.setTextOutline(qcopter.txtBrush);
    ui->plainTextEdit_LogPanel->setCurrentCharFormat(qcopter.txtPanelFormatCommand);

    tempMsg.append(qcopter.time.toString(   "yyyy-MM-dd HH:mm:ss") +
                                            "\n[ Topic: " + msg.topic().name() +
                                            ", QoS: " + QString::number(msg.qos()) +
                                            " ]\n" + msg.payload());

    ui->plainTextEdit_LogPanel->appendPlainText(tempMsg);
}

void Quadcopter_MainWindow::MQTTSentMsg(QMqttMessage msg)
{
    QString tempMsg;
    QPalette mqttTxtPallete;
    qcopter.time = QDateTime::currentDateTime();

    mqttTxtPallete.setColor( foregroundRole(), QColor(255,0,0));
    ui->plainTextEdit_LogPanel->setPalette(mqttTxtPallete);

    tempMsg.append(qcopter.time.toString("yyyy-MM-dd HH:mm:ss") + "->[ Topic: " + msg.topic().name() + ", QoS: " + QString::number(msg.qos()) + " ]"+ ": " + msg.payload());
    ui->plainTextEdit_LogPanel->appendPlainText(tempMsg);
}

void Quadcopter_MainWindow::MQTTUpdateServerStatus(bool status)
{
    qcopter.generalLabelsFont.setPixelSize(14);
    ui->label_StatusMQTTServer->setFont(qcopter.generalLabelsFont);
    ui->label_StatusMQTTServer->setAlignment(Qt::AlignCenter);
    if(status)
    {
        ui->label_StatusMQTTServer->setText("CONNECTED");
        ui->label_StatusMQTTServer->setStyleSheet("background-color: rgb(0, 200, 25);"
                                                  "border-radius: 10px;"
                                                  "alignment: center-aligned;"
                                                  "padding: 5px;"
                                                  "font: bold");
        EnablePanel();
    }
    else
    {
        ui->label_StatusMQTTServer->setText("DISCONNETED");
        ui->label_StatusMQTTServer->setStyleSheet("background-color: rgb(200, 0, 50);"
                                                  "border-radius: 10px;"
                                                  "alignment: center-aligned;"
                                                  "padding: 5px;"
                                                  "font: bold");
        DisablePanel();
    }
}

void Quadcopter_MainWindow::UDPUpdateConnectionStatus(bool status)
{
    qcopter.generalLabelsFont.setPixelSize(14);
    ui->label_StatusUDPConnection->setFont(qcopter.generalLabelsFont);
    ui->label_StatusUDPConnection->setAlignment(Qt::AlignCenter);
    if(status)
    {
        ui->label_StatusUDPConnection->setText("ENABLED");
        ui->label_StatusUDPConnection->setStyleSheet("background-color: rgb(0, 200, 25);"
                                                  "border-radius: 10px;"
                                                  "padding: 5px;"
                                                  "font: bold");
    }
    else
    {
        ui->label_StatusUDPConnection->setText("DISABLED");
        ui->label_StatusUDPConnection->setStyleSheet("background-color: rgb(200, 0, 50);"
                                                  "border-radius: 10px;"
                                                  "padding: 5px;"
                                                  "font: bold");
    }
}

void Quadcopter_MainWindow::LoRaWANUpdateConnectionStatus(bool status)
{
    qcopter.generalLabelsFont.setPixelSize(14);
    ui->label_StatusLoRaWANServer->setFont(qcopter.generalLabelsFont);
    ui->label_StatusLoRaWANServer->setAlignment(Qt::AlignCenter);
    if(status)
    {
        ui->label_StatusLoRaWANServer->setText("CONNECTED");
        ui->label_StatusLoRaWANServer->setStyleSheet("background-color: rgb(0, 200, 25);"
                                                     "border-radius: 10px;"
                                                     "padding: 5px;"
                                                     "font: bold");
    }
    else
    {
        ui->label_StatusLoRaWANServer->setText("DISCONNECTED");
        ui->label_StatusLoRaWANServer->setStyleSheet("background-color: rgb(200, 0, 50);"
                                                     "border-radius: 10px;"
                                                     "padding: 5px;"
                                                     "font: bold");
    }
}

void Quadcopter_MainWindow::ButtonReadDisable()
{
    disconnect(qcopterGeneralTimer, SIGNAL(timeout()), this, SLOT(ButtonReadStatus()));
}

void Quadcopter_MainWindow::ButtonReadEnable()
{
    connect(qcopterGeneralTimer, SIGNAL(timeout()), this, SLOT(ButtonReadStatus()));
}

void Quadcopter_MainWindow::ButtonReadStatus()
{
    if(ui->pushButton_MoveForward->isDown() == true)
    {
        ButtonForward();
    }
    else if(ui->pushButton_MoveReverse->isDown() == true)
    {
        ButtonReverse();
    }
    else if(ui->pushButton_MoveLeft->isDown() == true)
    {
        ButtonLeft();
    }
    else if(ui->pushButton_MoveRight->isDown() == true)
    {
        ButtonRight();
    }
}

void Quadcopter_MainWindow::ButtonForward( void )
{
    qcopter.jsonObjCommand["FORWARD"]=1;
    qcopter.jsonDocCommand.setObject(qcopter.jsonObjCommand);

    //qDebug() << qcopter.jsonDocCommand;
    //qDebug() << "Forward has been pressed";

    qcopterConsole->MQTTSendMsg(qcopter.jsonDocCommand.toJson());

    qcopter.jsonObjCommand["FORWARD"] =0;
    qcopter.jsonDocCommand.setObject(qcopter.jsonObjCommand);

    AnimationButtonForward();
}

void Quadcopter_MainWindow::ButtonReverse( void )
{
    qcopter.jsonObjCommand["REVERSE"]=1;
    qcopter.jsonDocCommand.setObject(qcopter.jsonObjCommand);

    //qDebug() << qcopter.jsonDocCommand;
    //qDebug() << "Reverse has been pressed";

    qcopterConsole->MQTTSendMsg(qcopter.jsonDocCommand.toJson());

    qcopter.jsonObjCommand["REVERSE"]=0;
    qcopter.jsonDocCommand.setObject(qcopter.jsonObjCommand);

    AnimationButtonReverse();
}

void Quadcopter_MainWindow::ButtonLeft( void )
{
    qcopter.jsonObjCommand["LEFT"] =1;
    qcopter.jsonDocCommand.setObject(qcopter.jsonObjCommand);

    //qDebug() << qcopter.jsonDocCommand;
    //qDebug() << "Left has been pressed";

    qcopterConsole->MQTTSendMsg(qcopter.jsonDocCommand.toJson());

    qcopter.jsonObjCommand["LEFT"] =0;
    qcopter.jsonDocCommand.setObject(qcopter.jsonObjCommand);

    AnimationButtonLeft();
}

void Quadcopter_MainWindow::ButtonRight( void )
{
    qcopter.jsonObjCommand["RIGHT"] =1;
    qcopter.jsonDocCommand.setObject(qcopter.jsonObjCommand);

    //qDebug() << qcopter.jsonDocCommand;
    //qDebug() << "Right has been pressed";

    qcopterConsole->MQTTSendMsg(qcopter.jsonDocCommand.toJson());

    qcopter.jsonObjCommand["RIGHT"] =0;
    qcopter.jsonDocCommand.setObject(qcopter.jsonObjCommand);

    AnimationButtonRight();
}

void Quadcopter_MainWindow::AnimationButtonForward()
{
    static uint8_t cnt = 0;
    switch(cnt)
    {
    case 0:
        connect( qcopterButtonTimer, SIGNAL(timeout()), this, SLOT(AnimationButtonForward()));
        cnt++;
        break;
    case 1:
        ui->label_F22->setPixmap(qcopter.PixmapButtonOn);
        ui->label_F23->setPixmap(qcopter.PixmapButtonOn);
        ui->label_F24->setPixmap(qcopter.PixmapButtonOn);
        cnt++;
        break;
    case 2:
        ui->label_F32->setPixmap(qcopter.PixmapButtonOn);
        ui->label_F33->setPixmap(qcopter.PixmapButtonOn);
        cnt++;
        break;
    case 3:
        ui->label_F41->setPixmap(qcopter.PixmapButtonOn);
        ui->label_F42->setPixmap(qcopter.PixmapButtonOn);
        ui->label_F43->setPixmap(qcopter.PixmapButtonOn);

        cnt++;
        break;
    case 4:
        ui->label_F51->setPixmap(qcopter.PixmapButtonOn);
        ui->label_F52->setPixmap(qcopter.PixmapButtonOn);

        ui->label_F22->setPixmap(qcopter.PixmapButtonOff);
        ui->label_F23->setPixmap(qcopter.PixmapButtonOff);
        ui->label_F24->setPixmap(qcopter.PixmapButtonOff);
        cnt++;
        break;
    case 5:
        ui->label_F61->setPixmap(qcopter.PixmapButtonOn);
        ui->label_F62->setPixmap(qcopter.PixmapButtonOn);

        ui->label_F32->setPixmap(qcopter.PixmapButtonOff);
        ui->label_F33->setPixmap(qcopter.PixmapButtonOff);
        cnt++;
        break;
    case 6:
        ui->label_F71->setPixmap(qcopter.PixmapButtonOn);

        ui->label_F41->setPixmap(qcopter.PixmapButtonOff);
        ui->label_F42->setPixmap(qcopter.PixmapButtonOff);
        ui->label_F43->setPixmap(qcopter.PixmapButtonOff);
        cnt++;
        break;
    case 7:
        ui->label_F51->setPixmap(qcopter.PixmapButtonOff);
        ui->label_F52->setPixmap(qcopter.PixmapButtonOff);

        ui->label_F61->setPixmap(qcopter.PixmapButtonOff);
        ui->label_F62->setPixmap(qcopter.PixmapButtonOff);
        cnt++;
        break;
    default:
        ui->label_F71->setPixmap(qcopter.PixmapButtonOff);
        cnt = 0;
        disconnect( qcopterButtonTimer, SIGNAL(timeout()), this, SLOT(AnimationButtonForward()));
        break;
    }
}

void Quadcopter_MainWindow::AnimationButtonReverse()
{
    static uint8_t cnt = 0;
    switch(cnt)
    {
    case 0:
        connect( qcopterButtonTimer, SIGNAL(timeout()), this, SLOT(AnimationButtonReverse()));

        cnt++;
        break;
    case 1:
        ui->label_B22->setPixmap(qcopter.PixmapButtonOn);
        ui->label_B23->setPixmap(qcopter.PixmapButtonOn);
        ui->label_B24->setPixmap(qcopter.PixmapButtonOn);
        cnt++;
        break;
    case 2:
        ui->label_B32->setPixmap(qcopter.PixmapButtonOn);
        ui->label_B33->setPixmap(qcopter.PixmapButtonOn);
        cnt++;
        break;
    case 3:
        ui->label_B41->setPixmap(qcopter.PixmapButtonOn);
        ui->label_B42->setPixmap(qcopter.PixmapButtonOn);
        ui->label_B43->setPixmap(qcopter.PixmapButtonOn);
        cnt++;
        break;
    case 4:
        ui->label_B51->setPixmap(qcopter.PixmapButtonOn);
        ui->label_B52->setPixmap(qcopter.PixmapButtonOn);

        ui->label_B22->setPixmap(qcopter.PixmapButtonOff);
        ui->label_B23->setPixmap(qcopter.PixmapButtonOff);
        ui->label_B24->setPixmap(qcopter.PixmapButtonOff);
        cnt++;
        break;
    case 5:
        ui->label_B61->setPixmap(qcopter.PixmapButtonOn);
        ui->label_B62->setPixmap(qcopter.PixmapButtonOn);

        ui->label_B32->setPixmap(qcopter.PixmapButtonOff);
        ui->label_B33->setPixmap(qcopter.PixmapButtonOff);
        cnt++;
        break;
    case 6:
        ui->label_B71->setPixmap(qcopter.PixmapButtonOn);

        ui->label_B41->setPixmap(qcopter.PixmapButtonOff);
        ui->label_B42->setPixmap(qcopter.PixmapButtonOff);
        ui->label_B43->setPixmap(qcopter.PixmapButtonOff);
        cnt++;
        break;
    case 7:
        ui->label_B51->setPixmap(qcopter.PixmapButtonOff);
        ui->label_B52->setPixmap(qcopter.PixmapButtonOff);

        ui->label_B61->setPixmap(qcopter.PixmapButtonOff);
        ui->label_B62->setPixmap(qcopter.PixmapButtonOff);
        cnt++;
        break;
    default:
        ui->label_B71->setPixmap(qcopter.PixmapButtonOff);
        cnt = 0;
        disconnect( qcopterButtonTimer, SIGNAL(timeout()), this, SLOT(AnimationButtonReverse()));
        break;
    }
}

void Quadcopter_MainWindow::AnimationButtonLeft()
{
    static uint8_t cnt = 0;
    switch(cnt)
    {
    case 0:
        connect( qcopterButtonTimer, SIGNAL(timeout()), this, SLOT(AnimationButtonLeft()));
        cnt++;
        break;
    case 1:
        ui->label_L22->setPixmap(qcopter.PixmapButtonOn);
        ui->label_L23->setPixmap(qcopter.PixmapButtonOn);
        ui->label_L24->setPixmap(qcopter.PixmapButtonOn);
        cnt++;
        break;
    case 2:
        ui->label_L32->setPixmap(qcopter.PixmapButtonOn);
        ui->label_L33->setPixmap(qcopter.PixmapButtonOn);
        cnt++;
        break;
    case 3:
        ui->label_L41->setPixmap(qcopter.PixmapButtonOn);
        ui->label_L42->setPixmap(qcopter.PixmapButtonOn);
        ui->label_L43->setPixmap(qcopter.PixmapButtonOn);

        cnt++;
        break;
    case 4:
        ui->label_L51->setPixmap(qcopter.PixmapButtonOn);
        ui->label_L52->setPixmap(qcopter.PixmapButtonOn);

        ui->label_L22->setPixmap(qcopter.PixmapButtonOff);
        ui->label_L23->setPixmap(qcopter.PixmapButtonOff);
        ui->label_L24->setPixmap(qcopter.PixmapButtonOff);
        cnt++;
        break;
    case 5:
        ui->label_L61->setPixmap(qcopter.PixmapButtonOn);
        ui->label_L62->setPixmap(qcopter.PixmapButtonOn);

        ui->label_L32->setPixmap(qcopter.PixmapButtonOff);
        ui->label_L33->setPixmap(qcopter.PixmapButtonOff);
        cnt++;
        break;
    case 6:
        ui->label_L71->setPixmap(qcopter.PixmapButtonOn);

        ui->label_L41->setPixmap(qcopter.PixmapButtonOff);
        ui->label_L42->setPixmap(qcopter.PixmapButtonOff);
        ui->label_L43->setPixmap(qcopter.PixmapButtonOff);
        cnt++;
        break;
    case 7:
        ui->label_L51->setPixmap(qcopter.PixmapButtonOff);
        ui->label_L52->setPixmap(qcopter.PixmapButtonOff);

        ui->label_L61->setPixmap(qcopter.PixmapButtonOff);
        ui->label_L62->setPixmap(qcopter.PixmapButtonOff);
        cnt++;
        break;
    default:
        ui->label_L71->setPixmap(qcopter.PixmapButtonOff);
        cnt = 0;
        disconnect( qcopterButtonTimer, SIGNAL(timeout()), this, SLOT(AnimationButtonLeft()));
        break;
    }
}

void Quadcopter_MainWindow::AnimationButtonRight()
{
    static uint8_t cnt = 0;
    switch(cnt)
    {
    case 0:
        connect( qcopterButtonTimer, SIGNAL(timeout()), this, SLOT(AnimationButtonRight()));
        cnt++;
        break;
    case 1:
        ui->label_R22->setPixmap(qcopter.PixmapButtonOn);
        ui->label_R23->setPixmap(qcopter.PixmapButtonOn);
        ui->label_R24->setPixmap(qcopter.PixmapButtonOn);
        cnt++;
        break;
    case 2:
        ui->label_R32->setPixmap(qcopter.PixmapButtonOn);
        ui->label_R33->setPixmap(qcopter.PixmapButtonOn);
        cnt++;
        break;
    case 3:
        ui->label_R41->setPixmap(qcopter.PixmapButtonOn);
        ui->label_R42->setPixmap(qcopter.PixmapButtonOn);
        ui->label_R43->setPixmap(qcopter.PixmapButtonOn);
        cnt++;
        break;
    case 4:
        ui->label_R51->setPixmap(qcopter.PixmapButtonOn);
        ui->label_R52->setPixmap(qcopter.PixmapButtonOn);

        ui->label_R22->setPixmap(qcopter.PixmapButtonOff);
        ui->label_R23->setPixmap(qcopter.PixmapButtonOff);
        ui->label_R24->setPixmap(qcopter.PixmapButtonOff);
        cnt++;
        break;
    case 5:
        ui->label_R61->setPixmap(qcopter.PixmapButtonOn);
        ui->label_R62->setPixmap(qcopter.PixmapButtonOn);

        ui->label_R32->setPixmap(qcopter.PixmapButtonOff);
        ui->label_R33->setPixmap(qcopter.PixmapButtonOff);
        cnt++;
        break;
    case 6:
        ui->label_R71->setPixmap(qcopter.PixmapButtonOn);

        ui->label_R41->setPixmap(qcopter.PixmapButtonOff);
        ui->label_R42->setPixmap(qcopter.PixmapButtonOff);
        ui->label_R43->setPixmap(qcopter.PixmapButtonOff);
        cnt++;
        break;
    case 7:
        ui->label_R51->setPixmap(qcopter.PixmapButtonOff);
        ui->label_R52->setPixmap(qcopter.PixmapButtonOff);

        ui->label_R61->setPixmap(qcopter.PixmapButtonOff);
        ui->label_R62->setPixmap(qcopter.PixmapButtonOff);
        cnt++;
        break;
    default:
        ui->label_R71->setPixmap(qcopter.PixmapButtonOff);
        cnt = 0;
        disconnect( qcopterButtonTimer, SIGNAL(timeout()), this, SLOT(AnimationButtonRight()));
        break;
    }
}

void Quadcopter_MainWindow::GeologicalPosition( int value )
{
    qcopter.jsonObjCommand["DIRECT"] = value;
    qcopter.jsonDocCommand.setObject(qcopter.jsonObjCommand);

    //qDebug() << qcopter.jsonDocCommand;
    //qDebug() << "Compass Degree" << value;

    qcopterConsole->MQTTSendMsg(qcopter.jsonDocCommand.toJson());
}

void Quadcopter_MainWindow::Throttle(int value)
{
    ui->lcdNumber_ValueThrottle->display(value);
    ui->verticalSlider_Throttle->setValue(value);

    qcopter.jsonObjCommand["ELEVATE"] = value;
    qcopter.jsonDocCommand.setObject(qcopter.jsonObjCommand);

    //qDebug() << qcopter.jsonDocCommand;
    //qDebug() << "Height" << value << "cm";

    qcopterConsole->MQTTSendMsg(qcopter.jsonDocCommand.toJson());
}

void Quadcopter_MainWindow::DroneSelectNext()
{
    //unsubscribe the current topic
    //and increase the topic value
    //subscribe to the new topic value
    qDebug() << "Next Camera has been pressed";
    qcopter.index++;
    if(qcopter.index > QCOPTER_INDEX_MAX)
    {
        qcopter.index = QCOPTER_INDEX_MAX;
    }
    UpdateDroneIndex(qcopter.index);
}

void Quadcopter_MainWindow::DroneSelectPrevious()
{
    //unsubscribe the current topic
    //and decrease the topic value
    //subscribe to the new topic value
    qDebug() << "Previous Camera has been pressed";

    if(qcopter.index > 0)
    {
        qcopter.index--;
    }
    UpdateDroneIndex(qcopter.index);

}

void Quadcopter_MainWindow::ButtonCameraShutter()
{
    //Save a png image from the main screen.
    qDebug() << "Shutter Camera has been pressed";
}

void Quadcopter_MainWindow::DroneDisplayCamera(QByteArray *data, QHostAddress *host, quint16 *port)
{
    qDebug() << data;
    UpdateDroneIPV4( host->toString());
}

void Quadcopter_MainWindow::SaveLogFile()
{
    QString defaultFileName = "../qcopter log - ";
    qcopter.time = QDateTime::currentDateTime();
    defaultFileName.append(qcopter.time.toString("dd.MM.yyyy - HH.mm.ss"));
    QString filename = QFileDialog::getSaveFileName( this, tr("Save File"), defaultFileName, tr("Text Files(*.txt)"));

    if(filename.isEmpty())
    {
        return;
    }

    QFile file(filename);
    if(!file.open(QIODevice::WriteOnly))
    {
        QMessageBox::information(this, tr("Unable to open file"), file.errorString());
        return;
    }

    QTextStream out(&file);

    out << ui->plainTextEdit_LogPanel->toPlainText();
    LogPanelInit();
}

void Quadcopter_MainWindow::QuadcopterPanelInit()
{
    //init all the text fonts size and shape and color!
    qcopter.generalLabelsFont.setPixelSize(14);

    ui->label_MQTTServer->setFont(qcopter.generalLabelsFont);
    ui->label_MQTTServer->setStyleSheet("background-color: rgb(232, 233, 235);"
                                              "border-radius: 10px;"
                                              "padding: 5px;");
    
    
    ui->label_ApplicationIPV4->setFont(qcopter.generalLabelsFont);
    ui->label_ApplicationIPV4->setStyleSheet("background-color: rgb(232, 233, 235);"
                                              "border-radius: 10px;"
                                              "padding: 5px;");
    
    ui->label_ValueApplicationIPV4->setFont(qcopter.generalLabelsFont);
    ui->label_ValueApplicationIPV4->setStyleSheet("background-color: rgb(232, 233, 235);"
                                              "border-radius: 10px;"
                                              "padding: 5px;");
    ui->label_ValueApplicationIPV4->setAlignment(Qt::AlignCenter);
    ui->label_ValueApplicationIPV4->setText("---.---.---.---");

    ui->label_LoRaWANServer->setFont(qcopter.generalLabelsFont);
    ui->label_LoRaWANServer->setStyleSheet("background-color: rgb(232, 233, 235);"
                                              "border-radius: 10px;"
                                              "padding: 5px;");

    LoRaWANUpdateConnectionStatus(false);

    ui->label_LoRaWANFrequency->setFont(qcopter.generalLabelsFont);
    ui->label_LoRaWANFrequency->setStyleSheet("background-color: rgb(232, 233, 235);"
                                              "border-radius: 10px;"
                                              "padding: 5px;");

    ui->label_ValueLoRaWANFrequency->setFont(qcopter.generalLabelsFont);
    ui->label_ValueLoRaWANFrequency->setStyleSheet("background-color: rgb(232, 233, 235);"
                                              "border-radius: 10px;"
                                              "padding: 5px;");
    ui->label_ValueLoRaWANFrequency->setAlignment(Qt::AlignCenter);
    ui->label_ValueLoRaWANFrequency->setText("---.-- MHz");

    ui->label_UDPConnection->setFont(qcopter.generalLabelsFont);
    ui->label_UDPConnection->setStyleSheet("background-color: rgb(232, 233, 235);"
                                                   "border-radius: 10px;"
                                                   "padding: 5px;");

    UDPUpdateConnectionStatus(false);

    ui->label_DroneIndex->setFont(qcopter.generalLabelsFont);
    ui->label_DroneIndex->setStyleSheet("background-color: rgb(232, 233, 235);"
                                              "border-radius: 10px;"
                                              "padding: 5px;");

    ui->label_ValueDroneIndex->setFont(qcopter.generalLabelsFont);
    ui->label_ValueDroneIndex->setStyleSheet("background-color: rgb(232, 233, 235);"
                                              "border-radius: 10px;"
                                              "padding: 5px;");

    ui->label_DroneType->setFont(qcopter.generalLabelsFont);
    ui->label_DroneType->setStyleSheet("background-color: rgb(232, 233, 235);"
                                              "border-radius: 10px;"
                                              "padding: 5px;");

    ui->label_ValueDroneType->setFont(qcopter.generalLabelsFont);
    ui->label_ValueDroneType->setStyleSheet("background-color: rgb(232, 233, 235);"
                                              "border-radius: 10px;"
                                              "padding: 5px;");

    ui->label_DroneIPV4->setFont(qcopter.generalLabelsFont);
    ui->label_DroneIPV4->setStyleSheet("background-color: rgb(232, 233, 235);"
                                            "border-radius: 10px;"
                                            "padding: 5px;");

    UpdateDroneIPV4("");

    ui->label_Pressure->setFont(qcopter.generalLabelsFont);
    ui->label_Pressure->setStyleSheet("background-color: rgb(232, 233, 235);"
                                              "border-radius: 10px;"
                                              "padding: 5px;");

    ui->label_Temperature->setFont(qcopter.generalLabelsFont);
    ui->label_Temperature->setStyleSheet("background-color: rgb(232, 233, 235);"
                                              "border-radius: 10px;"
                                              "padding: 5px;");

    ui->label_Humedity->setFont(qcopter.generalLabelsFont);
    ui->label_Humedity->setStyleSheet("background-color: rgb(232, 233, 235);"
                                              "border-radius: 10px;"
                                              "padding: 5px;");

    ui->label_Speed->setFont(qcopter.generalLabelsFont);
    ui->label_Speed->setStyleSheet("background-color: rgb(232, 233, 235);"
                                              "border-radius: 10px;"
                                              "padding: 5px;");

    ui->label_Displacement->setFont(qcopter.generalLabelsFont);
    ui->label_Displacement->setStyleSheet("background-color: rgb(232, 233, 235);"
                                              "border-radius: 10px;"
                                              "padding: 5px;");

    ui->label_Height->setFont(qcopter.generalLabelsFont);
    ui->label_Height->setStyleSheet("background-color: rgb(232, 233, 235);"
                                              "border-radius: 10px;"
                                              "padding: 5px;");

    ui->verticalSlider_Throttle->setValue(0);
    ui->lcdNumber_ValueThrottle->display(0);

    LogPanelInit();
}

void Quadcopter_MainWindow::UpdateDroneIndex(uint8_t index)
{
    qcopter.generalLabelsFont.setPixelSize(14);
    ui->label_ValueDroneIndex->setFont(qcopter.generalLabelsFont);
    ui->label_ValueDroneIndex->setText(QString::number(index) + "/99");
    qcopter.jsonObjStatus["QCOPTER"] = qcopter.index;
    qcopter.jsonDocStatus.setObject(qcopter.jsonObjStatus);
    qcopter.jsonObjCommand["QCOPTER"] = qcopter.index;
    qcopter.jsonDocCommand.setObject(qcopter.jsonObjStatus);
}

void Quadcopter_MainWindow::UpdateDroneIPV4(QString ipv4)
{
    ui->label_ValueDroneIPV4->setFont(qcopter.generalLabelsFont);
    ui->label_ValueDroneIPV4->setStyleSheet("background-color: rgb(232, 233, 235);"
                                      "border-radius: 10px;"
                                      "padding: 5px;");
    ui->label_ValueDroneIPV4->setText(ipv4);
}

void Quadcopter_MainWindow::QuadcopterParamInit()
{
    qcopter.index = 0;

    qcopter.jsonObjStatus.insert("QCOPTER", qcopter.index);
    qcopter.jsonObjStatus.insert("PRESSURE", 0);
    qcopter.jsonObjStatus.insert("TEMP", 0);
    qcopter.jsonObjStatus.insert("HUMEDITY" , 0);
    qcopter.jsonObjStatus.insert("BATT" , 0);
    qcopter.jsonObjStatus.insert("SPEED" , 0);
    qcopter.jsonObjStatus.insert("DISPLACEMENT" , 0);
    qcopter.jsonObjStatus.insert("HEIGHT" , 0);
    qcopter.jsonObjStatus.insert("GEOPOS", 0);

    qcopter.jsonDocStatus.setObject(qcopter.jsonObjStatus);

    qcopter.jsonObjCommand.insert("QCOPTER", qcopter.index);
    qcopter.jsonObjCommand.insert("FORWARD",0);
    qcopter.jsonObjCommand.insert("REVERSE",0);
    qcopter.jsonObjCommand.insert("LEFT",0);
    qcopter.jsonObjCommand.insert("RIGHT",0);
    qcopter.jsonObjCommand.insert("DIRECT",0);
    qcopter.jsonObjCommand.insert("ELEVATE",0);

    qcopter.jsonDocCommand.setObject(qcopter.jsonObjCommand);

    qDebug() << qcopter.jsonDocStatus;
    qDebug() << qcopter.jsonDocCommand;

    temperature.value_max = 85;
    temperature.value_min = 0;
    temperature.value_upper_limit = 40;
    temperature.value_lower_limit = 10;

    humidity.value_max = 100;
    humidity.value_min = 0;
    humidity.value_upper_limit = 75;
    humidity.value_lower_limit = 25;

    pressure.value_max = 1100;
    pressure.value_min = 300;
    pressure.value_upper_limit = 900;
    pressure.value_lower_limit = 500;

    battery.value_max = 100;
    battery.value_min = 0;
    battery.value_upper_limit = 75;
    battery.value_lower_limit = 25;

    displacement.value_max = 500;
    displacement.value_min = 0;
    displacement.value_upper_limit = 350;
    displacement.value_lower_limit = 100;

    speed.value_max = 500;
    speed.value_min = 0;
    speed.value_upper_limit = 100;
    speed.value_lower_limit = 20;

    height.value_max = 400;
    height.value_min = 0;
    height.value_upper_limit = 300;
    height.value_lower_limit = 20;

    QuadcopterParamUpdate( qcopter.jsonObjStatus );
}

void Quadcopter_MainWindow::QuadcopterParamUpdate(QJsonObject inputObj)
{

    //Check if the input param is coming from the correct drone (we'll check the index value)
    if(!inputObj.contains("QCOPTER"))
    {
        qDebug() << "The input status string doesn't contain quadcopter index value";
        return;
    }
    if(inputObj["QCOPTER"].toInt() != qcopter.index)
    {
        qDebug() << "We don't get status from this drone at the moment";
        return;
    }

    if(inputObj.contains("PRESSURE"))
    {
        qcopter.jsonObjStatus["PRESSURE"] = inputObj["PRESSURE"];
    }
    if(inputObj.contains("TEMP"))
    {
        qcopter.jsonObjStatus["TEMP"] = inputObj["TEMP"];
    }
    if(inputObj.contains("HUMEDITY"))
    {
        qcopter.jsonObjStatus["HUMEDITY"] = inputObj["HUMEDITY"];
    }
    if(inputObj.contains("BATT"))
    {
        qcopter.jsonObjStatus["BATT"] = inputObj["BATT"];
    }
    if(inputObj.contains("SPEED"))
    {
        qcopter.jsonObjStatus["SPEED"] = inputObj["SPEED"];
    }
    if(inputObj.contains("DISPLACEMENT"))
    {
        qcopter.jsonObjStatus["DISPLACEMENT"] = inputObj["DISPLACEMENT"];
    }
    if(inputObj.contains("HEIGHT"))
    {
        qcopter.jsonObjStatus["HEIGHT"] = inputObj["HEIGHT"];
    }
    if(inputObj.contains("GEOPOS"))
    {
        qcopter.jsonObjStatus["GEOPOS"] = inputObj["GEOPOS"];
    }

    qcopter.jsonDocStatus.setObject(qcopter.jsonObjStatus);

    UpdateValuePressure(qcopter.jsonObjStatus.value("PRESSURE").toInt());
    UpdateValueTemperature(qcopter.jsonObjStatus.value("TEMP").toInt());
    UpdateValueHumidity(qcopter.jsonObjStatus.value("HUMEDITY").toInt());
    UpdateValueSpeed(qcopter.jsonObjStatus.value("SPEED").toInt());
    UpdateValueDisplacement(qcopter.jsonObjStatus.value("DISPLACEMENT").toInt());
    UpdateValueHeight(qcopter.jsonObjStatus.value("HEIGHT").toInt());
    UpdateValueBattery(qcopter.jsonObjStatus.value("BATT").toInt());
    UpdateGeoPos(qcopter.jsonObjStatus.value("GEOPOS").toInt());
}

void Quadcopter_MainWindow::ClockInit()
{
    qcopter.clockFont.setPixelSize(32);
    ui->label_Time->setFont(qcopter.clockFont);
    ui->label_Time->setAlignment(Qt::AlignCenter);
    qcopter.time = QDateTime::currentDateTime();
    ui->label_Time->setText(qcopter.time.toString("HH:mm:ss"));
}

void Quadcopter_MainWindow::LogPanelInit()
{
    ui->plainTextEdit_LogPanel->setReadOnly(true);
    qcopter.time = QDateTime::currentDateTime();
    QString tempString = "Log panel (" + qcopter.time.toString("dd/MM/yyyy - HH:mm:ss") + ") --> \r\n\n";
    qcopter.txtPanelFormatGeneral.setFont(QFont("Helvetica"));
    qcopter.txtPanelFormatGeneral.setFontLetterSpacing(fontLetterSpacing);
    qcopter.txtPanelFormatGeneral.setFontPointSize(fontPointSize);
    qcopter.txtBrush.setColor(QColor(0,0,0));
    qcopter.txtPanelFormatGeneral.setTextOutline(qcopter.txtBrush);
    ui->plainTextEdit_LogPanel->setCurrentCharFormat(qcopter.txtPanelFormatGeneral);

    ui->plainTextEdit_LogPanel->clear();
    ui->plainTextEdit_LogPanel->appendPlainText(tempString);
}

void Quadcopter_MainWindow::ClockUpdate()
{
    qcopter.time = QDateTime::currentDateTime();
    ui->label_Time->setText(qcopter.time.toString("HH:mm:ss"));
}

void Quadcopter_MainWindow::KeyboardTimerUpdate()
{
    if(qcopter.lockPanel == false)
    {
        qcopter.keyboardTimeout = true;
    }
}

void Quadcopter_MainWindow::UpdateValueTemperature(int value)
{
    if((value > temperature.value_max) && (value < temperature.value_min))
    {
        return;
    }
    else if(value >= temperature.value_upper_limit)
    {
        ui->lcdNumber_ValueTemperature->setStyleSheet("background-color: rgb(178, 10, 30);");
    }
    else if(value <= temperature.value_lower_limit)
    {
        ui->lcdNumber_ValueTemperature->setStyleSheet("background-color: rgb(37,111,255);");
    }
    else
    {
        ui->lcdNumber_ValueTemperature->setStyleSheet("background-color: rgb(253,253,150);");
    }
    ui->lcdNumber_ValueTemperature->display(value);
}

void Quadcopter_MainWindow::UpdateValueHumidity(int value)
{
    if((value > humidity.value_max) && (value < humidity.value_min))
    {
        return;
    }
    else if(value >= humidity.value_upper_limit)
    {
        ui->lcdNumber_ValueHumidity->setStyleSheet("background-color: rgb(37,111,255);");
    }
    else if(value <= humidity.value_lower_limit)
    {
        ui->lcdNumber_ValueHumidity->setStyleSheet("background-color: rgb(178, 10, 30);");
    }
    else
    {
        ui->lcdNumber_ValueHumidity->setStyleSheet("background-color: rgb(10,166,116);");
    }
    ui->lcdNumber_ValueHumidity->display(value);
}

void Quadcopter_MainWindow::UpdateValuePressure(int value)
{
    if((value > pressure.value_max) && (value < pressure.value_min))
    {
        return;
    }
    else if(value >= pressure.value_upper_limit)
    {
        ui->lcdNumber_ValuePressure->setStyleSheet("background-color: rgb(37,111,255);");
    }
    else if(value <= pressure.value_lower_limit)
    {
        ui->lcdNumber_ValuePressure->setStyleSheet("background-color: rgb(178, 10, 30);");
    }
    else
    {
        ui->lcdNumber_ValuePressure->setStyleSheet("background-color: rgb(255,223,0);");
    }
    ui->lcdNumber_ValuePressure->display(value);
}

void Quadcopter_MainWindow::UpdateValueBattery(int value)
{
    value = ((value * 100) / QCOPTER_BATTERY_VOLTAGE);
    if((value > battery.value_max) && (value < battery.value_min))
    {
        return;
    }
    ui->progressBar_ValueBatteryCharge->setValue(value);
}

void Quadcopter_MainWindow::UpdateValueDisplacement(int value)
{
    if((value > displacement.value_max) && (value < displacement.value_min))
    {
        return;
    }
    else if(value >= displacement.value_upper_limit)
    {
        ui->lcdNumber_ValueDisplacement->setStyleSheet("background-color: rgb();");
    }
    else if(value <= displacement.value_lower_limit)
    {
        ui->lcdNumber_ValueDisplacement->setStyleSheet("background-color: rgb();");
    }
    else
    {
        ui->lcdNumber_ValueDisplacement->setStyleSheet("background-color: rgb();");
    }
    ui->lcdNumber_ValueDisplacement->display(value);
}

void Quadcopter_MainWindow::UpdateValueSpeed(int value)
{
    if((value > speed.value_max) && (value < speed.value_min))
    {
        return;
    }
    else if(value >= speed.value_upper_limit)
    {
        ui->lcdNumber_ValueSpeed->setStyleSheet("background-color: rgb(178, 10, 30);");
    }
    else if(value <= speed.value_lower_limit)
    {
        ui->lcdNumber_ValueSpeed->setStyleSheet("background-color: rgb(0,192,75);");
    }
    else
    {
        ui->lcdNumber_ValueSpeed->setStyleSheet("background-color: rgb(245,199,126);");
    }
    ui->lcdNumber_ValueSpeed->display(value);
}

void Quadcopter_MainWindow::UpdateValueHeight(int value)
{
    if((value > height.value_max) && (value < height.value_min))
    {
        return;
    }
    else if(value >= height.value_upper_limit)
    {
        ui->lcdNumber_ValueHeight->setStyleSheet("background-color: rgb(178, 10, 30);");
    }
    else if(value <= height.value_lower_limit)
    {
        ui->lcdNumber_ValueHeight->setStyleSheet("background-color: rgb(0,192,75);");
    }
    else
    {
        ui->lcdNumber_ValueHeight->setStyleSheet("background-color: rgb(245,199,126);");
    }
    ui->lcdNumber_ValueHeight->display(value);
}

void Quadcopter_MainWindow::UpdateGeoPos(int value)
{
    /*void MyWidget::rotateLabel()
    {
        QPixmap pixmap(*my_label->pixmap());
        QTransform tr;
        tr.rotate(90);
        pixmap = pixmap.transformed(tr);
        my_label->setPixmap(pixmap);
    }*/ //use this method to rotate the picture...
    if((value > 360) || (value < 0))
    {
        return;
    }
    //qcopter.compasOnSpot = qcopter.compasOnSpot.transformed(qcopter.compasTransform);
    //ui->label_CompasOnSpot->setPixmap(qcopter.compasOnSpot);
    ui->dial_GeologicalPosition->setValue(value);

}

void Quadcopter_MainWindow::ConnectFunctions()
{
    connect(ui->pushButton_ServerSetting, SIGNAL(clicked(bool)), this, SLOT(ServerConsole()));
    connect(ui->pushButton_SaveLogFile, SIGNAL(clicked(bool)), this, SLOT(SaveLogFile()));
    connect(qcopterConsole, SIGNAL(QCopter_ApplicationIPV4(QString)), ui->label_ValueApplicationIPV4, SLOT(setText(QString)));

    connect(ui->pushButton_MoveForward, SIGNAL(pressed()), this, SLOT(ButtonReadEnable()));
    connect(ui->pushButton_MoveReverse, SIGNAL(pressed()), this, SLOT(ButtonReadEnable()));
    connect(ui->pushButton_MoveLeft, SIGNAL(pressed()), this, SLOT(ButtonReadEnable()));
    connect(ui->pushButton_MoveRight, SIGNAL(pressed()), this, SLOT(ButtonReadEnable()));

    connect(ui->pushButton_MoveForward, SIGNAL(released()), this, SLOT(ButtonReadDisable()));
    connect(ui->pushButton_MoveReverse, SIGNAL(released()), this, SLOT(ButtonReadDisable()));
    connect(ui->pushButton_MoveLeft, SIGNAL(released()), this, SLOT(ButtonReadDisable()));
    connect(ui->pushButton_MoveRight, SIGNAL(released()), this, SLOT(ButtonReadDisable()));

    connect(ui->verticalSlider_Throttle, SIGNAL(valueChanged(int)), this, SLOT(Throttle(int)));
    connect(ui->dial_GeologicalPosition, SIGNAL(valueChanged(int)), this, SLOT(GeologicalPosition(int)));
    connect(ui->pushButton_DroneSelectNext, SIGNAL(clicked(bool)), this, SLOT(DroneSelectNext()));
    connect(ui->pushButton_DroneSelectPrevious, SIGNAL(clicked(bool)), this, SLOT(DroneSelectPrevious()));
    connect(ui->pushButton_DroneCameraSnapshot, SIGNAL(clicked(bool)), this, SLOT(ButtonCameraShutter()));
    connect(qcopterGeneralTimer, SIGNAL(timeout()), this, SLOT(ClockUpdate()));
    connect(qcopterKeyboardTimer, SIGNAL(timeout()), this, SLOT(KeyboardTimerUpdate()));

    connect(qcopterConsole, SIGNAL(QCopter_NewMsgGeneral(QMqttMessage)), this, SLOT(MQTTReceivedMsgGeneral(QMqttMessage)));
    connect(qcopterConsole, SIGNAL(QCopter_NewMsgStatus(QMqttMessage)), this, SLOT(MQTTReceivedMsgStatus(QMqttMessage)));
    connect(qcopterConsole, SIGNAL(QCopter_NewMsgCommand(QMqttMessage)), this, SLOT(MQTTReceivedMsgCommand(QMqttMessage)));
    connect(qcopterConsole, SIGNAL(QCopter_MQTTServerStatus(bool)), this, SLOT(MQTTUpdateServerStatus(bool)));

    connect(qcopterConsole, SIGNAL(QCopter_UDPUpdateState(bool)), this, SLOT(UDPUpdateConnectionStatus(bool)));
    connect(qcopterConsole, SIGNAL(QCopter_UDPNewData(QByteArray*,QHostAddress*,quint16*)), this, SLOT(DroneDisplayCamera(QByteArray*,QHostAddress*,quint16*)));

    connect(ui->pushButton_FCTRLDebugMode, SIGNAL(clicked(bool)), this, SLOT(FCTRLDebugConsole()));
    connect(ui->pushButton_RCTRLDebugMode, SIGNAL(clicked(bool)), this, SLOT(RCTRLDebugConsole()));
}

void Quadcopter_MainWindow::EnablePanel()
{
    ui->pushButton_ConnectLoRaWAN->setEnabled(true);
    ui->pushButton_SaveLogFile->setEnabled(true);
    ui->pushButton_MoveForward->setEnabled(true);
    ui->pushButton_MoveReverse->setEnabled(true);
    ui->pushButton_MoveLeft->setEnabled(true);
    ui->pushButton_MoveRight->setEnabled(true);
    ui->verticalSlider_Throttle->setEnabled(true);

    ui->dial_GeologicalPosition->setEnabled(true);
    ui->label_CompassOff->setEnabled(true);
    //ui->label_CompasOnSpot->setEnabled(true);
    ui->label_CompasOnSpot->setHidden(true);

    ui->lcdNumber_ValueThrottle->setEnabled(true);
    ui->lcdNumber_ValuePressure->setEnabled(true);
    ui->lcdNumber_ValueDisplacement->setEnabled(true);
    ui->lcdNumber_ValueHeight->setEnabled(true);
    ui->lcdNumber_ValueSpeed->setEnabled(true);
    ui->lcdNumber_ValueTemperature->setEnabled(true);

    ui->label_ValueDroneIndex->setEnabled(true);
    ui->label_ValueDroneType->setEnabled(true);

    ui->pushButton_DroneCameraSnapshot->setEnabled(true);
    ui->pushButton_DroneSelectNext->setEnabled(true);
    ui->pushButton_DroneSelectPrevious->setEnabled(true);

    qcopter.lockPanel = false;
}

void Quadcopter_MainWindow::DisablePanel()
{
    ui->pushButton_ConnectLoRaWAN->setDisabled(true);
    ui->pushButton_SaveLogFile->setDisabled(true);

    ui->pushButton_MoveForward->setDisabled(true);
    ui->pushButton_MoveReverse->setDisabled(true);
    ui->pushButton_MoveLeft->setDisabled(true);
    ui->pushButton_MoveRight->setDisabled(true);
    ui->verticalSlider_Throttle->setDisabled(true);

    ui->dial_GeologicalPosition->setDisabled(true);
    ui->label_CompassOff->setDisabled(true);
    ui->label_CompasOnSpot->setHidden(true);

    ui->lcdNumber_ValueThrottle->setDisabled(true);
    ui->lcdNumber_ValuePressure->setDisabled(true);
    ui->lcdNumber_ValueDisplacement->setDisabled(true);
    ui->lcdNumber_ValueHeight->setDisabled(true);
    ui->lcdNumber_ValueSpeed->setDisabled(true);
    ui->lcdNumber_ValueTemperature->setDisabled(true);

    ui->label_ValueDroneIndex->setDisabled(true);
    ui->label_ValueDroneType->setDisabled(true);

    ui->pushButton_DroneCameraSnapshot->setDisabled(true);
    ui->pushButton_DroneSelectNext->setDisabled(true);
    ui->pushButton_DroneSelectPrevious->setDisabled(true);

    InitFunctions();

    qcopter.lockPanel = true;
}

void Quadcopter_MainWindow::InitFunctions()
{
    QuadcopterPanelInit();
    ClockInit();
    QuadcopterParamInit();
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

