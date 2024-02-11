/********************************************************************************
** Form generated from reading UI file 'quadcopter_mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.14
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
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Quadcopter_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QGraphicsView *graphicsView;
    QPlainTextEdit *plainTextEdit;
    QLabel *label;
    QPushButton *pushButton_9;
    QPushButton *pushButton_10;
    QWidget *widget;
    QGridLayout *gridLayout_4;
    QGridLayout *gridLayout_2;
    QPushButton *pushButton_4;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *pushButton_3;
    QSpacerItem *verticalSpacer;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *pushButton_6;
    QSpacerItem *horizontalSpacer_7;
    QSpacerItem *horizontalSpacer_8;
    QSpacerItem *horizontalSpacer_5;
    QSpacerItem *verticalSpacer_4;
    QPushButton *pushButton_5;
    QDial *dial;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *horizontalSpacer_6;
    QGridLayout *gridLayout;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QSpacerItem *verticalSpacer_3;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Quadcopter_MainWindow)
    {
        if (Quadcopter_MainWindow->objectName().isEmpty())
            Quadcopter_MainWindow->setObjectName(QString::fromUtf8("Quadcopter_MainWindow"));
        Quadcopter_MainWindow->resize(1108, 692);
        centralwidget = new QWidget(Quadcopter_MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(121, 441, 88, 24));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(478, 441, 75, 24));
        graphicsView = new QGraphicsView(centralwidget);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));
        graphicsView->setGeometry(QRect(40, 20, 640, 480));
        plainTextEdit = new QPlainTextEdit(centralwidget);
        plainTextEdit->setObjectName(QString::fromUtf8("plainTextEdit"));
        plainTextEdit->setGeometry(QRect(40, 510, 1041, 121));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(50, 30, 91, 41));
        pushButton_9 = new QPushButton(centralwidget);
        pushButton_9->setObjectName(QString::fromUtf8("pushButton_9"));
        pushButton_9->setGeometry(QRect(240, 441, 75, 24));
        pushButton_10 = new QPushButton(centralwidget);
        pushButton_10->setObjectName(QString::fromUtf8("pushButton_10"));
        pushButton_10->setGeometry(QRect(359, 441, 75, 24));
        widget = new QWidget(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(690, 20, 391, 481));
        gridLayout_4 = new QGridLayout(widget);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        gridLayout_4->setContentsMargins(0, 0, 0, 0);
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        pushButton_4 = new QPushButton(widget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        QFont font;
        font.setFamily(QString::fromUtf8("Calibri"));
        font.setPointSize(14);
        pushButton_4->setFont(font);

        gridLayout_2->addWidget(pushButton_4, 1, 3, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_2, 5, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 5, 5, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_3, 1, 1, 1, 1);

        pushButton_3 = new QPushButton(widget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setFont(font);

        gridLayout_2->addWidget(pushButton_3, 3, 1, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer, 2, 3, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_4, 1, 5, 1, 1);

        pushButton_6 = new QPushButton(widget);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setFont(font);

        gridLayout_2->addWidget(pushButton_6, 5, 3, 1, 1);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_7, 3, 2, 1, 1);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_8, 3, 4, 1, 1);

        horizontalSpacer_5 = new QSpacerItem(20, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_5, 3, 0, 1, 1);

        verticalSpacer_4 = new QSpacerItem(20, 60, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout_2->addItem(verticalSpacer_4, 6, 3, 1, 1);

        pushButton_5 = new QPushButton(widget);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setFont(font);

        gridLayout_2->addWidget(pushButton_5, 3, 5, 1, 1);

        dial = new QDial(widget);
        dial->setObjectName(QString::fromUtf8("dial"));
        dial->setMaximum(360);
        dial->setSingleStep(10);
        dial->setValue(180);
        dial->setTracking(true);
        dial->setWrapping(true);
        dial->setNotchesVisible(true);

        gridLayout_2->addWidget(dial, 3, 3, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_2, 4, 3, 1, 1);

        horizontalSpacer_6 = new QSpacerItem(20, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_6, 3, 6, 1, 1);


        gridLayout_4->addLayout(gridLayout_2, 2, 0, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        pushButton_7 = new QPushButton(widget);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        pushButton_7->setFont(font);

        gridLayout->addWidget(pushButton_7, 0, 0, 1, 1);

        pushButton_8 = new QPushButton(widget);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));
        pushButton_8->setFont(font);

        gridLayout->addWidget(pushButton_8, 0, 1, 1, 1);


        gridLayout_4->addLayout(gridLayout, 0, 0, 1, 1);

        verticalSpacer_3 = new QSpacerItem(40, 120, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout_4->addItem(verticalSpacer_3, 1, 0, 1, 1);

        Quadcopter_MainWindow->setCentralWidget(centralwidget);
        graphicsView->raise();
        pushButton->raise();
        pushButton_2->raise();
        pushButton_3->raise();
        pushButton_4->raise();
        pushButton_5->raise();
        pushButton_6->raise();
        dial->raise();
        pushButton_7->raise();
        pushButton_8->raise();
        plainTextEdit->raise();
        label->raise();
        pushButton_9->raise();
        pushButton_10->raise();
        menubar = new QMenuBar(Quadcopter_MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1108, 22));
        Quadcopter_MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(Quadcopter_MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Quadcopter_MainWindow->setStatusBar(statusbar);

        retranslateUi(Quadcopter_MainWindow);

        QMetaObject::connectSlotsByName(Quadcopter_MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *Quadcopter_MainWindow)
    {
        Quadcopter_MainWindow->setWindowTitle(QCoreApplication::translate("Quadcopter_MainWindow", "Quadcopter_MainWindow", nullptr));
        pushButton->setText(QCoreApplication::translate("Quadcopter_MainWindow", "Previous Drone", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Quadcopter_MainWindow", "Next Drone", nullptr));
        label->setText(QCoreApplication::translate("Quadcopter_MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:24pt;\">00/00</span></p></body></html>", nullptr));
        pushButton_9->setText(QCoreApplication::translate("Quadcopter_MainWindow", "Record", nullptr));
        pushButton_10->setText(QCoreApplication::translate("Quadcopter_MainWindow", "Picture", nullptr));
        pushButton_4->setText(QCoreApplication::translate("Quadcopter_MainWindow", "Forward", nullptr));
        pushButton_3->setText(QCoreApplication::translate("Quadcopter_MainWindow", "Left", nullptr));
        pushButton_6->setText(QCoreApplication::translate("Quadcopter_MainWindow", "Backward", nullptr));
        pushButton_5->setText(QCoreApplication::translate("Quadcopter_MainWindow", "Right", nullptr));
        pushButton_7->setText(QCoreApplication::translate("Quadcopter_MainWindow", "Connect Server", nullptr));
        pushButton_8->setText(QCoreApplication::translate("Quadcopter_MainWindow", "Connect LoRaWAN", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Quadcopter_MainWindow: public Ui_Quadcopter_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QUADCOPTER_MAINWINDOW_H
