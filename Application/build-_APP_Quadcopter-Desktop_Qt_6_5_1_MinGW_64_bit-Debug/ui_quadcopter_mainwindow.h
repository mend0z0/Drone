/********************************************************************************
** Form generated from reading UI file 'quadcopter_mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QUADCOPTER_MAINWINDOW_H
#define UI_QUADCOPTER_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDial>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Quadcopter_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton_DroneSelectPrevious;
    QPushButton *pushButton_DroneSelectNext;
    QGraphicsView *graphicsView_DroneCameraView;
    QLabel *label_Time;
    QPushButton *pushButton_DroneCameraSnapshot;
    QSlider *verticalSlider_Throttle;
    QPushButton *pushButton_MoveForward;
    QPushButton *pushButton_MoveLeft;
    QPushButton *pushButton_MoveReverse;
    QPushButton *pushButton_MoveRight;
    QDial *dial_GeologicalPosition;
    QGraphicsView *graphicsView_Camera3;
    QGraphicsView *graphicsView_Camera4;
    QGraphicsView *graphicsView_Camera2;
    QGraphicsView *graphicsView_Camera1;
    QGraphicsView *graphicsView_Camera0;
    QLabel *label_Logo;
    QLabel *label_Camera1;
    QLabel *label_Camera2;
    QLabel *label_Camera3;
    QLabel *label_Camera4;
    QLabel *label_Camera5;
    QLabel *label_F22;
    QLabel *label_F24;
    QLabel *label_F41;
    QLabel *label_F32;
    QLabel *label_F33;
    QLabel *label_F43;
    QLabel *label_F51;
    QLabel *label_F42;
    QLabel *label_F52;
    QLabel *label_F61;
    QLabel *label_F62;
    QLabel *label_F71;
    QLabel *label_F23;
    QLabel *label_B71;
    QLabel *label_B22;
    QLabel *label_B43;
    QLabel *label_B52;
    QLabel *label_B41;
    QLabel *label_B51;
    QLabel *label_B62;
    QLabel *label_B61;
    QLabel *label_B42;
    QLabel *label_B32;
    QLabel *label_B23;
    QLabel *label_B33;
    QLabel *label_B24;
    QLabel *label_R61;
    QLabel *label_R22;
    QLabel *label_R42;
    QLabel *label_R62;
    QLabel *label_R71;
    QLabel *label_R51;
    QLabel *label_R43;
    QLabel *label_R33;
    QLabel *label_R41;
    QLabel *label_R32;
    QLabel *label_R24;
    QLabel *label_R52;
    QLabel *label_R23;
    QLabel *label_L22;
    QLabel *label_L33;
    QLabel *label_L52;
    QLabel *label_L71;
    QLabel *label_L43;
    QLabel *label_L61;
    QLabel *label_L41;
    QLabel *label_L62;
    QLabel *label_L32;
    QLabel *label_L51;
    QLabel *label_L42;
    QLabel *label_L23;
    QLabel *label_L24;
    QLabel *label_CompassOff;
    QLabel *label_DroneCameraView;
    QLabel *label_Camera1_2;
    QLabel *label_Camera2_2;
    QLabel *label_Camera3_2;
    QLabel *label_Camera5_2;
    QLabel *label_Camera4_2;
    QLCDNumber *lcdNumber_ValueThrottle;
    QProgressBar *progressBar_ValueBatteryCharge;
    QLabel *label_CompasOnSpot;
    QWidget *layoutWidget;
    QGridLayout *gridLayout_4;
    QGridLayout *gridLayout;
    QLabel *label_Humedity;
    QLabel *label_Displacement;
    QLabel *label_Speed;
    QLabel *label_DroneIPV4;
    QLCDNumber *lcdNumber_ValueDisplacement;
    QLabel *label_ValueDroneIPV4;
    QLabel *label_Pressure;
    QLCDNumber *lcdNumber_ValueHumidity;
    QLabel *label_ValueDroneType;
    QLCDNumber *lcdNumber_ValuePressure;
    QLCDNumber *lcdNumber_ValueSpeed;
    QLabel *label_Height;
    QLabel *label_Temperature;
    QLCDNumber *lcdNumber_ValueHeight;
    QPushButton *pushButton_2;
    QLabel *label_DroneType;
    QLabel *label_ValueDroneIndex;
    QLabel *label_DroneIndex;
    QLCDNumber *lcdNumber_ValueTemperature;
    QPushButton *pushButton_ConnectLoRaWAN;
    QWidget *layoutWidget1;
    QGridLayout *gridLayout_3;
    QLabel *label_QuadcopterConsole;
    QGridLayout *gridLayout_2;
    QLabel *label_LoRaWANServer;
    QLabel *label_ValueApplicationIPV4;
    QLabel *label_UDPConnection;
    QLabel *label_ApplicationIPV4;
    QLabel *label_StatusLoRaWANServer;
    QLabel *label_StatusMQTTServer;
    QLabel *label_LoRaWANFrequency;
    QLabel *label_ValueLoRaWANFrequency;
    QLabel *label_StatusUDPConnection;
    QLabel *label_MQTTServer;
    QPushButton *pushButton_ServerSetting;
    QPushButton *pushButton;
    QPlainTextEdit *plainTextEdit_LogPanel;
    QPushButton *pushButton_SaveLogFile;
    QSpacerItem *verticalSpacer;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QMainWindow *Quadcopter_MainWindow)
    {
        if (Quadcopter_MainWindow->objectName().isEmpty())
            Quadcopter_MainWindow->setObjectName("Quadcopter_MainWindow");
        Quadcopter_MainWindow->setEnabled(true);
        Quadcopter_MainWindow->resize(1280, 720);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Quadcopter_MainWindow->sizePolicy().hasHeightForWidth());
        Quadcopter_MainWindow->setSizePolicy(sizePolicy);
        QPalette palette;
        QBrush brush(QColor(248, 248, 248, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Window, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush);
        Quadcopter_MainWindow->setPalette(palette);
        Quadcopter_MainWindow->setStyleSheet(QString::fromUtf8(""));
        centralwidget = new QWidget(Quadcopter_MainWindow);
        centralwidget->setObjectName("centralwidget");
        pushButton_DroneSelectPrevious = new QPushButton(centralwidget);
        pushButton_DroneSelectPrevious->setObjectName("pushButton_DroneSelectPrevious");
        pushButton_DroneSelectPrevious->setGeometry(QRect(478, 443, 50, 50));
        pushButton_DroneSelectPrevious->setStyleSheet(QString::fromUtf8("image: url(:/Resources/Icons/CameraPrevious.png);"));
        pushButton_DroneSelectPrevious->setAutoDefault(false);
        pushButton_DroneSelectNext = new QPushButton(centralwidget);
        pushButton_DroneSelectNext->setObjectName("pushButton_DroneSelectNext");
        pushButton_DroneSelectNext->setGeometry(QRect(738, 443, 50, 50));
        pushButton_DroneSelectNext->setBaseSize(QSize(50, 50));
        pushButton_DroneSelectNext->setStyleSheet(QString::fromUtf8("image: url(:/Resources/Icons/CameraNext.png);"));
        graphicsView_DroneCameraView = new QGraphicsView(centralwidget);
        graphicsView_DroneCameraView->setObjectName("graphicsView_DroneCameraView");
        graphicsView_DroneCameraView->setGeometry(QRect(310, 30, 651, 480));
        graphicsView_DroneCameraView->setStyleSheet(QString::fromUtf8(""));
        graphicsView_DroneCameraView->setFrameShape(QFrame::VLine);
        graphicsView_DroneCameraView->setFrameShadow(QFrame::Raised);
        label_Time = new QLabel(centralwidget);
        label_Time->setObjectName("label_Time");
        label_Time->setGeometry(QRect(320, 40, 120, 40));
        QFont font;
        font.setFamilies({QString::fromUtf8("Calibri")});
        label_Time->setFont(font);
        label_Time->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);\n"
"color: rgb(255, 255, 255);"));
        label_Time->setScaledContents(false);
        pushButton_DroneCameraSnapshot = new QPushButton(centralwidget);
        pushButton_DroneCameraSnapshot->setObjectName("pushButton_DroneCameraSnapshot");
        pushButton_DroneCameraSnapshot->setGeometry(QRect(608, 443, 50, 50));
        pushButton_DroneCameraSnapshot->setStyleSheet(QString::fromUtf8("image: url(:/Resources/Icons/CameraShutter.png);"));
        verticalSlider_Throttle = new QSlider(centralwidget);
        verticalSlider_Throttle->setObjectName("verticalSlider_Throttle");
        verticalSlider_Throttle->setEnabled(true);
        verticalSlider_Throttle->setGeometry(QRect(895, 40, 40, 420));
        verticalSlider_Throttle->setStyleSheet(QString::fromUtf8("background-color: rgb(6, 15, 186);"));
        verticalSlider_Throttle->setMaximum(300);
        verticalSlider_Throttle->setOrientation(Qt::Vertical);
        verticalSlider_Throttle->setInvertedAppearance(false);
        verticalSlider_Throttle->setInvertedControls(false);
        verticalSlider_Throttle->setTickPosition(QSlider::TicksBothSides);
        verticalSlider_Throttle->setTickInterval(10);
        pushButton_MoveForward = new QPushButton(centralwidget);
        pushButton_MoveForward->setObjectName("pushButton_MoveForward");
        pushButton_MoveForward->setGeometry(QRect(1078, 360, 80, 80));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Calibri")});
        font1.setPointSize(14);
        pushButton_MoveForward->setFont(font1);
        pushButton_MoveForward->setCursor(QCursor(Qt::OpenHandCursor));
        pushButton_MoveForward->setStyleSheet(QString::fromUtf8(""));
        pushButton_MoveLeft = new QPushButton(centralwidget);
        pushButton_MoveLeft->setObjectName("pushButton_MoveLeft");
        pushButton_MoveLeft->setGeometry(QRect(964, 474, 80, 80));
        pushButton_MoveLeft->setFont(font1);
        pushButton_MoveLeft->setCursor(QCursor(Qt::OpenHandCursor));
        pushButton_MoveLeft->setStyleSheet(QString::fromUtf8(""));
        pushButton_MoveReverse = new QPushButton(centralwidget);
        pushButton_MoveReverse->setObjectName("pushButton_MoveReverse");
        pushButton_MoveReverse->setGeometry(QRect(1079, 589, 80, 80));
        pushButton_MoveReverse->setFont(font1);
        pushButton_MoveReverse->setCursor(QCursor(Qt::OpenHandCursor));
        pushButton_MoveReverse->setStyleSheet(QString::fromUtf8(""));
        pushButton_MoveRight = new QPushButton(centralwidget);
        pushButton_MoveRight->setObjectName("pushButton_MoveRight");
        pushButton_MoveRight->setGeometry(QRect(1194, 475, 80, 80));
        pushButton_MoveRight->setFont(font1);
        pushButton_MoveRight->setCursor(QCursor(Qt::OpenHandCursor));
        pushButton_MoveRight->setStyleSheet(QString::fromUtf8(""));
        dial_GeologicalPosition = new QDial(centralwidget);
        dial_GeologicalPosition->setObjectName("dial_GeologicalPosition");
        dial_GeologicalPosition->setEnabled(true);
        dial_GeologicalPosition->setGeometry(QRect(1044, 450, 151, 131));
        dial_GeologicalPosition->setCursor(QCursor(Qt::CrossCursor));
        dial_GeologicalPosition->setStyleSheet(QString::fromUtf8(""));
        dial_GeologicalPosition->setMaximum(360);
        dial_GeologicalPosition->setSingleStep(10);
        dial_GeologicalPosition->setValue(180);
        dial_GeologicalPosition->setTracking(true);
        dial_GeologicalPosition->setWrapping(true);
        dial_GeologicalPosition->setNotchesVisible(false);
        graphicsView_Camera3 = new QGraphicsView(centralwidget);
        graphicsView_Camera3->setObjectName("graphicsView_Camera3");
        graphicsView_Camera3->setGeometry(QRect(700, 570, 128, 96));
        sizePolicy.setHeightForWidth(graphicsView_Camera3->sizePolicy().hasHeightForWidth());
        graphicsView_Camera3->setSizePolicy(sizePolicy);
        graphicsView_Camera3->setFrameShape(QFrame::StyledPanel);
        graphicsView_Camera3->setFrameShadow(QFrame::Plain);
        graphicsView_Camera4 = new QGraphicsView(centralwidget);
        graphicsView_Camera4->setObjectName("graphicsView_Camera4");
        graphicsView_Camera4->setGeometry(QRect(830, 570, 128, 96));
        sizePolicy.setHeightForWidth(graphicsView_Camera4->sizePolicy().hasHeightForWidth());
        graphicsView_Camera4->setSizePolicy(sizePolicy);
        graphicsView_Camera4->setFrameShape(QFrame::StyledPanel);
        graphicsView_Camera4->setFrameShadow(QFrame::Plain);
        graphicsView_Camera2 = new QGraphicsView(centralwidget);
        graphicsView_Camera2->setObjectName("graphicsView_Camera2");
        graphicsView_Camera2->setGeometry(QRect(570, 570, 128, 96));
        sizePolicy.setHeightForWidth(graphicsView_Camera2->sizePolicy().hasHeightForWidth());
        graphicsView_Camera2->setSizePolicy(sizePolicy);
        graphicsView_Camera2->setFrameShape(QFrame::StyledPanel);
        graphicsView_Camera2->setFrameShadow(QFrame::Plain);
        graphicsView_Camera1 = new QGraphicsView(centralwidget);
        graphicsView_Camera1->setObjectName("graphicsView_Camera1");
        graphicsView_Camera1->setEnabled(true);
        graphicsView_Camera1->setGeometry(QRect(440, 570, 128, 96));
        sizePolicy.setHeightForWidth(graphicsView_Camera1->sizePolicy().hasHeightForWidth());
        graphicsView_Camera1->setSizePolicy(sizePolicy);
        graphicsView_Camera1->setFrameShape(QFrame::StyledPanel);
        graphicsView_Camera1->setFrameShadow(QFrame::Plain);
        graphicsView_Camera0 = new QGraphicsView(centralwidget);
        graphicsView_Camera0->setObjectName("graphicsView_Camera0");
        graphicsView_Camera0->setGeometry(QRect(310, 570, 128, 96));
        sizePolicy.setHeightForWidth(graphicsView_Camera0->sizePolicy().hasHeightForWidth());
        graphicsView_Camera0->setSizePolicy(sizePolicy);
        graphicsView_Camera0->setStyleSheet(QString::fromUtf8(""));
        graphicsView_Camera0->setFrameShape(QFrame::StyledPanel);
        graphicsView_Camera0->setFrameShadow(QFrame::Plain);
        label_Logo = new QLabel(centralwidget);
        label_Logo->setObjectName("label_Logo");
        label_Logo->setGeometry(QRect(1100, 500, 41, 31));
        label_Logo->setStyleSheet(QString::fromUtf8(""));
        label_Logo->setPixmap(QPixmap(QString::fromUtf8(":/Resources/Logo/MEND0Z0 LOGO_simple.png")));
        label_Logo->setScaledContents(true);
        label_Camera1 = new QLabel(centralwidget);
        label_Camera1->setObjectName("label_Camera1");
        label_Camera1->setGeometry(QRect(310, 550, 128, 121));
        label_Camera1->setStyleSheet(QString::fromUtf8(""));
        label_Camera1->setFrameShape(QFrame::Panel);
        label_Camera2 = new QLabel(centralwidget);
        label_Camera2->setObjectName("label_Camera2");
        label_Camera2->setGeometry(QRect(440, 550, 128, 121));
        label_Camera2->setFrameShape(QFrame::Panel);
        label_Camera3 = new QLabel(centralwidget);
        label_Camera3->setObjectName("label_Camera3");
        label_Camera3->setGeometry(QRect(570, 550, 128, 121));
        label_Camera3->setFrameShape(QFrame::Panel);
        label_Camera4 = new QLabel(centralwidget);
        label_Camera4->setObjectName("label_Camera4");
        label_Camera4->setGeometry(QRect(700, 550, 128, 121));
        label_Camera4->setFrameShape(QFrame::Panel);
        label_Camera5 = new QLabel(centralwidget);
        label_Camera5->setObjectName("label_Camera5");
        label_Camera5->setGeometry(QRect(830, 550, 128, 121));
        label_Camera5->setFrameShape(QFrame::Panel);
        label_F22 = new QLabel(centralwidget);
        label_F22->setObjectName("label_F22");
        label_F22->setGeometry(QRect(1094, 415, 10, 10));
        label_F22->setPixmap(QPixmap(QString::fromUtf8(":/Resources/Textures/Circle_Empty.png")));
        label_F22->setScaledContents(true);
        label_F24 = new QLabel(centralwidget);
        label_F24->setObjectName("label_F24");
        label_F24->setGeometry(QRect(1134, 415, 10, 10));
        label_F24->setPixmap(QPixmap(QString::fromUtf8(":/Resources/Textures/Circle_Empty.png")));
        label_F24->setScaledContents(true);
        label_F41 = new QLabel(centralwidget);
        label_F41->setObjectName("label_F41");
        label_F41->setGeometry(QRect(1084, 400, 10, 10));
        label_F41->setPixmap(QPixmap(QString::fromUtf8(":/Resources/Textures/Circle_Empty.png")));
        label_F41->setScaledContents(true);
        label_F32 = new QLabel(centralwidget);
        label_F32->setObjectName("label_F32");
        label_F32->setGeometry(QRect(1104, 400, 10, 10));
        label_F32->setPixmap(QPixmap(QString::fromUtf8(":/Resources/Textures/Circle_Empty.png")));
        label_F32->setScaledContents(true);
        label_F33 = new QLabel(centralwidget);
        label_F33->setObjectName("label_F33");
        label_F33->setGeometry(QRect(1124, 400, 10, 10));
        label_F33->setPixmap(QPixmap(QString::fromUtf8(":/Resources/Textures/Circle_Empty.png")));
        label_F33->setScaledContents(true);
        label_F43 = new QLabel(centralwidget);
        label_F43->setObjectName("label_F43");
        label_F43->setGeometry(QRect(1144, 400, 10, 10));
        label_F43->setPixmap(QPixmap(QString::fromUtf8(":/Resources/Textures/Circle_Empty.png")));
        label_F43->setScaledContents(true);
        label_F51 = new QLabel(centralwidget);
        label_F51->setObjectName("label_F51");
        label_F51->setGeometry(QRect(1094, 390, 10, 10));
        label_F51->setPixmap(QPixmap(QString::fromUtf8(":/Resources/Textures/Circle_Empty.png")));
        label_F51->setScaledContents(true);
        label_F42 = new QLabel(centralwidget);
        label_F42->setObjectName("label_F42");
        label_F42->setGeometry(QRect(1114, 390, 10, 10));
        label_F42->setPixmap(QPixmap(QString::fromUtf8(":/Resources/Textures/Circle_Empty.png")));
        label_F42->setScaledContents(true);
        label_F52 = new QLabel(centralwidget);
        label_F52->setObjectName("label_F52");
        label_F52->setGeometry(QRect(1134, 390, 10, 10));
        label_F52->setPixmap(QPixmap(QString::fromUtf8(":/Resources/Textures/Circle_Empty.png")));
        label_F52->setScaledContents(true);
        label_F61 = new QLabel(centralwidget);
        label_F61->setObjectName("label_F61");
        label_F61->setGeometry(QRect(1104, 380, 10, 10));
        label_F61->setPixmap(QPixmap(QString::fromUtf8(":/Resources/Textures/Circle_Empty.png")));
        label_F61->setScaledContents(true);
        label_F62 = new QLabel(centralwidget);
        label_F62->setObjectName("label_F62");
        label_F62->setGeometry(QRect(1124, 380, 10, 10));
        label_F62->setPixmap(QPixmap(QString::fromUtf8(":/Resources/Textures/Circle_Empty.png")));
        label_F62->setScaledContents(true);
        label_F71 = new QLabel(centralwidget);
        label_F71->setObjectName("label_F71");
        label_F71->setGeometry(QRect(1114, 370, 10, 10));
        label_F71->setPixmap(QPixmap(QString::fromUtf8(":/Resources/Textures/Circle_Empty.png")));
        label_F71->setScaledContents(true);
        label_F23 = new QLabel(centralwidget);
        label_F23->setObjectName("label_F23");
        label_F23->setGeometry(QRect(1114, 410, 10, 10));
        label_F23->setPixmap(QPixmap(QString::fromUtf8(":/Resources/Textures/Circle_Empty.png")));
        label_F23->setScaledContents(true);
        label_B71 = new QLabel(centralwidget);
        label_B71->setObjectName("label_B71");
        label_B71->setGeometry(QRect(1114, 650, 10, 10));
        label_B71->setPixmap(QPixmap(QString::fromUtf8(":/Resources/Textures/Circle_Empty.png")));
        label_B71->setScaledContents(true);
        label_B22 = new QLabel(centralwidget);
        label_B22->setObjectName("label_B22");
        label_B22->setGeometry(QRect(1134, 605, 10, 10));
        label_B22->setPixmap(QPixmap(QString::fromUtf8(":/Resources/Textures/Circle_Empty.png")));
        label_B22->setScaledContents(true);
        label_B43 = new QLabel(centralwidget);
        label_B43->setObjectName("label_B43");
        label_B43->setGeometry(QRect(1084, 620, 10, 10));
        label_B43->setPixmap(QPixmap(QString::fromUtf8(":/Resources/Textures/Circle_Empty.png")));
        label_B43->setScaledContents(true);
        label_B52 = new QLabel(centralwidget);
        label_B52->setObjectName("label_B52");
        label_B52->setGeometry(QRect(1094, 630, 10, 10));
        label_B52->setPixmap(QPixmap(QString::fromUtf8(":/Resources/Textures/Circle_Empty.png")));
        label_B52->setScaledContents(true);
        label_B41 = new QLabel(centralwidget);
        label_B41->setObjectName("label_B41");
        label_B41->setGeometry(QRect(1144, 620, 10, 10));
        label_B41->setPixmap(QPixmap(QString::fromUtf8(":/Resources/Textures/Circle_Empty.png")));
        label_B41->setScaledContents(true);
        label_B51 = new QLabel(centralwidget);
        label_B51->setObjectName("label_B51");
        label_B51->setGeometry(QRect(1134, 630, 10, 10));
        label_B51->setPixmap(QPixmap(QString::fromUtf8(":/Resources/Textures/Circle_Empty.png")));
        label_B51->setScaledContents(true);
        label_B62 = new QLabel(centralwidget);
        label_B62->setObjectName("label_B62");
        label_B62->setGeometry(QRect(1104, 640, 10, 10));
        label_B62->setPixmap(QPixmap(QString::fromUtf8(":/Resources/Textures/Circle_Empty.png")));
        label_B62->setScaledContents(true);
        label_B61 = new QLabel(centralwidget);
        label_B61->setObjectName("label_B61");
        label_B61->setGeometry(QRect(1124, 640, 10, 10));
        label_B61->setPixmap(QPixmap(QString::fromUtf8(":/Resources/Textures/Circle_Empty.png")));
        label_B61->setScaledContents(true);
        label_B42 = new QLabel(centralwidget);
        label_B42->setObjectName("label_B42");
        label_B42->setGeometry(QRect(1114, 630, 10, 10));
        label_B42->setPixmap(QPixmap(QString::fromUtf8(":/Resources/Textures/Circle_Empty.png")));
        label_B42->setScaledContents(true);
        label_B32 = new QLabel(centralwidget);
        label_B32->setObjectName("label_B32");
        label_B32->setGeometry(QRect(1124, 620, 10, 10));
        label_B32->setPixmap(QPixmap(QString::fromUtf8(":/Resources/Textures/Circle_Empty.png")));
        label_B32->setScaledContents(true);
        label_B23 = new QLabel(centralwidget);
        label_B23->setObjectName("label_B23");
        label_B23->setGeometry(QRect(1114, 610, 10, 10));
        label_B23->setPixmap(QPixmap(QString::fromUtf8(":/Resources/Textures/Circle_Empty.png")));
        label_B23->setScaledContents(true);
        label_B33 = new QLabel(centralwidget);
        label_B33->setObjectName("label_B33");
        label_B33->setGeometry(QRect(1104, 620, 10, 10));
        label_B33->setPixmap(QPixmap(QString::fromUtf8(":/Resources/Textures/Circle_Empty.png")));
        label_B33->setScaledContents(true);
        label_B24 = new QLabel(centralwidget);
        label_B24->setObjectName("label_B24");
        label_B24->setGeometry(QRect(1094, 605, 10, 10));
        label_B24->setPixmap(QPixmap(QString::fromUtf8(":/Resources/Textures/Circle_Empty.png")));
        label_B24->setScaledContents(true);
        label_R61 = new QLabel(centralwidget);
        label_R61->setObjectName("label_R61");
        label_R61->setGeometry(QRect(1244, 500, 10, 10));
        label_R61->setPixmap(QPixmap(QString::fromUtf8(":/Resources/Textures/Circle_Empty.png")));
        label_R61->setScaledContents(true);
        label_R22 = new QLabel(centralwidget);
        label_R22->setObjectName("label_R22");
        label_R22->setGeometry(QRect(1209, 490, 10, 10));
        label_R22->setPixmap(QPixmap(QString::fromUtf8(":/Resources/Textures/Circle_Empty.png")));
        label_R22->setScaledContents(true);
        label_R42 = new QLabel(centralwidget);
        label_R42->setObjectName("label_R42");
        label_R42->setGeometry(QRect(1234, 510, 10, 10));
        label_R42->setPixmap(QPixmap(QString::fromUtf8(":/Resources/Textures/Circle_Empty.png")));
        label_R42->setScaledContents(true);
        label_R62 = new QLabel(centralwidget);
        label_R62->setObjectName("label_R62");
        label_R62->setGeometry(QRect(1244, 520, 10, 10));
        label_R62->setPixmap(QPixmap(QString::fromUtf8(":/Resources/Textures/Circle_Empty.png")));
        label_R62->setScaledContents(true);
        label_R71 = new QLabel(centralwidget);
        label_R71->setObjectName("label_R71");
        label_R71->setGeometry(QRect(1254, 510, 10, 10));
        label_R71->setStyleSheet(QString::fromUtf8(""));
        label_R71->setPixmap(QPixmap(QString::fromUtf8(":/Resources/Textures/Circle_Empty.png")));
        label_R71->setScaledContents(true);
        label_R51 = new QLabel(centralwidget);
        label_R51->setObjectName("label_R51");
        label_R51->setGeometry(QRect(1234, 490, 10, 10));
        label_R51->setPixmap(QPixmap(QString::fromUtf8(":/Resources/Textures/Circle_Empty.png")));
        label_R51->setScaledContents(true);
        label_R43 = new QLabel(centralwidget);
        label_R43->setObjectName("label_R43");
        label_R43->setGeometry(QRect(1224, 540, 10, 10));
        label_R43->setPixmap(QPixmap(QString::fromUtf8(":/Resources/Textures/Circle_Empty.png")));
        label_R43->setScaledContents(true);
        label_R33 = new QLabel(centralwidget);
        label_R33->setObjectName("label_R33");
        label_R33->setGeometry(QRect(1224, 520, 10, 10));
        label_R33->setPixmap(QPixmap(QString::fromUtf8(":/Resources/Textures/Circle_Empty.png")));
        label_R33->setScaledContents(true);
        label_R41 = new QLabel(centralwidget);
        label_R41->setObjectName("label_R41");
        label_R41->setGeometry(QRect(1224, 480, 10, 10));
        label_R41->setPixmap(QPixmap(QString::fromUtf8(":/Resources/Textures/Circle_Empty.png")));
        label_R41->setScaledContents(true);
        label_R32 = new QLabel(centralwidget);
        label_R32->setObjectName("label_R32");
        label_R32->setGeometry(QRect(1224, 500, 10, 10));
        label_R32->setPixmap(QPixmap(QString::fromUtf8(":/Resources/Textures/Circle_Empty.png")));
        label_R32->setScaledContents(true);
        label_R24 = new QLabel(centralwidget);
        label_R24->setObjectName("label_R24");
        label_R24->setGeometry(QRect(1209, 530, 10, 10));
        label_R24->setPixmap(QPixmap(QString::fromUtf8(":/Resources/Textures/Circle_Empty.png")));
        label_R24->setScaledContents(true);
        label_R52 = new QLabel(centralwidget);
        label_R52->setObjectName("label_R52");
        label_R52->setGeometry(QRect(1234, 530, 10, 10));
        label_R52->setPixmap(QPixmap(QString::fromUtf8(":/Resources/Textures/Circle_Empty.png")));
        label_R52->setScaledContents(true);
        label_R23 = new QLabel(centralwidget);
        label_R23->setObjectName("label_R23");
        label_R23->setGeometry(QRect(1214, 510, 10, 10));
        label_R23->setPixmap(QPixmap(QString::fromUtf8(":/Resources/Textures/Circle_Empty.png")));
        label_R23->setScaledContents(true);
        label_L22 = new QLabel(centralwidget);
        label_L22->setObjectName("label_L22");
        label_L22->setGeometry(QRect(1019, 530, 10, 10));
        label_L22->setPixmap(QPixmap(QString::fromUtf8(":/Resources/Textures/Circle_Empty.png")));
        label_L22->setScaledContents(true);
        label_L33 = new QLabel(centralwidget);
        label_L33->setObjectName("label_L33");
        label_L33->setGeometry(QRect(1004, 500, 10, 10));
        label_L33->setPixmap(QPixmap(QString::fromUtf8(":/Resources/Textures/Circle_Empty.png")));
        label_L33->setScaledContents(true);
        label_L52 = new QLabel(centralwidget);
        label_L52->setObjectName("label_L52");
        label_L52->setGeometry(QRect(994, 490, 10, 10));
        label_L52->setPixmap(QPixmap(QString::fromUtf8(":/Resources/Textures/Circle_Empty.png")));
        label_L52->setScaledContents(true);
        label_L71 = new QLabel(centralwidget);
        label_L71->setObjectName("label_L71");
        label_L71->setGeometry(QRect(974, 510, 10, 10));
        label_L71->setPixmap(QPixmap(QString::fromUtf8(":/Resources/Textures/Circle_Empty.png")));
        label_L71->setScaledContents(true);
        label_L43 = new QLabel(centralwidget);
        label_L43->setObjectName("label_L43");
        label_L43->setGeometry(QRect(1004, 480, 10, 10));
        label_L43->setPixmap(QPixmap(QString::fromUtf8(":/Resources/Textures/Circle_Empty.png")));
        label_L43->setScaledContents(true);
        label_L61 = new QLabel(centralwidget);
        label_L61->setObjectName("label_L61");
        label_L61->setGeometry(QRect(984, 520, 10, 10));
        label_L61->setPixmap(QPixmap(QString::fromUtf8(":/Resources/Textures/Circle_Empty.png")));
        label_L61->setScaledContents(true);
        label_L41 = new QLabel(centralwidget);
        label_L41->setObjectName("label_L41");
        label_L41->setGeometry(QRect(1004, 540, 10, 10));
        label_L41->setPixmap(QPixmap(QString::fromUtf8(":/Resources/Textures/Circle_Empty.png")));
        label_L41->setScaledContents(true);
        label_L62 = new QLabel(centralwidget);
        label_L62->setObjectName("label_L62");
        label_L62->setGeometry(QRect(984, 500, 10, 10));
        label_L62->setPixmap(QPixmap(QString::fromUtf8(":/Resources/Textures/Circle_Empty.png")));
        label_L62->setScaledContents(true);
        label_L32 = new QLabel(centralwidget);
        label_L32->setObjectName("label_L32");
        label_L32->setGeometry(QRect(1004, 520, 10, 10));
        label_L32->setPixmap(QPixmap(QString::fromUtf8(":/Resources/Textures/Circle_Empty.png")));
        label_L32->setScaledContents(true);
        label_L51 = new QLabel(centralwidget);
        label_L51->setObjectName("label_L51");
        label_L51->setGeometry(QRect(994, 530, 10, 10));
        label_L51->setPixmap(QPixmap(QString::fromUtf8(":/Resources/Textures/Circle_Empty.png")));
        label_L51->setScaledContents(true);
        label_L42 = new QLabel(centralwidget);
        label_L42->setObjectName("label_L42");
        label_L42->setGeometry(QRect(994, 510, 10, 10));
        label_L42->setPixmap(QPixmap(QString::fromUtf8(":/Resources/Textures/Circle_Empty.png")));
        label_L42->setScaledContents(true);
        label_L23 = new QLabel(centralwidget);
        label_L23->setObjectName("label_L23");
        label_L23->setGeometry(QRect(1014, 510, 10, 10));
        label_L23->setPixmap(QPixmap(QString::fromUtf8(":/Resources/Textures/Circle_Empty.png")));
        label_L23->setScaledContents(true);
        label_L24 = new QLabel(centralwidget);
        label_L24->setObjectName("label_L24");
        label_L24->setGeometry(QRect(1019, 490, 10, 10));
        label_L24->setPixmap(QPixmap(QString::fromUtf8(":/Resources/Textures/Circle_Empty.png")));
        label_L24->setScaledContents(true);
        label_CompassOff = new QLabel(centralwidget);
        label_CompassOff->setObjectName("label_CompassOff");
        label_CompassOff->setGeometry(QRect(1050, 446, 140, 140));
        label_CompassOff->setPixmap(QPixmap(QString::fromUtf8(":/Resources/Icons/GeoPosOff.png")));
        label_CompassOff->setScaledContents(true);
        label_DroneCameraView = new QLabel(centralwidget);
        label_DroneCameraView->setObjectName("label_DroneCameraView");
        label_DroneCameraView->setGeometry(QRect(310, 30, 651, 481));
        label_DroneCameraView->setScaledContents(true);
        label_Camera1_2 = new QLabel(centralwidget);
        label_Camera1_2->setObjectName("label_Camera1_2");
        label_Camera1_2->setGeometry(QRect(310, 570, 124, 90));
        label_Camera1_2->setScaledContents(true);
        label_Camera2_2 = new QLabel(centralwidget);
        label_Camera2_2->setObjectName("label_Camera2_2");
        label_Camera2_2->setGeometry(QRect(440, 570, 124, 90));
        label_Camera2_2->setScaledContents(true);
        label_Camera3_2 = new QLabel(centralwidget);
        label_Camera3_2->setObjectName("label_Camera3_2");
        label_Camera3_2->setGeometry(QRect(570, 570, 124, 90));
        label_Camera3_2->setScaledContents(true);
        label_Camera5_2 = new QLabel(centralwidget);
        label_Camera5_2->setObjectName("label_Camera5_2");
        label_Camera5_2->setGeometry(QRect(830, 570, 124, 90));
        label_Camera5_2->setScaledContents(true);
        label_Camera4_2 = new QLabel(centralwidget);
        label_Camera4_2->setObjectName("label_Camera4_2");
        label_Camera4_2->setGeometry(QRect(700, 570, 124, 90));
        label_Camera4_2->setScaledContents(true);
        lcdNumber_ValueThrottle = new QLCDNumber(centralwidget);
        lcdNumber_ValueThrottle->setObjectName("lcdNumber_ValueThrottle");
        lcdNumber_ValueThrottle->setGeometry(QRect(895, 470, 40, 30));
        lcdNumber_ValueThrottle->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 199);\n"
"color: rgb(255, 255, 255);"));
        lcdNumber_ValueThrottle->setDigitCount(3);
        progressBar_ValueBatteryCharge = new QProgressBar(centralwidget);
        progressBar_ValueBatteryCharge->setObjectName("progressBar_ValueBatteryCharge");
        progressBar_ValueBatteryCharge->setGeometry(QRect(320, 90, 120, 20));
        progressBar_ValueBatteryCharge->setStyleSheet(QString::fromUtf8(""));
        progressBar_ValueBatteryCharge->setValue(24);
        progressBar_ValueBatteryCharge->setTextVisible(false);
        label_CompasOnSpot = new QLabel(centralwidget);
        label_CompasOnSpot->setObjectName("label_CompasOnSpot");
        label_CompasOnSpot->setGeometry(QRect(1048, 446, 140, 140));
        label_CompasOnSpot->setPixmap(QPixmap(QString::fromUtf8(":/Resources/Icons/GeoPosLighting.png")));
        label_CompasOnSpot->setScaledContents(true);
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(975, 30, 291, 321));
        gridLayout_4 = new QGridLayout(layoutWidget);
        gridLayout_4->setObjectName("gridLayout_4");
        gridLayout_4->setContentsMargins(0, 0, 0, 0);
        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        label_Humedity = new QLabel(layoutWidget);
        label_Humedity->setObjectName("label_Humedity");

        gridLayout->addWidget(label_Humedity, 12, 0, 1, 1);

        label_Displacement = new QLabel(layoutWidget);
        label_Displacement->setObjectName("label_Displacement");

        gridLayout->addWidget(label_Displacement, 8, 1, 1, 1);

        label_Speed = new QLabel(layoutWidget);
        label_Speed->setObjectName("label_Speed");

        gridLayout->addWidget(label_Speed, 12, 1, 1, 1);

        label_DroneIPV4 = new QLabel(layoutWidget);
        label_DroneIPV4->setObjectName("label_DroneIPV4");

        gridLayout->addWidget(label_DroneIPV4, 7, 0, 1, 1);

        lcdNumber_ValueDisplacement = new QLCDNumber(layoutWidget);
        lcdNumber_ValueDisplacement->setObjectName("lcdNumber_ValueDisplacement");
        lcdNumber_ValueDisplacement->setSmallDecimalPoint(false);

        gridLayout->addWidget(lcdNumber_ValueDisplacement, 10, 1, 1, 1);

        label_ValueDroneIPV4 = new QLabel(layoutWidget);
        label_ValueDroneIPV4->setObjectName("label_ValueDroneIPV4");

        gridLayout->addWidget(label_ValueDroneIPV4, 7, 1, 1, 1);

        label_Pressure = new QLabel(layoutWidget);
        label_Pressure->setObjectName("label_Pressure");

        gridLayout->addWidget(label_Pressure, 14, 0, 1, 1);

        lcdNumber_ValueHumidity = new QLCDNumber(layoutWidget);
        lcdNumber_ValueHumidity->setObjectName("lcdNumber_ValueHumidity");

        gridLayout->addWidget(lcdNumber_ValueHumidity, 13, 0, 1, 1);

        label_ValueDroneType = new QLabel(layoutWidget);
        label_ValueDroneType->setObjectName("label_ValueDroneType");

        gridLayout->addWidget(label_ValueDroneType, 6, 1, 1, 1);

        lcdNumber_ValuePressure = new QLCDNumber(layoutWidget);
        lcdNumber_ValuePressure->setObjectName("lcdNumber_ValuePressure");

        gridLayout->addWidget(lcdNumber_ValuePressure, 16, 0, 1, 1);

        lcdNumber_ValueSpeed = new QLCDNumber(layoutWidget);
        lcdNumber_ValueSpeed->setObjectName("lcdNumber_ValueSpeed");

        gridLayout->addWidget(lcdNumber_ValueSpeed, 13, 1, 1, 1);

        label_Height = new QLabel(layoutWidget);
        label_Height->setObjectName("label_Height");

        gridLayout->addWidget(label_Height, 14, 1, 1, 1);

        label_Temperature = new QLabel(layoutWidget);
        label_Temperature->setObjectName("label_Temperature");

        gridLayout->addWidget(label_Temperature, 8, 0, 1, 1);

        lcdNumber_ValueHeight = new QLCDNumber(layoutWidget);
        lcdNumber_ValueHeight->setObjectName("lcdNumber_ValueHeight");

        gridLayout->addWidget(lcdNumber_ValueHeight, 16, 1, 1, 1);

        pushButton_2 = new QPushButton(layoutWidget);
        pushButton_2->setObjectName("pushButton_2");

        gridLayout->addWidget(pushButton_2, 3, 1, 1, 1);

        label_DroneType = new QLabel(layoutWidget);
        label_DroneType->setObjectName("label_DroneType");

        gridLayout->addWidget(label_DroneType, 6, 0, 1, 1);

        label_ValueDroneIndex = new QLabel(layoutWidget);
        label_ValueDroneIndex->setObjectName("label_ValueDroneIndex");

        gridLayout->addWidget(label_ValueDroneIndex, 5, 1, 1, 1);

        label_DroneIndex = new QLabel(layoutWidget);
        label_DroneIndex->setObjectName("label_DroneIndex");
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Calibri Light")});
        label_DroneIndex->setFont(font2);

        gridLayout->addWidget(label_DroneIndex, 5, 0, 1, 1);

        lcdNumber_ValueTemperature = new QLCDNumber(layoutWidget);
        lcdNumber_ValueTemperature->setObjectName("lcdNumber_ValueTemperature");

        gridLayout->addWidget(lcdNumber_ValueTemperature, 10, 0, 1, 1);

        pushButton_ConnectLoRaWAN = new QPushButton(layoutWidget);
        pushButton_ConnectLoRaWAN->setObjectName("pushButton_ConnectLoRaWAN");
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Calibri Light")});
        font3.setPointSize(12);
        pushButton_ConnectLoRaWAN->setFont(font3);
        pushButton_ConnectLoRaWAN->setStyleSheet(QString::fromUtf8(""));

        gridLayout->addWidget(pushButton_ConnectLoRaWAN, 3, 0, 1, 1);


        gridLayout_4->addLayout(gridLayout, 1, 0, 1, 1);

        layoutWidget1 = new QWidget(centralwidget);
        layoutWidget1->setObjectName("layoutWidget1");
        layoutWidget1->setGeometry(QRect(12, 32, 291, 641));
        gridLayout_3 = new QGridLayout(layoutWidget1);
        gridLayout_3->setObjectName("gridLayout_3");
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        label_QuadcopterConsole = new QLabel(layoutWidget1);
        label_QuadcopterConsole->setObjectName("label_QuadcopterConsole");
        label_QuadcopterConsole->setFrameShape(QFrame::Box);

        gridLayout_3->addWidget(label_QuadcopterConsole, 0, 0, 1, 2);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName("gridLayout_2");
        label_LoRaWANServer = new QLabel(layoutWidget1);
        label_LoRaWANServer->setObjectName("label_LoRaWANServer");
        label_LoRaWANServer->setFont(font2);

        gridLayout_2->addWidget(label_LoRaWANServer, 2, 0, 1, 1);

        label_ValueApplicationIPV4 = new QLabel(layoutWidget1);
        label_ValueApplicationIPV4->setObjectName("label_ValueApplicationIPV4");

        gridLayout_2->addWidget(label_ValueApplicationIPV4, 6, 1, 1, 1);

        label_UDPConnection = new QLabel(layoutWidget1);
        label_UDPConnection->setObjectName("label_UDPConnection");

        gridLayout_2->addWidget(label_UDPConnection, 5, 0, 1, 1);

        label_ApplicationIPV4 = new QLabel(layoutWidget1);
        label_ApplicationIPV4->setObjectName("label_ApplicationIPV4");

        gridLayout_2->addWidget(label_ApplicationIPV4, 6, 0, 1, 1);

        label_StatusLoRaWANServer = new QLabel(layoutWidget1);
        label_StatusLoRaWANServer->setObjectName("label_StatusLoRaWANServer");

        gridLayout_2->addWidget(label_StatusLoRaWANServer, 2, 1, 1, 1);

        label_StatusMQTTServer = new QLabel(layoutWidget1);
        label_StatusMQTTServer->setObjectName("label_StatusMQTTServer");

        gridLayout_2->addWidget(label_StatusMQTTServer, 4, 1, 1, 1);

        label_LoRaWANFrequency = new QLabel(layoutWidget1);
        label_LoRaWANFrequency->setObjectName("label_LoRaWANFrequency");

        gridLayout_2->addWidget(label_LoRaWANFrequency, 3, 0, 1, 1);

        label_ValueLoRaWANFrequency = new QLabel(layoutWidget1);
        label_ValueLoRaWANFrequency->setObjectName("label_ValueLoRaWANFrequency");

        gridLayout_2->addWidget(label_ValueLoRaWANFrequency, 3, 1, 1, 1);

        label_StatusUDPConnection = new QLabel(layoutWidget1);
        label_StatusUDPConnection->setObjectName("label_StatusUDPConnection");

        gridLayout_2->addWidget(label_StatusUDPConnection, 5, 1, 1, 1);

        label_MQTTServer = new QLabel(layoutWidget1);
        label_MQTTServer->setObjectName("label_MQTTServer");
        label_MQTTServer->setFont(font2);

        gridLayout_2->addWidget(label_MQTTServer, 4, 0, 1, 1);

        pushButton_ServerSetting = new QPushButton(layoutWidget1);
        pushButton_ServerSetting->setObjectName("pushButton_ServerSetting");
        pushButton_ServerSetting->setFont(font3);

        gridLayout_2->addWidget(pushButton_ServerSetting, 1, 0, 1, 1);

        pushButton = new QPushButton(layoutWidget1);
        pushButton->setObjectName("pushButton");

        gridLayout_2->addWidget(pushButton, 1, 1, 1, 1);


        gridLayout_3->addLayout(gridLayout_2, 3, 0, 1, 2);

        plainTextEdit_LogPanel = new QPlainTextEdit(layoutWidget1);
        plainTextEdit_LogPanel->setObjectName("plainTextEdit_LogPanel");
        plainTextEdit_LogPanel->setStyleSheet(QString::fromUtf8("background-color: rgb(233, 233, 240);"));
        plainTextEdit_LogPanel->setFrameShape(QFrame::StyledPanel);
        plainTextEdit_LogPanel->setFrameShadow(QFrame::Sunken);
        plainTextEdit_LogPanel->setTabChangesFocus(false);

        gridLayout_3->addWidget(plainTextEdit_LogPanel, 5, 0, 1, 2);

        pushButton_SaveLogFile = new QPushButton(layoutWidget1);
        pushButton_SaveLogFile->setObjectName("pushButton_SaveLogFile");
        QFont font4;
        font4.setFamilies({QString::fromUtf8("Calibri Light")});
        font4.setPointSize(14);
        pushButton_SaveLogFile->setFont(font4);

        gridLayout_3->addWidget(pushButton_SaveLogFile, 6, 0, 1, 2);

        verticalSpacer = new QSpacerItem(20, 13, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout_3->addItem(verticalSpacer, 1, 0, 1, 2);

        verticalSpacer_2 = new QSpacerItem(20, 13, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout_3->addItem(verticalSpacer_2, 4, 0, 1, 2);

        Quadcopter_MainWindow->setCentralWidget(centralwidget);
        layoutWidget->raise();
        label_Camera5_2->raise();
        label_Camera4_2->raise();
        label_Camera3_2->raise();
        label_Camera2_2->raise();
        label_Camera1_2->raise();
        label_DroneCameraView->raise();
        pushButton_MoveLeft->raise();
        label_CompassOff->raise();
        pushButton_MoveForward->raise();
        label_Camera5->raise();
        label_Camera4->raise();
        label_Camera3->raise();
        label_Camera2->raise();
        label_Camera1->raise();
        graphicsView_DroneCameraView->raise();
        graphicsView_Camera3->raise();
        graphicsView_Camera4->raise();
        graphicsView_Camera2->raise();
        graphicsView_Camera1->raise();
        graphicsView_Camera0->raise();
        pushButton_MoveReverse->raise();
        pushButton_MoveRight->raise();
        layoutWidget->raise();
        pushButton_DroneSelectPrevious->raise();
        pushButton_DroneSelectNext->raise();
        label_Time->raise();
        pushButton_DroneCameraSnapshot->raise();
        verticalSlider_Throttle->raise();
        label_F22->raise();
        label_F24->raise();
        label_F41->raise();
        label_F32->raise();
        label_F33->raise();
        label_F43->raise();
        label_F51->raise();
        label_F42->raise();
        label_F52->raise();
        label_F61->raise();
        label_F62->raise();
        label_F71->raise();
        label_F23->raise();
        label_B71->raise();
        label_B22->raise();
        label_B43->raise();
        label_B52->raise();
        label_B41->raise();
        label_B51->raise();
        label_B62->raise();
        label_B61->raise();
        label_B42->raise();
        label_B32->raise();
        label_B23->raise();
        label_B33->raise();
        label_B24->raise();
        label_R61->raise();
        label_R22->raise();
        label_R42->raise();
        label_R62->raise();
        label_R71->raise();
        label_R51->raise();
        label_R43->raise();
        label_R33->raise();
        label_R41->raise();
        label_R32->raise();
        label_R24->raise();
        label_R52->raise();
        label_R23->raise();
        label_L22->raise();
        label_L33->raise();
        label_L52->raise();
        label_L71->raise();
        label_L43->raise();
        label_L61->raise();
        label_L41->raise();
        label_L62->raise();
        label_L32->raise();
        label_L51->raise();
        label_L42->raise();
        label_L23->raise();
        label_L24->raise();
        lcdNumber_ValueThrottle->raise();
        progressBar_ValueBatteryCharge->raise();
        label_CompasOnSpot->raise();
        dial_GeologicalPosition->raise();
        label_Logo->raise();

        retranslateUi(Quadcopter_MainWindow);

        QMetaObject::connectSlotsByName(Quadcopter_MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *Quadcopter_MainWindow)
    {
        Quadcopter_MainWindow->setWindowTitle(QCoreApplication::translate("Quadcopter_MainWindow", "Quadcopter_MainWindow", nullptr));
        pushButton_DroneSelectPrevious->setText(QString());
        pushButton_DroneSelectNext->setText(QString());
        label_Time->setText(QCoreApplication::translate("Quadcopter_MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:22pt; color:#ffffff;\">00:00:00</span></p></body></html>", nullptr));
        pushButton_DroneCameraSnapshot->setText(QString());
        pushButton_MoveForward->setText(QString());
        pushButton_MoveLeft->setText(QString());
        pushButton_MoveReverse->setText(QString());
        pushButton_MoveRight->setText(QString());
        label_Logo->setText(QString());
        label_Camera1->setText(QCoreApplication::translate("Quadcopter_MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:11pt;\">Camera 1</span></p><p><br/></p><p><br/></p><p><br/></p><p><br/></p><p><br/></p><p><br/></p><p><br/></p><p><br/></p></body></html>", nullptr));
        label_Camera2->setText(QCoreApplication::translate("Quadcopter_MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:11pt;\">Camera 2</span></p><p><br/></p><p><br/></p><p><br/></p><p><br/></p><p><br/></p><p><br/></p><p><br/></p><p><br/></p></body></html>", nullptr));
        label_Camera3->setText(QCoreApplication::translate("Quadcopter_MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:11pt;\">Camera 3</span></p><p><br/></p><p><br/></p><p><br/></p><p><br/></p><p><br/></p><p><br/></p><p><br/></p><p><br/></p></body></html>", nullptr));
        label_Camera4->setText(QCoreApplication::translate("Quadcopter_MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:11pt;\">Camera 4</span></p><p><br/></p><p><br/></p><p><br/></p><p><br/></p><p><br/></p><p><br/></p><p><br/></p><p><br/></p></body></html>", nullptr));
        label_Camera5->setText(QCoreApplication::translate("Quadcopter_MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:11pt;\">Camera 5</span></p><p><br/></p><p><br/></p><p><br/></p><p><br/></p><p><br/></p><p><br/></p><p><br/></p><p><br/></p></body></html>", nullptr));
        label_F22->setText(QString());
        label_F24->setText(QString());
        label_F41->setText(QString());
        label_F32->setText(QString());
        label_F33->setText(QString());
        label_F43->setText(QString());
        label_F51->setText(QString());
        label_F42->setText(QString());
        label_F52->setText(QString());
        label_F61->setText(QString());
        label_F62->setText(QString());
        label_F71->setText(QString());
        label_F23->setText(QString());
        label_B71->setText(QString());
        label_B22->setText(QString());
        label_B43->setText(QString());
        label_B52->setText(QString());
        label_B41->setText(QString());
        label_B51->setText(QString());
        label_B62->setText(QString());
        label_B61->setText(QString());
        label_B42->setText(QString());
        label_B32->setText(QString());
        label_B23->setText(QString());
        label_B33->setText(QString());
        label_B24->setText(QString());
        label_R61->setText(QString());
        label_R22->setText(QString());
        label_R42->setText(QString());
        label_R62->setText(QString());
        label_R71->setText(QString());
        label_R51->setText(QString());
        label_R43->setText(QString());
        label_R33->setText(QString());
        label_R41->setText(QString());
        label_R32->setText(QString());
        label_R24->setText(QString());
        label_R52->setText(QString());
        label_R23->setText(QString());
        label_L22->setText(QString());
        label_L33->setText(QString());
        label_L52->setText(QString());
        label_L71->setText(QString());
        label_L43->setText(QString());
        label_L61->setText(QString());
        label_L41->setText(QString());
        label_L62->setText(QString());
        label_L32->setText(QString());
        label_L51->setText(QString());
        label_L42->setText(QString());
        label_L23->setText(QString());
        label_L24->setText(QString());
        label_CompassOff->setText(QString());
        label_DroneCameraView->setText(QString());
        label_Camera1_2->setText(QString());
        label_Camera2_2->setText(QString());
        label_Camera3_2->setText(QString());
        label_Camera5_2->setText(QString());
        label_Camera4_2->setText(QString());
        label_CompasOnSpot->setText(QString());
        label_Humedity->setText(QCoreApplication::translate("Quadcopter_MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:12pt;\">Humedity (%)</span></p></body></html>", nullptr));
        label_Displacement->setText(QCoreApplication::translate("Quadcopter_MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:12pt;\">Displacement (cm)</span></p></body></html>", nullptr));
        label_Speed->setText(QCoreApplication::translate("Quadcopter_MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:12pt;\">Speed (cm/s)</span></p></body></html>", nullptr));
        label_DroneIPV4->setText(QCoreApplication::translate("Quadcopter_MainWindow", "<html><head/><body><p><span style=\" font-size:12pt;\">Drone IPV4</span></p></body></html>", nullptr));
        label_ValueDroneIPV4->setText(QCoreApplication::translate("Quadcopter_MainWindow", "<html><head/><body><p><br/></p></body></html>", nullptr));
        label_Pressure->setText(QCoreApplication::translate("Quadcopter_MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:12pt;\">Pressure (hPa)</span></p></body></html>", nullptr));
        label_ValueDroneType->setText(QCoreApplication::translate("Quadcopter_MainWindow", "<html><head/><body><p><span style=\" font-size:12pt;\">N/A</span></p></body></html>", nullptr));
        label_Height->setText(QCoreApplication::translate("Quadcopter_MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:12pt;\">Height (cm)</span></p></body></html>", nullptr));
        label_Temperature->setText(QCoreApplication::translate("Quadcopter_MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:12pt;\">Temperature ('C)</span></p></body></html>", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Quadcopter_MainWindow", "FCTLR DEBUG Mode", nullptr));
        label_DroneType->setText(QCoreApplication::translate("Quadcopter_MainWindow", "<html><head/><body><p><span style=\" font-size:12pt;\">Drone Type</span></p></body></html>", nullptr));
        label_ValueDroneIndex->setText(QCoreApplication::translate("Quadcopter_MainWindow", "<html><head/><body><p><span style=\" font-size:12pt;\">0/99</span></p></body></html>", nullptr));
        label_DroneIndex->setText(QCoreApplication::translate("Quadcopter_MainWindow", "<html><head/><body><p><span style=\" font-size:12pt;\">Drone Index</span></p></body></html>", nullptr));
        pushButton_ConnectLoRaWAN->setText(QCoreApplication::translate("Quadcopter_MainWindow", "Drone Setting", nullptr));
        label_QuadcopterConsole->setText(QCoreApplication::translate("Quadcopter_MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:14pt; font-weight:700;\">Drone - Console</span></p></body></html>", nullptr));
        label_LoRaWANServer->setText(QCoreApplication::translate("Quadcopter_MainWindow", "<html><head/><body><p><span style=\" font-size:12pt;\">LoRaWAN Server</span></p></body></html>", nullptr));
        label_ValueApplicationIPV4->setText(QCoreApplication::translate("Quadcopter_MainWindow", "<html><head/><body><p><br/></p></body></html>", nullptr));
        label_UDPConnection->setText(QCoreApplication::translate("Quadcopter_MainWindow", "<html><head/><body><p><span style=\" font-size:12pt;\">UDP Connection</span></p></body></html>", nullptr));
        label_ApplicationIPV4->setText(QCoreApplication::translate("Quadcopter_MainWindow", "<html><head/><body><p><span style=\" font-size:12pt;\">Application IPV4</span></p></body></html>", nullptr));
        label_StatusLoRaWANServer->setText(QCoreApplication::translate("Quadcopter_MainWindow", "<html><head/><body><p><span style=\" font-size:12pt;\">Disconnected</span></p></body></html>", nullptr));
        label_StatusMQTTServer->setText(QCoreApplication::translate("Quadcopter_MainWindow", "<html><head/><body><p><span style=\" font-size:12pt;\">Disconnected</span></p></body></html>", nullptr));
        label_LoRaWANFrequency->setText(QCoreApplication::translate("Quadcopter_MainWindow", "<html><head/><body><p><span style=\" font-size:12pt;\">LoRaWAN Freq.</span></p></body></html>", nullptr));
        label_ValueLoRaWANFrequency->setText(QCoreApplication::translate("Quadcopter_MainWindow", "<html><head/><body><p><br/></p></body></html>", nullptr));
        label_StatusUDPConnection->setText(QCoreApplication::translate("Quadcopter_MainWindow", "<html><head/><body><p><span style=\" font-size:12pt;\">Disabled</span></p></body></html>", nullptr));
        label_MQTTServer->setText(QCoreApplication::translate("Quadcopter_MainWindow", "<html><head/><body><p><span style=\" font-size:12pt;\">MQTT Server</span></p></body></html>", nullptr));
        pushButton_ServerSetting->setText(QCoreApplication::translate("Quadcopter_MainWindow", "Server Setting", nullptr));
        pushButton->setText(QCoreApplication::translate("Quadcopter_MainWindow", "RCTLR DEBUG Mode", nullptr));
        plainTextEdit_LogPanel->setPlainText(QString());
        pushButton_SaveLogFile->setText(QCoreApplication::translate("Quadcopter_MainWindow", "Save Log File", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Quadcopter_MainWindow: public Ui_Quadcopter_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QUADCOPTER_MAINWINDOW_H
