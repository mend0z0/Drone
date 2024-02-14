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
    QWidget *layoutWidget;
    QGridLayout *gridLayout_5;
    QGridLayout *gridLayout_3;
    QGridLayout *gridLayout;
    QLabel *label_mqttHostName;
    QLabel *label_mqttPort;
    QLabel *label_mqttUsername;
    QLabel *label_mqttPassword;
    QGridLayout *gridLayout_2;
    QLineEdit *lineEdit_mqttHostName;
    QLineEdit *lineEdit_mqttPort;
    QLineEdit *lineEdit_mqttUsername;
    QLineEdit *lineEdit_mqttPassword;
    QGridLayout *gridLayout_4;
    QPushButton *pushButton_mqttCancel;
    QPushButton *pushButton_mqttConnect;

    void setupUi(QDialog *MQTTClient)
    {
        if (MQTTClient->objectName().isEmpty())
            MQTTClient->setObjectName("MQTTClient");
        MQTTClient->resize(370, 193);
        layoutWidget = new QWidget(MQTTClient);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(10, 10, 351, 171));
        gridLayout_5 = new QGridLayout(layoutWidget);
        gridLayout_5->setObjectName("gridLayout_5");
        gridLayout_5->setContentsMargins(0, 0, 0, 0);
        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName("gridLayout_3");
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
        lineEdit_mqttHostName = new QLineEdit(layoutWidget);
        lineEdit_mqttHostName->setObjectName("lineEdit_mqttHostName");

        gridLayout_2->addWidget(lineEdit_mqttHostName, 0, 0, 1, 1);

        lineEdit_mqttPort = new QLineEdit(layoutWidget);
        lineEdit_mqttPort->setObjectName("lineEdit_mqttPort");

        gridLayout_2->addWidget(lineEdit_mqttPort, 1, 0, 1, 1);

        lineEdit_mqttUsername = new QLineEdit(layoutWidget);
        lineEdit_mqttUsername->setObjectName("lineEdit_mqttUsername");

        gridLayout_2->addWidget(lineEdit_mqttUsername, 2, 0, 1, 1);

        lineEdit_mqttPassword = new QLineEdit(layoutWidget);
        lineEdit_mqttPassword->setObjectName("lineEdit_mqttPassword");
        lineEdit_mqttPassword->setEchoMode(QLineEdit::Password);

        gridLayout_2->addWidget(lineEdit_mqttPassword, 3, 0, 1, 1);


        gridLayout_3->addLayout(gridLayout_2, 0, 1, 1, 1);


        gridLayout_5->addLayout(gridLayout_3, 0, 0, 1, 1);

        gridLayout_4 = new QGridLayout();
        gridLayout_4->setObjectName("gridLayout_4");
        pushButton_mqttCancel = new QPushButton(layoutWidget);
        pushButton_mqttCancel->setObjectName("pushButton_mqttCancel");

        gridLayout_4->addWidget(pushButton_mqttCancel, 0, 0, 1, 1);

        pushButton_mqttConnect = new QPushButton(layoutWidget);
        pushButton_mqttConnect->setObjectName("pushButton_mqttConnect");

        gridLayout_4->addWidget(pushButton_mqttConnect, 0, 1, 1, 1);


        gridLayout_5->addLayout(gridLayout_4, 1, 0, 1, 1);


        retranslateUi(MQTTClient);

        QMetaObject::connectSlotsByName(MQTTClient);
    } // setupUi

    void retranslateUi(QDialog *MQTTClient)
    {
        MQTTClient->setWindowTitle(QCoreApplication::translate("MQTTClient", "Dialog", nullptr));
        label_mqttHostName->setText(QCoreApplication::translate("MQTTClient", "Hostname: ", nullptr));
        label_mqttPort->setText(QCoreApplication::translate("MQTTClient", "Port: ", nullptr));
        label_mqttUsername->setText(QCoreApplication::translate("MQTTClient", "Username:", nullptr));
        label_mqttPassword->setText(QCoreApplication::translate("MQTTClient", "Password:", nullptr));
        pushButton_mqttCancel->setText(QCoreApplication::translate("MQTTClient", "Cancel", nullptr));
        pushButton_mqttConnect->setText(QCoreApplication::translate("MQTTClient", "Connect", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MQTTClient: public Ui_MQTTClient {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MQTTCLIENT_H
