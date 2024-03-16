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
    qcopter.lockPanel = false;

    ClockInit();
    QuadcopterParamInit();
    qcopterGeneralTimer->start(500);
    qcopterButtonTimer->start(100); // 100 miliseconds

    DisablePanel();
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


}

void Quadcopter_MainWindow::MQTTConsole()
{
    qcopterConsole->ObjectsInit();
    qcopterConsole->setModal(true);
    qcopterConsole->exec();
}

void Quadcopter_MainWindow::MQTTReceivedMsgGeneral(QMqttMessage msg)
{
    QString tempMsg;
    qcopter.time = QDateTime::currentDateTime();

    qcopter.txtPanelFormatGeneral.setFont(QFont("Courier"));
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

    qcopter.txtPanelFormatStatus.setFont(QFont("Courier"));
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

    qcopter.txtPanelFormatCommand.setFont(QFont("Courier"));
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
        ui->label_StatusMQTTServer->setStyleSheet("background-color: rgb(0, 200, 0);"
                                                  "border-radius: 10px;"
                                                  "alignment: center-aligned;"
                                                  "padding: 6px;"
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

    qcopterConsole->mqttSendMsg(qcopter.jsonDocCommand.toJson());

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

    qcopterConsole->mqttSendMsg(qcopter.jsonDocCommand.toJson());

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

    qcopterConsole->mqttSendMsg(qcopter.jsonDocCommand.toJson());

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

    qcopterConsole->mqttSendMsg(qcopter.jsonDocCommand.toJson());

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

        ui->label_F11->setPixmap(qcopter.PixmapButtonOn);
        ui->label_F12->setPixmap(qcopter.PixmapButtonOn);
        ui->label_F13->setPixmap(qcopter.PixmapButtonOn);
        ui->label_F14->setPixmap(qcopter.PixmapButtonOn);
        ui->label_F15->setPixmap(qcopter.PixmapButtonOn);
        cnt++;
        break;
    case 1:
        ui->label_F21->setPixmap(qcopter.PixmapButtonOn);
        ui->label_F22->setPixmap(qcopter.PixmapButtonOn);
        ui->label_F23->setPixmap(qcopter.PixmapButtonOn);
        ui->label_F24->setPixmap(qcopter.PixmapButtonOn);
        ui->label_F25->setPixmap(qcopter.PixmapButtonOn);
        cnt++;
        break;
    case 2:
        ui->label_F31->setPixmap(qcopter.PixmapButtonOn);
        ui->label_F32->setPixmap(qcopter.PixmapButtonOn);
        ui->label_F33->setPixmap(qcopter.PixmapButtonOn);
        ui->label_F34->setPixmap(qcopter.PixmapButtonOn);
        cnt++;
        break;
    case 3:
        ui->label_F41->setPixmap(qcopter.PixmapButtonOn);
        ui->label_F42->setPixmap(qcopter.PixmapButtonOn);
        ui->label_F43->setPixmap(qcopter.PixmapButtonOn);

        ui->label_F11->setPixmap(qcopter.PixmapButtonOff);
        ui->label_F12->setPixmap(qcopter.PixmapButtonOff);
        ui->label_F13->setPixmap(qcopter.PixmapButtonOff);
        ui->label_F14->setPixmap(qcopter.PixmapButtonOff);
        ui->label_F15->setPixmap(qcopter.PixmapButtonOff);
        cnt++;
        break;
    case 4:
        ui->label_F51->setPixmap(qcopter.PixmapButtonOn);
        ui->label_F52->setPixmap(qcopter.PixmapButtonOn);

        ui->label_F21->setPixmap(qcopter.PixmapButtonOff);
        ui->label_F22->setPixmap(qcopter.PixmapButtonOff);
        ui->label_F23->setPixmap(qcopter.PixmapButtonOff);
        ui->label_F24->setPixmap(qcopter.PixmapButtonOff);
        ui->label_F25->setPixmap(qcopter.PixmapButtonOff);
        cnt++;
        break;
    case 5:
        ui->label_F61->setPixmap(qcopter.PixmapButtonOn);
        ui->label_F62->setPixmap(qcopter.PixmapButtonOn);

        ui->label_F31->setPixmap(qcopter.PixmapButtonOff);
        ui->label_F32->setPixmap(qcopter.PixmapButtonOff);
        ui->label_F33->setPixmap(qcopter.PixmapButtonOff);
        ui->label_F34->setPixmap(qcopter.PixmapButtonOff);
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

        ui->label_B11->setPixmap(qcopter.PixmapButtonOn);
        ui->label_B12->setPixmap(qcopter.PixmapButtonOn);
        ui->label_B13->setPixmap(qcopter.PixmapButtonOn);
        ui->label_B14->setPixmap(qcopter.PixmapButtonOn);
        ui->label_B15->setPixmap(qcopter.PixmapButtonOn);
        cnt++;
        break;
    case 1:
        ui->label_B21->setPixmap(qcopter.PixmapButtonOn);
        ui->label_B22->setPixmap(qcopter.PixmapButtonOn);
        ui->label_B23->setPixmap(qcopter.PixmapButtonOn);
        ui->label_B24->setPixmap(qcopter.PixmapButtonOn);
        ui->label_B25->setPixmap(qcopter.PixmapButtonOn);
        cnt++;
        break;
    case 2:
        ui->label_B31->setPixmap(qcopter.PixmapButtonOn);
        ui->label_B32->setPixmap(qcopter.PixmapButtonOn);
        ui->label_B33->setPixmap(qcopter.PixmapButtonOn);
        ui->label_B34->setPixmap(qcopter.PixmapButtonOn);
        cnt++;
        break;
    case 3:
        ui->label_B41->setPixmap(qcopter.PixmapButtonOn);
        ui->label_B42->setPixmap(qcopter.PixmapButtonOn);
        ui->label_B43->setPixmap(qcopter.PixmapButtonOn);

        ui->label_B11->setPixmap(qcopter.PixmapButtonOff);
        ui->label_B12->setPixmap(qcopter.PixmapButtonOff);
        ui->label_B13->setPixmap(qcopter.PixmapButtonOff);
        ui->label_B14->setPixmap(qcopter.PixmapButtonOff);
        ui->label_B15->setPixmap(qcopter.PixmapButtonOff);
        cnt++;
        break;
    case 4:
        ui->label_B51->setPixmap(qcopter.PixmapButtonOn);
        ui->label_B52->setPixmap(qcopter.PixmapButtonOn);

        ui->label_B21->setPixmap(qcopter.PixmapButtonOff);
        ui->label_B22->setPixmap(qcopter.PixmapButtonOff);
        ui->label_B23->setPixmap(qcopter.PixmapButtonOff);
        ui->label_B24->setPixmap(qcopter.PixmapButtonOff);
        ui->label_B25->setPixmap(qcopter.PixmapButtonOff);
        cnt++;
        break;
    case 5:
        ui->label_B61->setPixmap(qcopter.PixmapButtonOn);
        ui->label_B62->setPixmap(qcopter.PixmapButtonOn);

        ui->label_B31->setPixmap(qcopter.PixmapButtonOff);
        ui->label_B32->setPixmap(qcopter.PixmapButtonOff);
        ui->label_B33->setPixmap(qcopter.PixmapButtonOff);
        ui->label_B34->setPixmap(qcopter.PixmapButtonOff);
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

        ui->label_L11->setPixmap(qcopter.PixmapButtonOn);
        ui->label_L12->setPixmap(qcopter.PixmapButtonOn);
        ui->label_L13->setPixmap(qcopter.PixmapButtonOn);
        ui->label_L14->setPixmap(qcopter.PixmapButtonOn);
        ui->label_L15->setPixmap(qcopter.PixmapButtonOn);
        cnt++;
        break;
    case 1:
        ui->label_L21->setPixmap(qcopter.PixmapButtonOn);
        ui->label_L22->setPixmap(qcopter.PixmapButtonOn);
        ui->label_L23->setPixmap(qcopter.PixmapButtonOn);
        ui->label_L24->setPixmap(qcopter.PixmapButtonOn);
        ui->label_L25->setPixmap(qcopter.PixmapButtonOn);
        cnt++;
        break;
    case 2:
        ui->label_L31->setPixmap(qcopter.PixmapButtonOn);
        ui->label_L32->setPixmap(qcopter.PixmapButtonOn);
        ui->label_L33->setPixmap(qcopter.PixmapButtonOn);
        ui->label_L34->setPixmap(qcopter.PixmapButtonOn);
        cnt++;
        break;
    case 3:
        ui->label_L41->setPixmap(qcopter.PixmapButtonOn);
        ui->label_L42->setPixmap(qcopter.PixmapButtonOn);
        ui->label_L43->setPixmap(qcopter.PixmapButtonOn);

        ui->label_L11->setPixmap(qcopter.PixmapButtonOff);
        ui->label_L12->setPixmap(qcopter.PixmapButtonOff);
        ui->label_L13->setPixmap(qcopter.PixmapButtonOff);
        ui->label_L14->setPixmap(qcopter.PixmapButtonOff);
        ui->label_L15->setPixmap(qcopter.PixmapButtonOff);
        cnt++;
        break;
    case 4:
        ui->label_L51->setPixmap(qcopter.PixmapButtonOn);
        ui->label_L52->setPixmap(qcopter.PixmapButtonOn);

        ui->label_L21->setPixmap(qcopter.PixmapButtonOff);
        ui->label_L22->setPixmap(qcopter.PixmapButtonOff);
        ui->label_L23->setPixmap(qcopter.PixmapButtonOff);
        ui->label_L24->setPixmap(qcopter.PixmapButtonOff);
        ui->label_L25->setPixmap(qcopter.PixmapButtonOff);
        cnt++;
        break;
    case 5:
        ui->label_L61->setPixmap(qcopter.PixmapButtonOn);
        ui->label_L62->setPixmap(qcopter.PixmapButtonOn);

        ui->label_L31->setPixmap(qcopter.PixmapButtonOff);
        ui->label_L32->setPixmap(qcopter.PixmapButtonOff);
        ui->label_L33->setPixmap(qcopter.PixmapButtonOff);
        ui->label_L34->setPixmap(qcopter.PixmapButtonOff);
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

        ui->label_R11->setPixmap(qcopter.PixmapButtonOn);
        ui->label_R12->setPixmap(qcopter.PixmapButtonOn);
        ui->label_R13->setPixmap(qcopter.PixmapButtonOn);
        ui->label_R14->setPixmap(qcopter.PixmapButtonOn);
        ui->label_R15->setPixmap(qcopter.PixmapButtonOn);
        cnt++;
        break;
    case 1:
        ui->label_R21->setPixmap(qcopter.PixmapButtonOn);
        ui->label_R22->setPixmap(qcopter.PixmapButtonOn);
        ui->label_R23->setPixmap(qcopter.PixmapButtonOn);
        ui->label_R24->setPixmap(qcopter.PixmapButtonOn);
        ui->label_R25->setPixmap(qcopter.PixmapButtonOn);
        cnt++;
        break;
    case 2:
        ui->label_R31->setPixmap(qcopter.PixmapButtonOn);
        ui->label_R32->setPixmap(qcopter.PixmapButtonOn);
        ui->label_R33->setPixmap(qcopter.PixmapButtonOn);
        ui->label_R34->setPixmap(qcopter.PixmapButtonOn);
        cnt++;
        break;
    case 3:
        ui->label_R41->setPixmap(qcopter.PixmapButtonOn);
        ui->label_R42->setPixmap(qcopter.PixmapButtonOn);
        ui->label_R43->setPixmap(qcopter.PixmapButtonOn);

        ui->label_R11->setPixmap(qcopter.PixmapButtonOff);
        ui->label_R12->setPixmap(qcopter.PixmapButtonOff);
        ui->label_R13->setPixmap(qcopter.PixmapButtonOff);
        ui->label_R14->setPixmap(qcopter.PixmapButtonOff);
        ui->label_R15->setPixmap(qcopter.PixmapButtonOff);
        cnt++;
        break;
    case 4:
        ui->label_R51->setPixmap(qcopter.PixmapButtonOn);
        ui->label_R52->setPixmap(qcopter.PixmapButtonOn);

        ui->label_R21->setPixmap(qcopter.PixmapButtonOff);
        ui->label_R22->setPixmap(qcopter.PixmapButtonOff);
        ui->label_R23->setPixmap(qcopter.PixmapButtonOff);
        ui->label_R24->setPixmap(qcopter.PixmapButtonOff);
        ui->label_R25->setPixmap(qcopter.PixmapButtonOff);
        cnt++;
        break;
    case 5:
        ui->label_R61->setPixmap(qcopter.PixmapButtonOn);
        ui->label_R62->setPixmap(qcopter.PixmapButtonOn);

        ui->label_R31->setPixmap(qcopter.PixmapButtonOff);
        ui->label_R32->setPixmap(qcopter.PixmapButtonOff);
        ui->label_R33->setPixmap(qcopter.PixmapButtonOff);
        ui->label_R34->setPixmap(qcopter.PixmapButtonOff);
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

    qcopterConsole->mqttSendMsg(qcopter.jsonDocCommand.toJson());
}

void Quadcopter_MainWindow::Throttle(int value)
{
    ui->lcdNumber_ThrottleValue->display(value);
    ui->verticalSlider_Throttle->setValue(value);

    qcopter.jsonObjCommand["ELEVATE"] = value;
    qcopter.jsonDocCommand.setObject(qcopter.jsonObjCommand);

    //qDebug() << qcopter.jsonDocCommand;
    //qDebug() << "Height" << value << "cm";

    qcopterConsole->mqttSendMsg(qcopter.jsonDocCommand.toJson());
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

void Quadcopter_MainWindow::UpdateDroneIndex(uint8_t index)
{
    qcopter.generalLabelsFont.setPixelSize(14);
    ui->label_DronesNumber->setFont(qcopter.generalLabelsFont);
    ui->label_DronesNumber->setText(QString::number(index) + "/NA");
    qcopter.jsonObjStatus["QCOPTER"] = qcopter.index;
    qcopter.jsonDocStatus.setObject(qcopter.jsonObjStatus);
    qcopter.jsonObjCommand["QCOPTER"] = qcopter.index;
    qcopter.jsonDocCommand.setObject(qcopter.jsonObjStatus);
}

void Quadcopter_MainWindow::UpdateBatteryLevel(uint16_t value)
{
    ui->progressBar_BatteryCharge->setValue((value / QCOPTER_BATTERY_VOLTAGE) * 100);
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

    QuadcopterParamUpdate( qcopter.jsonObjStatus );
}

void Quadcopter_MainWindow::QuadcopterParamUpdate(QJsonObject inputObj)
{

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
    else
    {
        UpdateDroneIndex(inputObj["QCOPTER"].toInt());
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

    ui->lcdNumber_Temperature->display(qcopter.jsonObjStatus.value("TEMP").toInt());
    ui->lcdNumber_Humedity->display(qcopter.jsonObjStatus.value("HUMEDITY").toInt());
    ui->lcdNumber_Pressure->display(qcopter.jsonObjStatus.value("PRESSURE").toInt());
    ui->lcdNumber_Speed->display(qcopter.jsonObjStatus.value("SPEED").toInt());
    ui->lcdNumber_Displacement->display(qcopter.jsonObjStatus.value("DISPLACEMENT").toInt());
    ui->lcdNumber_Height->display(qcopter.jsonObjStatus.value("HEIGHT").toInt());
    ui->dial_GeologicalPosition->setValue(qcopter.jsonObjStatus.value("GEOPOS").toInt());
    UpdateBatteryLevel(qcopter.jsonObjStatus.value("BATT").toInt());
}

void Quadcopter_MainWindow::ClockInit()
{
    qcopter.clockFont.setPixelSize(32);
    ui->label_Time->setFont(qcopter.clockFont);
    ui->label_Time->setAlignment(Qt::AlignCenter);
    qcopter.time = QDateTime::currentDateTime();
    ui->label_Time->setText(qcopter.time.toString("HH:mm:ss"));
}

void Quadcopter_MainWindow::ClockUpdate()
{
    qcopter.time = QDateTime::currentDateTime();
    ui->label_Time->setText(qcopter.time.toString("HH:mm:ss"));

    qcopter.lockPanel = false;
}

void Quadcopter_MainWindow::ConnectFunctions()
{
    connect(ui->pushButton_ServerSetting, SIGNAL(clicked(bool)), this, SLOT(MQTTConsole()));

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

    connect(qcopterConsole, SIGNAL(QCopter_NewMsgGeneral(QMqttMessage)), this, SLOT(MQTTReceivedMsgGeneral(QMqttMessage)));
    connect(qcopterConsole, SIGNAL(QCopter_NewMsgStatus(QMqttMessage)), this, SLOT(MQTTReceivedMsgStatus(QMqttMessage)));
    connect(qcopterConsole, SIGNAL(QCopter_NewMsgCommand(QMqttMessage)), this, SLOT(MQTTReceivedMsgCommand(QMqttMessage)));
    connect(qcopterConsole, SIGNAL(QCopter_MQTTServerStatus(bool)), this, SLOT(MQTTUpdateServerStatus(bool)));
}

void Quadcopter_MainWindow::EnablePanel()
{
    ui->pushButton_ConnectLoRaWAN->setEnabled(true);
    ui->pushButton_SaveLogFile->setEnabled(true);
    ui->pushButton_MoveForward->setEnabled(true);
    ui->pushButton_MoveReverse->setEnabled(true);
    ui->pushButton_MoveLeft->setEnabled(true);
    ui->pushButton_MoveRight->setEnabled(true);
    ui->dial_GeologicalPosition->setEnabled(true);
    ui->verticalSlider_Throttle->setEnabled(true);

    ui->lcdNumber_ThrottleValue->setEnabled(true);
    ui->lcdNumber_Pressure->setEnabled(true);
    ui->lcdNumber_Displacement->setEnabled(true);
    ui->lcdNumber_Height->setEnabled(true);
    ui->lcdNumber_Speed->setEnabled(true);
    ui->lcdNumber_Temperature->setEnabled(true);

    ui->label_DronesNumber->setEnabled(true);
}

void Quadcopter_MainWindow::DisablePanel()
{
    ui->pushButton_ConnectLoRaWAN->setDisabled(true);
    //ui->pushButton_SaveLogFile->setDisabled(true);
    ui->pushButton_SaveLogFile->setStyleSheet("border-radius: 10px;"
                                              );
    ui->pushButton_MoveForward->setDisabled(true);
    ui->pushButton_MoveReverse->setDisabled(true);
    ui->pushButton_MoveLeft->setDisabled(true);
    ui->pushButton_MoveRight->setDisabled(true);
    ui->dial_GeologicalPosition->setDisabled(true);
    ui->verticalSlider_Throttle->setDisabled(true);

    ui->lcdNumber_ThrottleValue->setDisabled(true);
    ui->lcdNumber_Pressure->setDisabled(true);
    ui->lcdNumber_Displacement->setDisabled(true);
    ui->lcdNumber_Height->setDisabled(true);
    ui->lcdNumber_Speed->setDisabled(true);
    ui->lcdNumber_Temperature->setDisabled(true);

    ui->label_DronesNumber->setDisabled(true);
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

