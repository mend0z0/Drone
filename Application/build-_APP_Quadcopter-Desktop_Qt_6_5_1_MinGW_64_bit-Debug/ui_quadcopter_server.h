/********************************************************************************
** Form generated from reading UI file 'quadcopter_server.ui'
**
** Created by: Qt User Interface Compiler version 6.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QUADCOPTER_SERVER_H
#define UI_QUADCOPTER_SERVER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_quadcopter_server
{
public:
    QPushButton *pushButton_Close;
    QWidget *layoutWidget;
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
    QPushButton *pushButton_UDPConnection;
    QPushButton *pushButton_mqttConnect_Disconnect;
    QLabel *label_LoRaWANSetting;
    QLabel *label_UDPSetting;
    QLabel *label_MQTTSetting;
    QWidget *layoutWidget_2;
    QGridLayout *gridLayout_9;
    QGridLayout *gridLayout_5;
    QLabel *label_UDPHostIP;
    QLineEdit *lineEdit_ValueUDPHostIP;
    QGridLayout *gridLayout_6;
    QLabel *label_UDPPort;
    QLineEdit *lineEdit_ValueUDPPort;
    QLabel *label_MQTTGif;
    QLabel *label_UDPGif;

    void setupUi(QDialog *quadcopter_server)
    {
        if (quadcopter_server->objectName().isEmpty())
            quadcopter_server->setObjectName("quadcopter_server");
        quadcopter_server->resize(640, 480);
        pushButton_Close = new QPushButton(quadcopter_server);
        pushButton_Close->setObjectName("pushButton_Close");
        pushButton_Close->setGeometry(QRect(530, 430, 93, 29));
        layoutWidget = new QWidget(quadcopter_server);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(25, 80, 261, 115));
        gridLayout_7 = new QGridLayout(layoutWidget);
        gridLayout_7->setObjectName("gridLayout_7");
        gridLayout_7->setContentsMargins(0, 0, 0, 0);
        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        gridLayout->setHorizontalSpacing(18);
        label_mqttHostName = new QLabel(layoutWidget);
        label_mqttHostName->setObjectName("label_mqttHostName");

        gridLayout->addWidget(label_mqttHostName, 0, 0, 1, 1);

        lineEdit_mqttHostName = new QLineEdit(layoutWidget);
        lineEdit_mqttHostName->setObjectName("lineEdit_mqttHostName");

        gridLayout->addWidget(lineEdit_mqttHostName, 0, 1, 1, 1);


        gridLayout_7->addLayout(gridLayout, 0, 0, 1, 1);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout_2->setHorizontalSpacing(50);
        gridLayout_2->setVerticalSpacing(16);
        label_mqttPort = new QLabel(layoutWidget);
        label_mqttPort->setObjectName("label_mqttPort");

        gridLayout_2->addWidget(label_mqttPort, 0, 0, 1, 1);

        lineEdit_mqttPort = new QLineEdit(layoutWidget);
        lineEdit_mqttPort->setObjectName("lineEdit_mqttPort");

        gridLayout_2->addWidget(lineEdit_mqttPort, 0, 1, 1, 1);

        gridLayout_2->setColumnMinimumWidth(0, 5);

        gridLayout_7->addLayout(gridLayout_2, 1, 0, 1, 1);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName("gridLayout_3");
        gridLayout_3->setHorizontalSpacing(20);
        gridLayout_3->setVerticalSpacing(7);
        label_mqttUsername = new QLabel(layoutWidget);
        label_mqttUsername->setObjectName("label_mqttUsername");

        gridLayout_3->addWidget(label_mqttUsername, 0, 0, 1, 1);

        lineEdit_mqttUsername = new QLineEdit(layoutWidget);
        lineEdit_mqttUsername->setObjectName("lineEdit_mqttUsername");

        gridLayout_3->addWidget(lineEdit_mqttUsername, 0, 1, 1, 1);


        gridLayout_7->addLayout(gridLayout_3, 2, 0, 1, 1);

        gridLayout_4 = new QGridLayout();
        gridLayout_4->setObjectName("gridLayout_4");
        gridLayout_4->setHorizontalSpacing(23);
        lineEdit_mqttPassword = new QLineEdit(layoutWidget);
        lineEdit_mqttPassword->setObjectName("lineEdit_mqttPassword");
        lineEdit_mqttPassword->setEchoMode(QLineEdit::Password);

        gridLayout_4->addWidget(lineEdit_mqttPassword, 0, 1, 1, 1);

        label_mqttPassword = new QLabel(layoutWidget);
        label_mqttPassword->setObjectName("label_mqttPassword");

        gridLayout_4->addWidget(label_mqttPassword, 0, 0, 1, 1);


        gridLayout_7->addLayout(gridLayout_4, 3, 0, 1, 1);

        pushButton_UDPConnection = new QPushButton(quadcopter_server);
        pushButton_UDPConnection->setObjectName("pushButton_UDPConnection");
        pushButton_UDPConnection->setGeometry(QRect(25, 381, 261, 24));
        pushButton_mqttConnect_Disconnect = new QPushButton(quadcopter_server);
        pushButton_mqttConnect_Disconnect->setObjectName("pushButton_mqttConnect_Disconnect");
        pushButton_mqttConnect_Disconnect->setGeometry(QRect(25, 202, 261, 25));
        label_LoRaWANSetting = new QLabel(quadcopter_server);
        label_LoRaWANSetting->setObjectName("label_LoRaWANSetting");
        label_LoRaWANSetting->setGeometry(QRect(335, 31, 261, 41));
        label_LoRaWANSetting->setStyleSheet(QString::fromUtf8("background-color: rgb(218, 218, 218);"));
        label_UDPSetting = new QLabel(quadcopter_server);
        label_UDPSetting->setObjectName("label_UDPSetting");
        label_UDPSetting->setGeometry(QRect(25, 261, 261, 41));
        label_UDPSetting->setStyleSheet(QString::fromUtf8("background-color: rgb(218, 218, 218);"));
        label_MQTTSetting = new QLabel(quadcopter_server);
        label_MQTTSetting->setObjectName("label_MQTTSetting");
        label_MQTTSetting->setGeometry(QRect(25, 31, 261, 41));
        label_MQTTSetting->setStyleSheet(QString::fromUtf8("background-color: rgb(218, 218, 218);"));
        layoutWidget_2 = new QWidget(quadcopter_server);
        layoutWidget_2->setObjectName("layoutWidget_2");
        layoutWidget_2->setGeometry(QRect(25, 311, 261, 61));
        gridLayout_9 = new QGridLayout(layoutWidget_2);
        gridLayout_9->setObjectName("gridLayout_9");
        gridLayout_9->setContentsMargins(0, 0, 0, 0);
        gridLayout_5 = new QGridLayout();
        gridLayout_5->setObjectName("gridLayout_5");
        gridLayout_5->setHorizontalSpacing(20);
        label_UDPHostIP = new QLabel(layoutWidget_2);
        label_UDPHostIP->setObjectName("label_UDPHostIP");

        gridLayout_5->addWidget(label_UDPHostIP, 0, 0, 1, 1);

        lineEdit_ValueUDPHostIP = new QLineEdit(layoutWidget_2);
        lineEdit_ValueUDPHostIP->setObjectName("lineEdit_ValueUDPHostIP");

        gridLayout_5->addWidget(lineEdit_ValueUDPHostIP, 0, 1, 1, 1);


        gridLayout_9->addLayout(gridLayout_5, 0, 0, 1, 1);

        gridLayout_6 = new QGridLayout();
        gridLayout_6->setObjectName("gridLayout_6");
        gridLayout_6->setHorizontalSpacing(33);
        label_UDPPort = new QLabel(layoutWidget_2);
        label_UDPPort->setObjectName("label_UDPPort");

        gridLayout_6->addWidget(label_UDPPort, 0, 0, 1, 1);

        lineEdit_ValueUDPPort = new QLineEdit(layoutWidget_2);
        lineEdit_ValueUDPPort->setObjectName("lineEdit_ValueUDPPort");

        gridLayout_6->addWidget(lineEdit_ValueUDPPort, 0, 1, 1, 1);


        gridLayout_9->addLayout(gridLayout_6, 1, 0, 1, 1);

        label_MQTTGif = new QLabel(quadcopter_server);
        label_MQTTGif->setObjectName("label_MQTTGif");
        label_MQTTGif->setGeometry(QRect(100, 80, 110, 110));
        label_MQTTGif->setScaledContents(true);
        label_UDPGif = new QLabel(quadcopter_server);
        label_UDPGif->setObjectName("label_UDPGif");
        label_UDPGif->setGeometry(QRect(114, 307, 81, 71));
        label_UDPGif->setScaledContents(true);

        retranslateUi(quadcopter_server);

        QMetaObject::connectSlotsByName(quadcopter_server);
    } // setupUi

    void retranslateUi(QDialog *quadcopter_server)
    {
        quadcopter_server->setWindowTitle(QCoreApplication::translate("quadcopter_server", "Dialog", nullptr));
        pushButton_Close->setText(QCoreApplication::translate("quadcopter_server", "Close", nullptr));
        label_mqttHostName->setText(QCoreApplication::translate("quadcopter_server", "Hostname: ", nullptr));
        label_mqttPort->setText(QCoreApplication::translate("quadcopter_server", "Port: ", nullptr));
        label_mqttUsername->setText(QCoreApplication::translate("quadcopter_server", "Username:", nullptr));
        label_mqttPassword->setText(QCoreApplication::translate("quadcopter_server", "Password:", nullptr));
        pushButton_UDPConnection->setText(QCoreApplication::translate("quadcopter_server", "Connect", nullptr));
        pushButton_mqttConnect_Disconnect->setText(QCoreApplication::translate("quadcopter_server", "Connect", nullptr));
        label_LoRaWANSetting->setText(QCoreApplication::translate("quadcopter_server", "<html><head/><body><p align=\"center\"><span style=\" font-size:14pt; font-weight:700;\">LoRaWAN Setting</span></p></body></html>", nullptr));
        label_UDPSetting->setText(QCoreApplication::translate("quadcopter_server", "<html><head/><body><p align=\"center\"><span style=\" font-size:14pt; font-weight:700;\">UDP Setting</span></p></body></html>", nullptr));
        label_MQTTSetting->setText(QCoreApplication::translate("quadcopter_server", "<html><head/><body><p align=\"center\"><span style=\" font-size:14pt; font-weight:700;\">MQTT Setting</span></p></body></html>", nullptr));
        label_UDPHostIP->setText(QCoreApplication::translate("quadcopter_server", "Host IP", nullptr));
        label_UDPPort->setText(QCoreApplication::translate("quadcopter_server", "Port:", nullptr));
        label_MQTTGif->setText(QString());
        label_UDPGif->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class quadcopter_server: public Ui_quadcopter_server {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QUADCOPTER_SERVER_H
