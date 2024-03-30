/********************************************************************************
** Form generated from reading UI file 'mqttclient.ui'
**
** Created by: Qt User Interface Compiler version 6.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MQTTCLIENT_H
#define UI_MQTTCLIENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MQTTClient
{
public:
    QLabel *label_gif;
    QPushButton *pushButton_mqttCancel;
    QPushButton *pushButton_UDPConnection;
    QLabel *label_UDPSetting;
    QLabel *label_LoRaWANSetting;
    QLabel *label_MQTTSetting;
    QPushButton *pushButton_mqttConnect_Disconnect;
    QWidget *widget;
    QGridLayout *gridLayout_7;
    QGridLayout *gridLayout;
    QLabel *label_mqttHostName;
    QLineEdit *lineEdit_mqttHostName;
    QGridLayout *gridLayout_2;
    QLabel *label_mqttPort;
    QLineEdit *lineEdit_mqttPort;
    QGridLayout *gridLayout_3;
    QLabel *label_mqttUsername;
    QLineEdit *lineEdit_mqttUsername;
    QGridLayout *gridLayout_4;
    QLineEdit *lineEdit_mqttPassword;
    QLabel *label_mqttPassword;
    QWidget *widget1;
    QGridLayout *gridLayout_9;
    QGridLayout *gridLayout_5;
    QLabel *label_UDPHostIP;
    QLineEdit *lineEdit_ValueUDPHostIP;
    QGridLayout *gridLayout_6;
    QLabel *label_UDPPort;
    QLineEdit *lineEdit_ValueUDPPort;

    void setupUi(QDialog *MQTTClient)
    {
        if (MQTTClient->objectName().isEmpty())
            MQTTClient->setObjectName("MQTTClient");
        MQTTClient->resize(640, 480);
        MQTTClient->setAutoFillBackground(false);
        label_gif = new QLabel(MQTTClient);
        label_gif->setObjectName("label_gif");
        label_gif->setGeometry(QRect(105, 79, 110, 110));
        label_gif->setScaledContents(true);
        pushButton_mqttCancel = new QPushButton(MQTTClient);
        pushButton_mqttCancel->setObjectName("pushButton_mqttCancel");
        pushButton_mqttCancel->setGeometry(QRect(530, 440, 71, 24));
        pushButton_UDPConnection = new QPushButton(MQTTClient);
        pushButton_UDPConnection->setObjectName("pushButton_UDPConnection");
        pushButton_UDPConnection->setGeometry(QRect(30, 380, 261, 24));
        label_UDPSetting = new QLabel(MQTTClient);
        label_UDPSetting->setObjectName("label_UDPSetting");
        label_UDPSetting->setGeometry(QRect(30, 260, 261, 41));
        label_UDPSetting->setStyleSheet(QString::fromUtf8("background-color: rgb(218, 218, 218);"));
        label_LoRaWANSetting = new QLabel(MQTTClient);
        label_LoRaWANSetting->setObjectName("label_LoRaWANSetting");
        label_LoRaWANSetting->setGeometry(QRect(340, 30, 261, 41));
        label_LoRaWANSetting->setStyleSheet(QString::fromUtf8("background-color: rgb(218, 218, 218);"));
        label_MQTTSetting = new QLabel(MQTTClient);
        label_MQTTSetting->setObjectName("label_MQTTSetting");
        label_MQTTSetting->setGeometry(QRect(30, 30, 261, 41));
        label_MQTTSetting->setStyleSheet(QString::fromUtf8("background-color: rgb(218, 218, 218);"));
        pushButton_mqttConnect_Disconnect = new QPushButton(MQTTClient);
        pushButton_mqttConnect_Disconnect->setObjectName("pushButton_mqttConnect_Disconnect");
        pushButton_mqttConnect_Disconnect->setGeometry(QRect(30, 201, 261, 25));
        widget = new QWidget(MQTTClient);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(30, 79, 261, 115));
        gridLayout_7 = new QGridLayout(widget);
        gridLayout_7->setObjectName("gridLayout_7");
        gridLayout_7->setContentsMargins(0, 0, 0, 0);
        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        gridLayout->setHorizontalSpacing(18);
        label_mqttHostName = new QLabel(widget);
        label_mqttHostName->setObjectName("label_mqttHostName");

        gridLayout->addWidget(label_mqttHostName, 0, 0, 1, 1);

        lineEdit_mqttHostName = new QLineEdit(widget);
        lineEdit_mqttHostName->setObjectName("lineEdit_mqttHostName");

        gridLayout->addWidget(lineEdit_mqttHostName, 0, 1, 1, 1);


        gridLayout_7->addLayout(gridLayout, 0, 0, 1, 1);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout_2->setHorizontalSpacing(50);
        gridLayout_2->setVerticalSpacing(16);
        label_mqttPort = new QLabel(widget);
        label_mqttPort->setObjectName("label_mqttPort");

        gridLayout_2->addWidget(label_mqttPort, 0, 0, 1, 1);

        lineEdit_mqttPort = new QLineEdit(widget);
        lineEdit_mqttPort->setObjectName("lineEdit_mqttPort");

        gridLayout_2->addWidget(lineEdit_mqttPort, 0, 1, 1, 1);

        gridLayout_2->setColumnMinimumWidth(0, 5);

        gridLayout_7->addLayout(gridLayout_2, 1, 0, 1, 1);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName("gridLayout_3");
        gridLayout_3->setHorizontalSpacing(20);
        gridLayout_3->setVerticalSpacing(7);
        label_mqttUsername = new QLabel(widget);
        label_mqttUsername->setObjectName("label_mqttUsername");

        gridLayout_3->addWidget(label_mqttUsername, 0, 0, 1, 1);

        lineEdit_mqttUsername = new QLineEdit(widget);
        lineEdit_mqttUsername->setObjectName("lineEdit_mqttUsername");

        gridLayout_3->addWidget(lineEdit_mqttUsername, 0, 1, 1, 1);


        gridLayout_7->addLayout(gridLayout_3, 2, 0, 1, 1);

        gridLayout_4 = new QGridLayout();
        gridLayout_4->setObjectName("gridLayout_4");
        gridLayout_4->setHorizontalSpacing(23);
        lineEdit_mqttPassword = new QLineEdit(widget);
        lineEdit_mqttPassword->setObjectName("lineEdit_mqttPassword");
        lineEdit_mqttPassword->setEchoMode(QLineEdit::Password);

        gridLayout_4->addWidget(lineEdit_mqttPassword, 0, 1, 1, 1);

        label_mqttPassword = new QLabel(widget);
        label_mqttPassword->setObjectName("label_mqttPassword");

        gridLayout_4->addWidget(label_mqttPassword, 0, 0, 1, 1);


        gridLayout_7->addLayout(gridLayout_4, 3, 0, 1, 1);

        widget1 = new QWidget(MQTTClient);
        widget1->setObjectName("widget1");
        widget1->setGeometry(QRect(30, 310, 261, 61));
        gridLayout_9 = new QGridLayout(widget1);
        gridLayout_9->setObjectName("gridLayout_9");
        gridLayout_9->setContentsMargins(0, 0, 0, 0);
        gridLayout_5 = new QGridLayout();
        gridLayout_5->setObjectName("gridLayout_5");
        gridLayout_5->setHorizontalSpacing(20);
        label_UDPHostIP = new QLabel(widget1);
        label_UDPHostIP->setObjectName("label_UDPHostIP");

        gridLayout_5->addWidget(label_UDPHostIP, 0, 0, 1, 1);

        lineEdit_ValueUDPHostIP = new QLineEdit(widget1);
        lineEdit_ValueUDPHostIP->setObjectName("lineEdit_ValueUDPHostIP");

        gridLayout_5->addWidget(lineEdit_ValueUDPHostIP, 0, 1, 1, 1);


        gridLayout_9->addLayout(gridLayout_5, 0, 0, 1, 1);

        gridLayout_6 = new QGridLayout();
        gridLayout_6->setObjectName("gridLayout_6");
        gridLayout_6->setHorizontalSpacing(33);
        label_UDPPort = new QLabel(widget1);
        label_UDPPort->setObjectName("label_UDPPort");

        gridLayout_6->addWidget(label_UDPPort, 0, 0, 1, 1);

        lineEdit_ValueUDPPort = new QLineEdit(widget1);
        lineEdit_ValueUDPPort->setObjectName("lineEdit_ValueUDPPort");

        gridLayout_6->addWidget(lineEdit_ValueUDPPort, 0, 1, 1, 1);


        gridLayout_9->addLayout(gridLayout_6, 1, 0, 1, 1);

        lineEdit_ValueUDPHostIP->raise();
        label_UDPHostIP->raise();
        label_UDPPort->raise();
        lineEdit_ValueUDPPort->raise();
        pushButton_mqttCancel->raise();
        pushButton_UDPConnection->raise();
        label_UDPSetting->raise();
        label_LoRaWANSetting->raise();
        label_MQTTSetting->raise();
        label_gif->raise();

        retranslateUi(MQTTClient);

        QMetaObject::connectSlotsByName(MQTTClient);
    } // setupUi

    void retranslateUi(QDialog *MQTTClient)
    {
        MQTTClient->setWindowTitle(QCoreApplication::translate("MQTTClient", "Dialog", nullptr));
        label_gif->setText(QString());
        pushButton_mqttCancel->setText(QCoreApplication::translate("MQTTClient", "Close", nullptr));
        pushButton_UDPConnection->setText(QCoreApplication::translate("MQTTClient", "Connect", nullptr));
        label_UDPSetting->setText(QCoreApplication::translate("MQTTClient", "<html><head/><body><p align=\"center\"><span style=\" font-size:14pt; font-weight:700;\">UDP Setting</span></p></body></html>", nullptr));
        label_LoRaWANSetting->setText(QCoreApplication::translate("MQTTClient", "<html><head/><body><p align=\"center\"><span style=\" font-size:14pt; font-weight:700;\">LoRaWAN Setting</span></p></body></html>", nullptr));
        label_MQTTSetting->setText(QCoreApplication::translate("MQTTClient", "<html><head/><body><p align=\"center\"><span style=\" font-size:14pt; font-weight:700;\">MQTT Setting</span></p></body></html>", nullptr));
        pushButton_mqttConnect_Disconnect->setText(QCoreApplication::translate("MQTTClient", "Connect", nullptr));
        label_mqttHostName->setText(QCoreApplication::translate("MQTTClient", "Hostname: ", nullptr));
        label_mqttPort->setText(QCoreApplication::translate("MQTTClient", "Port: ", nullptr));
        label_mqttUsername->setText(QCoreApplication::translate("MQTTClient", "Username:", nullptr));
        label_mqttPassword->setText(QCoreApplication::translate("MQTTClient", "Password:", nullptr));
        label_UDPHostIP->setText(QCoreApplication::translate("MQTTClient", "Host IP", nullptr));
        label_UDPPort->setText(QCoreApplication::translate("MQTTClient", "Port:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MQTTClient: public Ui_MQTTClient {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MQTTCLIENT_H
