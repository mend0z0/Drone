#pragma once
/********************************************************************************
** Form generated from reading UI file ''
**
** Created by: Qt User Interface Compiler version 6.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_debug_console
{
public:
    QPlainTextEdit *plainTextEdit_SerialInput;
    QComboBox *comboBox_OptionsBaudRate;
    QComboBox *comboBox_OptionsNBits;
    QComboBox *comboBox_OptionsParity;
    QComboBox *comboBox_OptionsSerialPort;
    QLabel *label_SerialPort;
    QLabel *label_BaudRate;
    QLabel *label_NBits;
    QLabel *label_Parity;
    QPushButton *pushButton_Connection;
    QPushButton *pushButton_Pause;
    QPushButton *pushButton_ClearInput;
    QPushButton *pushButton_Save;
    QPushButton *pushButton_SendCMD;
    QPlainTextEdit *plainTextEdit_SerialCommand;
    QLabel *label_DEBUGModeConsole;
    QLabel *label_StopBit;
    QComboBox *comboBox_StopBit;
    QPushButton *pushButton_ClearCMD;

    void setupUi(QDialog *debug_console)
    {
        if (debug_console->objectName().isEmpty())
            debug_console->setObjectName("debug_console");
        debug_console->resize(640, 480);
        plainTextEdit_SerialInput = new QPlainTextEdit(debug_console);
        plainTextEdit_SerialInput->setObjectName("plainTextEdit_SerialInput");
        plainTextEdit_SerialInput->setGeometry(QRect(10, 60, 440, 350));
        comboBox_OptionsBaudRate = new QComboBox(debug_console);
        comboBox_OptionsBaudRate->addItem(QString());
        comboBox_OptionsBaudRate->addItem(QString());
        comboBox_OptionsBaudRate->addItem(QString());
        comboBox_OptionsBaudRate->addItem(QString());
        comboBox_OptionsBaudRate->addItem(QString());
        comboBox_OptionsBaudRate->addItem(QString());
        comboBox_OptionsBaudRate->addItem(QString());
        comboBox_OptionsBaudRate->setObjectName("comboBox_OptionsBaudRate");
        comboBox_OptionsBaudRate->setGeometry(QRect(550, 110, 85, 25));
        comboBox_OptionsNBits = new QComboBox(debug_console);
        comboBox_OptionsNBits->addItem(QString());
        comboBox_OptionsNBits->addItem(QString());
        comboBox_OptionsNBits->addItem(QString());
        comboBox_OptionsNBits->setObjectName("comboBox_OptionsNBits");
        comboBox_OptionsNBits->setGeometry(QRect(550, 150, 85, 25));
        comboBox_OptionsParity = new QComboBox(debug_console);
        comboBox_OptionsParity->addItem(QString());
        comboBox_OptionsParity->addItem(QString());
        comboBox_OptionsParity->addItem(QString());
        comboBox_OptionsParity->setObjectName("comboBox_OptionsParity");
        comboBox_OptionsParity->setGeometry(QRect(550, 190, 85, 25));
        comboBox_OptionsSerialPort = new QComboBox(debug_console);
        comboBox_OptionsSerialPort->setObjectName("comboBox_OptionsSerialPort");
        comboBox_OptionsSerialPort->setGeometry(QRect(550, 70, 85, 25));
        label_SerialPort = new QLabel(debug_console);
        label_SerialPort->setObjectName("label_SerialPort");
        label_SerialPort->setGeometry(QRect(460, 70, 81, 20));
        label_BaudRate = new QLabel(debug_console);
        label_BaudRate->setObjectName("label_BaudRate");
        label_BaudRate->setGeometry(QRect(460, 110, 71, 20));
        label_NBits = new QLabel(debug_console);
        label_NBits->setObjectName("label_NBits");
        label_NBits->setGeometry(QRect(460, 150, 63, 20));
        label_Parity = new QLabel(debug_console);
        label_Parity->setObjectName("label_Parity");
        label_Parity->setGeometry(QRect(460, 190, 63, 20));
        pushButton_Connection = new QPushButton(debug_console);
        pushButton_Connection->setObjectName("pushButton_Connection");
        pushButton_Connection->setGeometry(QRect(460, 290, 170, 30));
        pushButton_Pause = new QPushButton(debug_console);
        pushButton_Pause->setObjectName("pushButton_Pause");
        pushButton_Pause->setGeometry(QRect(460, 330, 80, 30));
        pushButton_ClearInput = new QPushButton(debug_console);
        pushButton_ClearInput->setObjectName("pushButton_Clear");
        pushButton_ClearInput->setGeometry(QRect(550, 330, 80, 30));
        pushButton_Save = new QPushButton(debug_console);
        pushButton_Save->setObjectName("pushButton_Save");
        pushButton_Save->setGeometry(QRect(460, 370, 170, 30));
        pushButton_SendCMD = new QPushButton(debug_console);
        pushButton_SendCMD->setObjectName("pushButton_SendCMD");
        pushButton_SendCMD->setGeometry(QRect(460, 430, 80, 30));
        plainTextEdit_SerialCommand = new QPlainTextEdit(debug_console);
        plainTextEdit_SerialCommand->setObjectName("plainTextEdit_SerialCommand");
        plainTextEdit_SerialCommand->setGeometry(QRect(10, 430, 440, 30));
        label_DEBUGModeConsole = new QLabel(debug_console);
        label_DEBUGModeConsole->setObjectName("label_DEBUGModeConsole");
        label_DEBUGModeConsole->setGeometry(QRect(210, 10, 220, 40));
        label_StopBit = new QLabel(debug_console);
        label_StopBit->setObjectName("label_StopBit");
        label_StopBit->setGeometry(QRect(460, 230, 63, 20));
        comboBox_StopBit = new QComboBox(debug_console);
        comboBox_StopBit->addItem(QString());
        comboBox_StopBit->addItem(QString());
        comboBox_StopBit->addItem(QString());
        comboBox_StopBit->setObjectName("comboBox_StopBit");
        comboBox_StopBit->setGeometry(QRect(550, 230, 85, 25));
        pushButton_ClearCMD = new QPushButton(debug_console);
        pushButton_ClearCMD->setObjectName("pushButton_ClearCMD");
        pushButton_ClearCMD->setGeometry(QRect(550, 430, 80, 30));

        retranslateUi(debug_console);

        QMetaObject::connectSlotsByName(debug_console);
    } // setupUi

    void retranslateUi(QDialog *debug_console)
    {
        debug_console->setWindowTitle(QCoreApplication::translate("debug_console", "Dialog", nullptr));
        comboBox_OptionsBaudRate->setItemText(0, QCoreApplication::translate("debug_console", "2400", nullptr));
        comboBox_OptionsBaudRate->setItemText(1, QCoreApplication::translate("debug_console", "4800", nullptr));
        comboBox_OptionsBaudRate->setItemText(2, QCoreApplication::translate("debug_console", "9600", nullptr));
        comboBox_OptionsBaudRate->setItemText(3, QCoreApplication::translate("debug_console", "19200", nullptr));
        comboBox_OptionsBaudRate->setItemText(4, QCoreApplication::translate("debug_console", "38400", nullptr));
        comboBox_OptionsBaudRate->setItemText(5, QCoreApplication::translate("debug_console", "115200", nullptr));
        comboBox_OptionsBaudRate->setItemText(6, QCoreApplication::translate("debug_console", "230400", nullptr));

        comboBox_OptionsNBits->setItemText(0, QCoreApplication::translate("debug_console", "7 bits", nullptr));
        comboBox_OptionsNBits->setItemText(1, QCoreApplication::translate("debug_console", "8 bits", nullptr));
        comboBox_OptionsNBits->setItemText(2, QCoreApplication::translate("debug_console", "9 bits", nullptr));

        comboBox_OptionsParity->setItemText(0, QCoreApplication::translate("debug_console", "No Parity", nullptr));
        comboBox_OptionsParity->setItemText(1, QCoreApplication::translate("debug_console", "Even Parity", nullptr));
        comboBox_OptionsParity->setItemText(2, QCoreApplication::translate("debug_console", "Odd Parity", nullptr));

        label_SerialPort->setText(QCoreApplication::translate("debug_console", "Serial port:", nullptr));
        label_BaudRate->setText(QCoreApplication::translate("debug_console", "Baud rate:", nullptr));
        label_NBits->setText(QCoreApplication::translate("debug_console", "N-Bits", nullptr));
        label_Parity->setText(QCoreApplication::translate("debug_console", "Parity:", nullptr));
        pushButton_Connection->setText(QCoreApplication::translate("debug_console", "Connect", nullptr));
        pushButton_Pause->setText(QCoreApplication::translate("debug_console", "Pause", nullptr));
        pushButton_ClearInput->setText(QCoreApplication::translate("debug_console", "Clear", nullptr));
        pushButton_Save->setText(QCoreApplication::translate("debug_console", "Save", nullptr));
        pushButton_SendCMD->setText(QCoreApplication::translate("debug_console", "Send CMD", nullptr));
        label_DEBUGModeConsole->setText(QCoreApplication::translate("debug_console", "<html><head/><body><p align=\"center\"><span style=\" font-size:12pt; font-weight:700;\">DEBUG Mode Console</span></p></body></html>", nullptr));
        label_StopBit->setText(QCoreApplication::translate("debug_console", "Stop Bit:", nullptr));
        comboBox_StopBit->setItemText(0, QCoreApplication::translate("debug_console", "1 bit", nullptr));
        comboBox_StopBit->setItemText(1, QCoreApplication::translate("debug_console", "1.5 bit", nullptr));
        comboBox_StopBit->setItemText(2, QCoreApplication::translate("debug_console", "2 bits", nullptr));

        pushButton_ClearCMD->setText(QCoreApplication::translate("debug_console", "CLR CMD", nullptr));
    } // retranslateUi

};

namespace Ui {
    class debug_console: public Ui_debug_console {};
} // namespace Ui

QT_END_NAMESPACE

