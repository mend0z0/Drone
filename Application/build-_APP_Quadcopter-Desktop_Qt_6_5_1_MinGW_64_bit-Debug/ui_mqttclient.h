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
    QWidget *layoutWidget;
    QGridLayout *gridLayout_3;
    QGridLayout *gridLayout;
    QLabel *label_mqttHostName;
    QLabel *label_mqttPort;
    QLabel *label_mqttUsername;
    QLabel *label_mqttPassword;
    QGridLayout *gridLayout_2;
    QLineEdit *lineEdit_mqttUsername;
    QLineEdit *lineEdit_mqttPassword;
    QLineEdit *lineEdit_mqttHostName;
    QLineEdit *lineEdit_mqttPort;
    QWidget *layoutWidget1;
    QGridLayout *gridLayout_4;
    QPushButton *pushButton_mqttCancel;
    QPushButton *pushButton_mqttConnect_Disconnect;

    void setupUi(QDialog *MQTTClient)
    {
        if (MQTTClient->objectName().isEmpty())
            MQTTClient->setObjectName("MQTTClient");
        MQTTClient->resize(380, 199);
        MQTTClient->setAutoFillBackground(false);
        label_gif = new QLabel(MQTTClient);
        label_gif->setObjectName("label_gif");
        label_gif->setGeometry(QRect(127, 20, 110, 110));
        label_gif->setScaledContents(true);
        layoutWidget = new QWidget(MQTTClient);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(20, 20, 341, 111));
        gridLayout_3 = new QGridLayout(layoutWidget);
        gridLayout_3->setObjectName("gridLayout_3");
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        label_mqttHostName = new QLabel(layoutWidget);
        label_mqttHostName->setObjectName("label_mqttHostName");

        gridLayout->addWidget(label_mqttHostName, 0, 0, 1, 1);

        label_mqttPort = new QLabel(layoutWidget);
        label_mqttPort->setObjectName("label_mqttPort");

        gridLayout->addWidget(label_mqttPort, 1, 0, 1, 1);

        label_mqttUsername = new QLabel(layoutWidget);
        label_mqttUsername->setObjectName("label_mqttUsername");

        gridLayout->addWidget(label_mqttUsername, 2, 0, 1, 1);

        label_mqttPassword = new QLabel(layoutWidget);
        label_mqttPassword->setObjectName("label_mqttPassword");

        gridLayout->addWidget(label_mqttPassword, 3, 0, 1, 1);


        gridLayout_3->addLayout(gridLayout, 0, 0, 1, 1);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName("gridLayout_2");
        lineEdit_mqttUsername = new QLineEdit(layoutWidget);
        lineEdit_mqttUsername->setObjectName("lineEdit_mqttUsername");

        gridLayout_2->addWidget(lineEdit_mqttUsername, 2, 0, 1, 1);

        lineEdit_mqttPassword = new QLineEdit(layoutWidget);
        lineEdit_mqttPassword->setObjectName("lineEdit_mqttPassword");
        lineEdit_mqttPassword->setEchoMode(QLineEdit::Password);

        gridLayout_2->addWidget(lineEdit_mqttPassword, 3, 0, 1, 1);

        lineEdit_mqttHostName = new QLineEdit(layoutWidget);
        lineEdit_mqttHostName->setObjectName("lineEdit_mqttHostName");

        gridLayout_2->addWidget(lineEdit_mqttHostName, 0, 0, 1, 1);

        lineEdit_mqttPort = new QLineEdit(layoutWidget);
        lineEdit_mqttPort->setObjectName("lineEdit_mqttPort");

        gridLayout_2->addWidget(lineEdit_mqttPort, 1, 0, 1, 1);


        gridLayout_3->addLayout(gridLayout_2, 0, 1, 1, 1);

        layoutWidget1 = new QWidget(MQTTClient);
        layoutWidget1->setObjectName("layoutWidget1");
        layoutWidget1->setGeometry(QRect(20, 150, 341, 31));
        gridLayout_4 = new QGridLayout(layoutWidget1);
        gridLayout_4->setObjectName("gridLayout_4");
        gridLayout_4->setContentsMargins(0, 0, 0, 0);
        pushButton_mqttCancel = new QPushButton(layoutWidget1);
        pushButton_mqttCancel->setObjectName("pushButton_mqttCancel");

        gridLayout_4->addWidget(pushButton_mqttCancel, 0, 0, 1, 1);

        pushButton_mqttConnect_Disconnect = new QPushButton(layoutWidget1);
        pushButton_mqttConnect_Disconnect->setObjectName("pushButton_mqttConnect_Disconnect");

        gridLayout_4->addWidget(pushButton_mqttConnect_Disconnect, 0, 1, 1, 1);

        layoutWidget->raise();
        label_gif->raise();
        layoutWidget->raise();

        retranslateUi(MQTTClient);

        QMetaObject::connectSlotsByName(MQTTClient);
    } // setupUi

    void retranslateUi(QDialog *MQTTClient)
    {
        MQTTClient->setWindowTitle(QCoreApplication::translate("MQTTClient", "Dialog", nullptr));
        label_gif->setText(QString());
        label_mqttHostName->setText(QCoreApplication::translate("MQTTClient", "Hostname: ", nullptr));
        label_mqttPort->setText(QCoreApplication::translate("MQTTClient", "Port: ", nullptr));
        label_mqttUsername->setText(QCoreApplication::translate("MQTTClient", "Username:", nullptr));
        label_mqttPassword->setText(QCoreApplication::translate("MQTTClient", "Password:", nullptr));
        pushButton_mqttCancel->setText(QCoreApplication::translate("MQTTClient", "Close", nullptr));
        pushButton_mqttConnect_Disconnect->setText(QCoreApplication::translate("MQTTClient", "Connect", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MQTTClient: public Ui_MQTTClient {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MQTTCLIENT_H
