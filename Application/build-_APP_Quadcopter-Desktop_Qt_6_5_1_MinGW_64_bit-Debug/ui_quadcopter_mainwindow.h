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
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Quadcopter_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton_DroneSelectPrevious;
    QPushButton *pushButton_DroneSelectNext;
    QGraphicsView *graphicsView_DroneCameraView;
    QPlainTextEdit *plainTextEdit_DiagnosticText;
    QLabel *label_NumberOfDrones;
    QPushButton *pushButton_DroneCameraRecord;
    QPushButton *pushButton_DroneCameraSnapshot;
    QWidget *layoutWidget;
    QGridLayout *gridLayout_4;
    QGridLayout *gridLayout_2;
    QPushButton *pushButton_MoveForward;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *pushButton_MoveLeft;
    QSpacerItem *verticalSpacer;
    QSpacerItem *horizontalSpacer_9;
    QSpacerItem *horizontalSpacer_4;
    QSlider *verticalSlider_Throttle;
    QPushButton *pushButton_MoveReverse;
    QSpacerItem *horizontalSpacer_7;
    QSpacerItem *horizontalSpacer_6;
    QSpacerItem *horizontalSpacer_8;
    QSpacerItem *horizontalSpacer_5;
    QSpacerItem *verticalSpacer_4;
    QPushButton *pushButton_MoveRight;
    QDial *dial_AdjustDirection;
    QSpacerItem *verticalSpacer_2;
    QGridLayout *gridLayout;
    QPushButton *pushButton_ConnectServer;
    QPushButton *pushButton_ConnectLoRaWAN;
    QSpacerItem *verticalSpacer_3;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Quadcopter_MainWindow)
    {
        if (Quadcopter_MainWindow->objectName().isEmpty())
            Quadcopter_MainWindow->setObjectName("Quadcopter_MainWindow");
        Quadcopter_MainWindow->resize(1060, 673);
        centralwidget = new QWidget(Quadcopter_MainWindow);
        centralwidget->setObjectName("centralwidget");
        pushButton_DroneSelectPrevious = new QPushButton(centralwidget);
        pushButton_DroneSelectPrevious->setObjectName("pushButton_DroneSelectPrevious");
        pushButton_DroneSelectPrevious->setGeometry(QRect(90, 430, 88, 24));
        pushButton_DroneSelectNext = new QPushButton(centralwidget);
        pushButton_DroneSelectNext->setObjectName("pushButton_DroneSelectNext");
        pushButton_DroneSelectNext->setGeometry(QRect(447, 430, 75, 24));
        graphicsView_DroneCameraView = new QGraphicsView(centralwidget);
        graphicsView_DroneCameraView->setObjectName("graphicsView_DroneCameraView");
        graphicsView_DroneCameraView->setGeometry(QRect(9, 9, 640, 480));
        plainTextEdit_DiagnosticText = new QPlainTextEdit(centralwidget);
        plainTextEdit_DiagnosticText->setObjectName("plainTextEdit_DiagnosticText");
        plainTextEdit_DiagnosticText->setGeometry(QRect(9, 499, 1041, 121));
        label_NumberOfDrones = new QLabel(centralwidget);
        label_NumberOfDrones->setObjectName("label_NumberOfDrones");
        label_NumberOfDrones->setGeometry(QRect(19, 19, 111, 61));
        pushButton_DroneCameraRecord = new QPushButton(centralwidget);
        pushButton_DroneCameraRecord->setObjectName("pushButton_DroneCameraRecord");
        pushButton_DroneCameraRecord->setGeometry(QRect(209, 430, 75, 24));
        pushButton_DroneCameraSnapshot = new QPushButton(centralwidget);
        pushButton_DroneCameraSnapshot->setObjectName("pushButton_DroneCameraSnapshot");
        pushButton_DroneCameraSnapshot->setGeometry(QRect(328, 430, 75, 24));
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(659, 9, 391, 481));
        gridLayout_4 = new QGridLayout(layoutWidget);
        gridLayout_4->setObjectName("gridLayout_4");
        gridLayout_4->setContentsMargins(0, 0, 0, 0);
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName("gridLayout_2");
        pushButton_MoveForward = new QPushButton(layoutWidget);
        pushButton_MoveForward->setObjectName("pushButton_MoveForward");
        QFont font;
        font.setFamilies({QString::fromUtf8("Calibri")});
        font.setPointSize(14);
        pushButton_MoveForward->setFont(font);

        gridLayout_2->addWidget(pushButton_MoveForward, 1, 3, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_2, 5, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 5, 5, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_3, 1, 1, 1, 1);

        pushButton_MoveLeft = new QPushButton(layoutWidget);
        pushButton_MoveLeft->setObjectName("pushButton_MoveLeft");
        pushButton_MoveLeft->setFont(font);

        gridLayout_2->addWidget(pushButton_MoveLeft, 3, 1, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer, 2, 3, 1, 1);

        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_9, 3, 8, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_4, 1, 5, 1, 1);

        verticalSlider_Throttle = new QSlider(layoutWidget);
        verticalSlider_Throttle->setObjectName("verticalSlider_Throttle");
        verticalSlider_Throttle->setMaximum(300);
        verticalSlider_Throttle->setOrientation(Qt::Vertical);
        verticalSlider_Throttle->setInvertedAppearance(false);
        verticalSlider_Throttle->setInvertedControls(false);
        verticalSlider_Throttle->setTickPosition(QSlider::TicksAbove);
        verticalSlider_Throttle->setTickInterval(10);

        gridLayout_2->addWidget(verticalSlider_Throttle, 1, 7, 6, 1);

        pushButton_MoveReverse = new QPushButton(layoutWidget);
        pushButton_MoveReverse->setObjectName("pushButton_MoveReverse");
        pushButton_MoveReverse->setFont(font);

        gridLayout_2->addWidget(pushButton_MoveReverse, 5, 3, 1, 1);

        horizontalSpacer_7 = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_7, 3, 2, 1, 1);

        horizontalSpacer_6 = new QSpacerItem(20, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_6, 3, 6, 1, 1);

        horizontalSpacer_8 = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_8, 3, 4, 1, 1);

        horizontalSpacer_5 = new QSpacerItem(20, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_5, 3, 0, 1, 1);

        verticalSpacer_4 = new QSpacerItem(20, 60, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout_2->addItem(verticalSpacer_4, 6, 3, 1, 1);

        pushButton_MoveRight = new QPushButton(layoutWidget);
        pushButton_MoveRight->setObjectName("pushButton_MoveRight");
        pushButton_MoveRight->setFont(font);

        gridLayout_2->addWidget(pushButton_MoveRight, 3, 5, 1, 1);

        dial_AdjustDirection = new QDial(layoutWidget);
        dial_AdjustDirection->setObjectName("dial_AdjustDirection");
        dial_AdjustDirection->setMaximum(360);
        dial_AdjustDirection->setSingleStep(10);
        dial_AdjustDirection->setValue(180);
        dial_AdjustDirection->setTracking(true);
        dial_AdjustDirection->setWrapping(true);
        dial_AdjustDirection->setNotchesVisible(true);

        gridLayout_2->addWidget(dial_AdjustDirection, 3, 3, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_2, 4, 3, 1, 1);


        gridLayout_4->addLayout(gridLayout_2, 2, 0, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        pushButton_ConnectServer = new QPushButton(layoutWidget);
        pushButton_ConnectServer->setObjectName("pushButton_ConnectServer");
        pushButton_ConnectServer->setFont(font);

        gridLayout->addWidget(pushButton_ConnectServer, 0, 0, 1, 1);

        pushButton_ConnectLoRaWAN = new QPushButton(layoutWidget);
        pushButton_ConnectLoRaWAN->setObjectName("pushButton_ConnectLoRaWAN");
        pushButton_ConnectLoRaWAN->setFont(font);

        gridLayout->addWidget(pushButton_ConnectLoRaWAN, 0, 1, 1, 1);


        gridLayout_4->addLayout(gridLayout, 0, 0, 1, 1);

        verticalSpacer_3 = new QSpacerItem(40, 120, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout_4->addItem(verticalSpacer_3, 1, 0, 1, 1);

        Quadcopter_MainWindow->setCentralWidget(centralwidget);
        layoutWidget->raise();
        graphicsView_DroneCameraView->raise();
        pushButton_DroneSelectPrevious->raise();
        pushButton_DroneSelectNext->raise();
        plainTextEdit_DiagnosticText->raise();
        label_NumberOfDrones->raise();
        pushButton_DroneCameraRecord->raise();
        pushButton_DroneCameraSnapshot->raise();
        menubar = new QMenuBar(Quadcopter_MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1060, 22));
        Quadcopter_MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(Quadcopter_MainWindow);
        statusbar->setObjectName("statusbar");
        Quadcopter_MainWindow->setStatusBar(statusbar);

        retranslateUi(Quadcopter_MainWindow);

        QMetaObject::connectSlotsByName(Quadcopter_MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *Quadcopter_MainWindow)
    {
        Quadcopter_MainWindow->setWindowTitle(QCoreApplication::translate("Quadcopter_MainWindow", "Quadcopter_MainWindow", nullptr));
        pushButton_DroneSelectPrevious->setText(QCoreApplication::translate("Quadcopter_MainWindow", "Previous Drone", nullptr));
        pushButton_DroneSelectNext->setText(QCoreApplication::translate("Quadcopter_MainWindow", "Next Drone", nullptr));
        label_NumberOfDrones->setText(QCoreApplication::translate("Quadcopter_MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:24pt;\">00/00</span></p></body></html>", nullptr));
        pushButton_DroneCameraRecord->setText(QCoreApplication::translate("Quadcopter_MainWindow", "Record", nullptr));
        pushButton_DroneCameraSnapshot->setText(QCoreApplication::translate("Quadcopter_MainWindow", "Picture", nullptr));
        pushButton_MoveForward->setText(QCoreApplication::translate("Quadcopter_MainWindow", "Forward", nullptr));
        pushButton_MoveLeft->setText(QCoreApplication::translate("Quadcopter_MainWindow", "Left", nullptr));
        pushButton_MoveReverse->setText(QCoreApplication::translate("Quadcopter_MainWindow", "Reverse", nullptr));
        pushButton_MoveRight->setText(QCoreApplication::translate("Quadcopter_MainWindow", "Right", nullptr));
        pushButton_ConnectServer->setText(QCoreApplication::translate("Quadcopter_MainWindow", "Connect Server", nullptr));
        pushButton_ConnectLoRaWAN->setText(QCoreApplication::translate("Quadcopter_MainWindow", "Connect LoRaWAN", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Quadcopter_MainWindow: public Ui_Quadcopter_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QUADCOPTER_MAINWINDOW_H
