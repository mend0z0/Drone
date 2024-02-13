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
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Quadcopter_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton_DroneSelectPrevious;
    QPushButton *pushButton_DroneSelectNext;
    QGraphicsView *graphicsView_DroneCameraView;
    QLabel *label_NumberOfDrones;
    QPushButton *pushButton_DroneCameraSnapshot;
    QSlider *verticalSlider_Throttle;
    QPushButton *pushButton_ConnectLoRaWAN;
    QPushButton *pushButton_MoveForward;
    QPushButton *pushButton_MoveLeft;
    QPushButton *pushButton_MoveReverse;
    QPushButton *pushButton_MoveRight;
    QDial *dial_AdjustDirection;
    QWidget *layoutWidget;
    QGridLayout *gridLayout_3;
    QGridLayout *gridLayout_2;
    QPushButton *pushButton_ConnectServer;
    QLabel *label_MQTTTopic;
    QLabel *label_MQTTQoS;
    QPlainTextEdit *plainTextEdit_LogPanel;
    QPushButton *pushButton_SaveLogFile;
    QGraphicsView *graphicsView_Camera3;
    QGraphicsView *graphicsView_Camera4;
    QGraphicsView *graphicsView_Camera2;
    QGraphicsView *graphicsView_Camera1;
    QGraphicsView *graphicsView_Camera0;
    QLabel *label_Logo;
    QMenuBar *menubar;

    void setupUi(QMainWindow *Quadcopter_MainWindow)
    {
        if (Quadcopter_MainWindow->objectName().isEmpty())
            Quadcopter_MainWindow->setObjectName("Quadcopter_MainWindow");
        Quadcopter_MainWindow->setEnabled(true);
        Quadcopter_MainWindow->resize(1162, 628);
        QPalette palette;
        QBrush brush(QColor(248, 248, 248, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Window, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush);
        Quadcopter_MainWindow->setPalette(palette);
        centralwidget = new QWidget(Quadcopter_MainWindow);
        centralwidget->setObjectName("centralwidget");
        pushButton_DroneSelectPrevious = new QPushButton(centralwidget);
        pushButton_DroneSelectPrevious->setObjectName("pushButton_DroneSelectPrevious");
        pushButton_DroneSelectPrevious->setGeometry(QRect(360, 440, 88, 24));
        pushButton_DroneSelectNext = new QPushButton(centralwidget);
        pushButton_DroneSelectNext->setObjectName("pushButton_DroneSelectNext");
        pushButton_DroneSelectNext->setGeometry(QRect(590, 440, 75, 24));
        graphicsView_DroneCameraView = new QGraphicsView(centralwidget);
        graphicsView_DroneCameraView->setObjectName("graphicsView_DroneCameraView");
        graphicsView_DroneCameraView->setGeometry(QRect(229, 9, 651, 481));
        graphicsView_DroneCameraView->setFrameShape(QFrame::NoFrame);
        label_NumberOfDrones = new QLabel(centralwidget);
        label_NumberOfDrones->setObjectName("label_NumberOfDrones");
        label_NumberOfDrones->setGeometry(QRect(230, 10, 91, 51));
        pushButton_DroneCameraSnapshot = new QPushButton(centralwidget);
        pushButton_DroneCameraSnapshot->setObjectName("pushButton_DroneCameraSnapshot");
        pushButton_DroneCameraSnapshot->setGeometry(QRect(480, 440, 75, 24));
        verticalSlider_Throttle = new QSlider(centralwidget);
        verticalSlider_Throttle->setObjectName("verticalSlider_Throttle");
        verticalSlider_Throttle->setEnabled(true);
        verticalSlider_Throttle->setGeometry(QRect(822, 17, 41, 461));
        verticalSlider_Throttle->setMaximum(300);
        verticalSlider_Throttle->setOrientation(Qt::Vertical);
        verticalSlider_Throttle->setInvertedAppearance(false);
        verticalSlider_Throttle->setInvertedControls(false);
        verticalSlider_Throttle->setTickPosition(QSlider::TicksBothSides);
        verticalSlider_Throttle->setTickInterval(10);
        pushButton_ConnectLoRaWAN = new QPushButton(centralwidget);
        pushButton_ConnectLoRaWAN->setObjectName("pushButton_ConnectLoRaWAN");
        pushButton_ConnectLoRaWAN->setGeometry(QRect(900, 10, 209, 31));
        QFont font;
        font.setFamilies({QString::fromUtf8("Calibri Light")});
        font.setPointSize(14);
        pushButton_ConnectLoRaWAN->setFont(font);
        pushButton_MoveForward = new QPushButton(centralwidget);
        pushButton_MoveForward->setObjectName("pushButton_MoveForward");
        pushButton_MoveForward->setGeometry(QRect(970, 172, 75, 31));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Calibri")});
        font1.setPointSize(14);
        pushButton_MoveForward->setFont(font1);
        pushButton_MoveLeft = new QPushButton(centralwidget);
        pushButton_MoveLeft->setObjectName("pushButton_MoveLeft");
        pushButton_MoveLeft->setGeometry(QRect(888, 244, 75, 31));
        pushButton_MoveLeft->setFont(font1);
        pushButton_MoveReverse = new QPushButton(centralwidget);
        pushButton_MoveReverse->setObjectName("pushButton_MoveReverse");
        pushButton_MoveReverse->setGeometry(QRect(970, 317, 75, 31));
        pushButton_MoveReverse->setFont(font1);
        pushButton_MoveRight = new QPushButton(centralwidget);
        pushButton_MoveRight->setObjectName("pushButton_MoveRight");
        pushButton_MoveRight->setGeometry(QRect(1077, 244, 75, 31));
        pushButton_MoveRight->setFont(font1);
        dial_AdjustDirection = new QDial(centralwidget);
        dial_AdjustDirection->setObjectName("dial_AdjustDirection");
        dial_AdjustDirection->setGeometry(QRect(970, 210, 100, 100));
        dial_AdjustDirection->setMaximum(360);
        dial_AdjustDirection->setSingleStep(10);
        dial_AdjustDirection->setValue(180);
        dial_AdjustDirection->setTracking(true);
        dial_AdjustDirection->setWrapping(true);
        dial_AdjustDirection->setNotchesVisible(true);
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(10, 10, 211, 591));
        gridLayout_3 = new QGridLayout(layoutWidget);
        gridLayout_3->setObjectName("gridLayout_3");
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName("gridLayout_2");
        pushButton_ConnectServer = new QPushButton(layoutWidget);
        pushButton_ConnectServer->setObjectName("pushButton_ConnectServer");
        pushButton_ConnectServer->setFont(font);

        gridLayout_2->addWidget(pushButton_ConnectServer, 0, 0, 1, 1);

        label_MQTTTopic = new QLabel(layoutWidget);
        label_MQTTTopic->setObjectName("label_MQTTTopic");
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Calibri Light")});
        label_MQTTTopic->setFont(font2);

        gridLayout_2->addWidget(label_MQTTTopic, 1, 0, 1, 1);

        label_MQTTQoS = new QLabel(layoutWidget);
        label_MQTTQoS->setObjectName("label_MQTTQoS");
        label_MQTTQoS->setFont(font2);

        gridLayout_2->addWidget(label_MQTTQoS, 2, 0, 1, 1);


        gridLayout_3->addLayout(gridLayout_2, 0, 0, 1, 1);

        plainTextEdit_LogPanel = new QPlainTextEdit(layoutWidget);
        plainTextEdit_LogPanel->setObjectName("plainTextEdit_LogPanel");
        plainTextEdit_LogPanel->setFrameShape(QFrame::NoFrame);
        plainTextEdit_LogPanel->setFrameShadow(QFrame::Sunken);
        plainTextEdit_LogPanel->setTabChangesFocus(false);

        gridLayout_3->addWidget(plainTextEdit_LogPanel, 1, 0, 1, 1);

        pushButton_SaveLogFile = new QPushButton(layoutWidget);
        pushButton_SaveLogFile->setObjectName("pushButton_SaveLogFile");
        pushButton_SaveLogFile->setFont(font);

        gridLayout_3->addWidget(pushButton_SaveLogFile, 2, 0, 1, 1);

        graphicsView_Camera3 = new QGraphicsView(centralwidget);
        graphicsView_Camera3->setObjectName("graphicsView_Camera3");
        graphicsView_Camera3->setGeometry(QRect(620, 500, 128, 96));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(graphicsView_Camera3->sizePolicy().hasHeightForWidth());
        graphicsView_Camera3->setSizePolicy(sizePolicy);
        graphicsView_Camera3->setFrameShape(QFrame::NoFrame);
        graphicsView_Camera4 = new QGraphicsView(centralwidget);
        graphicsView_Camera4->setObjectName("graphicsView_Camera4");
        graphicsView_Camera4->setGeometry(QRect(750, 500, 128, 96));
        sizePolicy.setHeightForWidth(graphicsView_Camera4->sizePolicy().hasHeightForWidth());
        graphicsView_Camera4->setSizePolicy(sizePolicy);
        graphicsView_Camera4->setFrameShape(QFrame::NoFrame);
        graphicsView_Camera2 = new QGraphicsView(centralwidget);
        graphicsView_Camera2->setObjectName("graphicsView_Camera2");
        graphicsView_Camera2->setGeometry(QRect(490, 500, 128, 96));
        sizePolicy.setHeightForWidth(graphicsView_Camera2->sizePolicy().hasHeightForWidth());
        graphicsView_Camera2->setSizePolicy(sizePolicy);
        graphicsView_Camera2->setFrameShape(QFrame::NoFrame);
        graphicsView_Camera1 = new QGraphicsView(centralwidget);
        graphicsView_Camera1->setObjectName("graphicsView_Camera1");
        graphicsView_Camera1->setEnabled(true);
        graphicsView_Camera1->setGeometry(QRect(360, 500, 128, 96));
        sizePolicy.setHeightForWidth(graphicsView_Camera1->sizePolicy().hasHeightForWidth());
        graphicsView_Camera1->setSizePolicy(sizePolicy);
        graphicsView_Camera1->setFrameShape(QFrame::NoFrame);
        graphicsView_Camera0 = new QGraphicsView(centralwidget);
        graphicsView_Camera0->setObjectName("graphicsView_Camera0");
        graphicsView_Camera0->setGeometry(QRect(230, 500, 128, 96));
        sizePolicy.setHeightForWidth(graphicsView_Camera0->sizePolicy().hasHeightForWidth());
        graphicsView_Camera0->setSizePolicy(sizePolicy);
        graphicsView_Camera0->setFrameShape(QFrame::NoFrame);
        graphicsView_Camera0->setFrameShadow(QFrame::Plain);
        label_Logo = new QLabel(centralwidget);
        label_Logo->setObjectName("label_Logo");
        label_Logo->setGeometry(QRect(950, 500, 131, 91));
        label_Logo->setPixmap(QPixmap(QString::fromUtf8(":/Pictures/Logo/MEND0Z0 LOGO_simple.png")));
        label_Logo->setScaledContents(true);
        Quadcopter_MainWindow->setCentralWidget(centralwidget);
        graphicsView_Camera3->raise();
        graphicsView_Camera4->raise();
        graphicsView_Camera2->raise();
        graphicsView_Camera1->raise();
        graphicsView_Camera0->raise();
        pushButton_MoveForward->raise();
        pushButton_MoveLeft->raise();
        pushButton_MoveReverse->raise();
        pushButton_MoveRight->raise();
        dial_AdjustDirection->raise();
        layoutWidget->raise();
        graphicsView_DroneCameraView->raise();
        pushButton_DroneSelectPrevious->raise();
        pushButton_DroneSelectNext->raise();
        label_NumberOfDrones->raise();
        pushButton_DroneCameraSnapshot->raise();
        verticalSlider_Throttle->raise();
        pushButton_ConnectLoRaWAN->raise();
        label_Logo->raise();
        menubar = new QMenuBar(Quadcopter_MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1162, 22));
        Quadcopter_MainWindow->setMenuBar(menubar);

        retranslateUi(Quadcopter_MainWindow);

        QMetaObject::connectSlotsByName(Quadcopter_MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *Quadcopter_MainWindow)
    {
        Quadcopter_MainWindow->setWindowTitle(QCoreApplication::translate("Quadcopter_MainWindow", "Quadcopter_MainWindow", nullptr));
        pushButton_DroneSelectPrevious->setText(QCoreApplication::translate("Quadcopter_MainWindow", "Previous Drone", nullptr));
        pushButton_DroneSelectNext->setText(QCoreApplication::translate("Quadcopter_MainWindow", "Next Drone", nullptr));
        label_NumberOfDrones->setText(QCoreApplication::translate("Quadcopter_MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:24pt;\">--/--</span></p></body></html>", nullptr));
        pushButton_DroneCameraSnapshot->setText(QCoreApplication::translate("Quadcopter_MainWindow", "Picture", nullptr));
        pushButton_ConnectLoRaWAN->setText(QCoreApplication::translate("Quadcopter_MainWindow", "Connect LoRaWAN", nullptr));
        pushButton_MoveForward->setText(QCoreApplication::translate("Quadcopter_MainWindow", "Forward", nullptr));
        pushButton_MoveLeft->setText(QCoreApplication::translate("Quadcopter_MainWindow", "Left", nullptr));
        pushButton_MoveReverse->setText(QCoreApplication::translate("Quadcopter_MainWindow", "Reverse", nullptr));
        pushButton_MoveRight->setText(QCoreApplication::translate("Quadcopter_MainWindow", "Right", nullptr));
        pushButton_ConnectServer->setText(QCoreApplication::translate("Quadcopter_MainWindow", "Connect Server", nullptr));
        label_MQTTTopic->setText(QCoreApplication::translate("Quadcopter_MainWindow", "<html><head/><body><p><span style=\" font-size:16pt;\">  Topic: </span></p></body></html>", nullptr));
        label_MQTTQoS->setText(QCoreApplication::translate("Quadcopter_MainWindow", "<html><head/><body><p><span style=\" font-size:16pt;\"> QoS:</span></p></body></html>", nullptr));
        pushButton_SaveLogFile->setText(QCoreApplication::translate("Quadcopter_MainWindow", "Save Log File", nullptr));
        label_Logo->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Quadcopter_MainWindow: public Ui_Quadcopter_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QUADCOPTER_MAINWINDOW_H
