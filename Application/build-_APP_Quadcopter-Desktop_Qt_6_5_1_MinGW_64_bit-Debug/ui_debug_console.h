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
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_debug_console
{
public:
    QComboBox *comboBox_OptionsBaudRate;
    QComboBox *comboBox_OptionsNBits;
    QComboBox *comboBox_OptionsParity;
    QComboBox *comboBox_OptionsPortName;
    QLabel *label_PortName;
    QLabel *label_BaudRate;
    QLabel *label_NBits;
    QLabel *label_Parity;
    QPushButton *pushButton_Connection;
    QPushButton *pushButton_ClearInput;
    QPushButton *pushButton_Save;
    QPushButton *pushButton_SendCMD;
    QPlainTextEdit *plainTextEdit_SerialCommand;
    QLabel *label_DEBUGModeConsole;
    QLabel *label_StopBit;
    QComboBox *comboBox_OpetionsStopBit;
    QPushButton *pushButton_ClearCMD;
    QLabel *label_SerialPortManufacturer;
    QLabel *label_SerialPortProductID;
    QLabel *label_SerialPortVendorID;
    QLabel *label_SerialPortDescription;
    QLabel *label_ValueSerialPortDescription;
    QLabel *label_ValueSerialPortManufacturer;
    QLabel *label_ValueSerialPortProductID;
    QLabel *label_ValueSerialPortVendorID;
    QTextEdit *textEdit_SerialInput;
    QPushButton *pushButton_ConnectToMainWindow;

    void setupUi(QDialog *debug_console)
    {
        if (debug_console->objectName().isEmpty())
            debug_console->setObjectName("debug_console");
        debug_console->resize(640, 480);
        comboBox_OptionsBaudRate = new QComboBox(debug_console);
        comboBox_OptionsBaudRate->addItem(QString());
        comboBox_OptionsBaudRate->addItem(QString());
        comboBox_OptionsBaudRate->addItem(QString());
        comboBox_OptionsBaudRate->addItem(QString());
        comboBox_OptionsBaudRate->addItem(QString());
        comboBox_OptionsBaudRate->addItem(QString());
        comboBox_OptionsBaudRate->addItem(QString());
        comboBox_OptionsBaudRate->addItem(QString());
        comboBox_OptionsBaudRate->setObjectName("comboBox_OptionsBaudRate");
        comboBox_OptionsBaudRate->setGeometry(QRect(100, 180, 85, 25));
        comboBox_OptionsNBits = new QComboBox(debug_console);
        comboBox_OptionsNBits->addItem(QString());
        comboBox_OptionsNBits->addItem(QString());
        comboBox_OptionsNBits->addItem(QString());
        comboBox_OptionsNBits->addItem(QString());
        comboBox_OptionsNBits->setObjectName("comboBox_OptionsNBits");
        comboBox_OptionsNBits->setGeometry(QRect(100, 210, 85, 25));
        comboBox_OptionsParity = new QComboBox(debug_console);
        comboBox_OptionsParity->addItem(QString());
        comboBox_OptionsParity->addItem(QString());
        comboBox_OptionsParity->addItem(QString());
        comboBox_OptionsParity->setObjectName("comboBox_OptionsParity");
        comboBox_OptionsParity->setGeometry(QRect(100, 240, 85, 25));
        comboBox_OptionsPortName = new QComboBox(debug_console);
        comboBox_OptionsPortName->setObjectName("comboBox_OptionsPortName");
        comboBox_OptionsPortName->setGeometry(QRect(100, 60, 85, 25));
        label_PortName = new QLabel(debug_console);
        label_PortName->setObjectName("label_PortName");
        label_PortName->setGeometry(QRect(10, 60, 81, 20));
        label_BaudRate = new QLabel(debug_console);
        label_BaudRate->setObjectName("label_BaudRate");
        label_BaudRate->setGeometry(QRect(10, 180, 71, 20));
        label_NBits = new QLabel(debug_console);
        label_NBits->setObjectName("label_NBits");
        label_NBits->setGeometry(QRect(10, 210, 63, 20));
        label_Parity = new QLabel(debug_console);
        label_Parity->setObjectName("label_Parity");
        label_Parity->setGeometry(QRect(10, 240, 63, 21));
        pushButton_Connection = new QPushButton(debug_console);
        pushButton_Connection->setObjectName("pushButton_Connection");
        pushButton_Connection->setGeometry(QRect(10, 310, 171, 30));
        pushButton_ClearInput = new QPushButton(debug_console);
        pushButton_ClearInput->setObjectName("pushButton_ClearInput");
        pushButton_ClearInput->setGeometry(QRect(10, 350, 80, 30));
        pushButton_Save = new QPushButton(debug_console);
        pushButton_Save->setObjectName("pushButton_Save");
        pushButton_Save->setGeometry(QRect(100, 350, 80, 30));
        pushButton_SendCMD = new QPushButton(debug_console);
        pushButton_SendCMD->setObjectName("pushButton_SendCMD");
        pushButton_SendCMD->setGeometry(QRect(460, 440, 80, 30));
        plainTextEdit_SerialCommand = new QPlainTextEdit(debug_console);
        plainTextEdit_SerialCommand->setObjectName("plainTextEdit_SerialCommand");
        plainTextEdit_SerialCommand->setGeometry(QRect(10, 440, 441, 25));
        plainTextEdit_SerialCommand->setFrameShape(QFrame::Panel);
        plainTextEdit_SerialCommand->setFrameShadow(QFrame::Raised);
        plainTextEdit_SerialCommand->setLineWidth(0);
        label_DEBUGModeConsole = new QLabel(debug_console);
        label_DEBUGModeConsole->setObjectName("label_DEBUGModeConsole");
        label_DEBUGModeConsole->setGeometry(QRect(100, 10, 410, 40));
        label_StopBit = new QLabel(debug_console);
        label_StopBit->setObjectName("label_StopBit");
        label_StopBit->setGeometry(QRect(10, 270, 63, 20));
        comboBox_OpetionsStopBit = new QComboBox(debug_console);
        comboBox_OpetionsStopBit->addItem(QString());
        comboBox_OpetionsStopBit->addItem(QString());
        comboBox_OpetionsStopBit->addItem(QString());
        comboBox_OpetionsStopBit->setObjectName("comboBox_OpetionsStopBit");
        comboBox_OpetionsStopBit->setGeometry(QRect(100, 270, 85, 25));
        pushButton_ClearCMD = new QPushButton(debug_console);
        pushButton_ClearCMD->setObjectName("pushButton_ClearCMD");
        pushButton_ClearCMD->setGeometry(QRect(550, 440, 80, 30));
        label_SerialPortManufacturer = new QLabel(debug_console);
        label_SerialPortManufacturer->setObjectName("label_SerialPortManufacturer");
        label_SerialPortManufacturer->setGeometry(QRect(10, 110, 81, 20));
        label_SerialPortProductID = new QLabel(debug_console);
        label_SerialPortProductID->setObjectName("label_SerialPortProductID");
        label_SerialPortProductID->setGeometry(QRect(10, 130, 61, 20));
        label_SerialPortVendorID = new QLabel(debug_console);
        label_SerialPortVendorID->setObjectName("label_SerialPortVendorID");
        label_SerialPortVendorID->setGeometry(QRect(10, 150, 61, 20));
        label_SerialPortDescription = new QLabel(debug_console);
        label_SerialPortDescription->setObjectName("label_SerialPortDescription");
        label_SerialPortDescription->setGeometry(QRect(10, 90, 71, 20));
        label_ValueSerialPortDescription = new QLabel(debug_console);
        label_ValueSerialPortDescription->setObjectName("label_ValueSerialPortDescription");
        label_ValueSerialPortDescription->setGeometry(QRect(100, 90, 81, 20));
        label_ValueSerialPortManufacturer = new QLabel(debug_console);
        label_ValueSerialPortManufacturer->setObjectName("label_ValueSerialPortManufacturer");
        label_ValueSerialPortManufacturer->setGeometry(QRect(100, 110, 81, 20));
        label_ValueSerialPortProductID = new QLabel(debug_console);
        label_ValueSerialPortProductID->setObjectName("label_ValueSerialPortProductID");
        label_ValueSerialPortProductID->setGeometry(QRect(100, 130, 81, 20));
        label_ValueSerialPortVendorID = new QLabel(debug_console);
        label_ValueSerialPortVendorID->setObjectName("label_ValueSerialPortVendorID");
        label_ValueSerialPortVendorID->setGeometry(QRect(100, 150, 81, 20));
        textEdit_SerialInput = new QTextEdit(debug_console);
        textEdit_SerialInput->setObjectName("textEdit_SerialInput");
        textEdit_SerialInput->setGeometry(QRect(190, 60, 441, 361));
        pushButton_ConnectToMainWindow = new QPushButton(debug_console);
        pushButton_ConnectToMainWindow->setObjectName("pushButton_charReturn");
        pushButton_ConnectToMainWindow->setGeometry(QRect(10, 390, 170, 30));

        retranslateUi(debug_console);

        QMetaObject::connectSlotsByName(debug_console);
    } // setupUi

    void retranslateUi(QDialog *debug_console)
    {
        debug_console->setWindowTitle(QCoreApplication::translate("debug_console", "Dialog", nullptr));
        comboBox_OptionsBaudRate->setItemText(0, QCoreApplication::translate("debug_console", "1200", nullptr));
        comboBox_OptionsBaudRate->setItemText(1, QCoreApplication::translate("debug_console", "2400", nullptr));
        comboBox_OptionsBaudRate->setItemText(2, QCoreApplication::translate("debug_console", "4800", nullptr));
        comboBox_OptionsBaudRate->setItemText(3, QCoreApplication::translate("debug_console", "9600", nullptr));
        comboBox_OptionsBaudRate->setItemText(4, QCoreApplication::translate("debug_console", "19200", nullptr));
        comboBox_OptionsBaudRate->setItemText(5, QCoreApplication::translate("debug_console", "38400", nullptr));
        comboBox_OptionsBaudRate->setItemText(6, QCoreApplication::translate("debug_console", "57600", nullptr));
        comboBox_OptionsBaudRate->setItemText(7, QCoreApplication::translate("debug_console", "115200", nullptr));

        comboBox_OptionsNBits->setItemText(0, QCoreApplication::translate("debug_console", "5 bits", nullptr));
        comboBox_OptionsNBits->setItemText(1, QCoreApplication::translate("debug_console", "6 bits", nullptr));
        comboBox_OptionsNBits->setItemText(2, QCoreApplication::translate("debug_console", "7 bits", nullptr));
        comboBox_OptionsNBits->setItemText(3, QCoreApplication::translate("debug_console", "8 bits", nullptr));

        comboBox_OptionsParity->setItemText(0, QCoreApplication::translate("debug_console", "No Parity", nullptr));
        comboBox_OptionsParity->setItemText(1, QCoreApplication::translate("debug_console", "Even Parity", nullptr));
        comboBox_OptionsParity->setItemText(2, QCoreApplication::translate("debug_console", "Odd Parity", nullptr));

        label_PortName->setText(QCoreApplication::translate("debug_console", "Port Name:", nullptr));
        label_BaudRate->setText(QCoreApplication::translate("debug_console", "Baud rate:", nullptr));
        label_NBits->setText(QCoreApplication::translate("debug_console", "N-Bits", nullptr));
        label_Parity->setText(QCoreApplication::translate("debug_console", "Parity:", nullptr));
        pushButton_Connection->setText(QCoreApplication::translate("debug_console", "Connect To Serial Port", nullptr));
        pushButton_ClearInput->setText(QCoreApplication::translate("debug_console", "Clear", nullptr));
        pushButton_Save->setText(QCoreApplication::translate("debug_console", "Save", nullptr));
        pushButton_SendCMD->setText(QCoreApplication::translate("debug_console", "Send CMD", nullptr));
#if QT_CONFIG(whatsthis)
        plainTextEdit_SerialCommand->setWhatsThis(QCoreApplication::translate("debug_console", "<html><head/><body><p><span style=\" font-style:italic;\">Type your command</span></p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        label_DEBUGModeConsole->setText(QCoreApplication::translate("debug_console", "<html><head/><body><p align=\"center\"><span style=\" font-size:12pt; font-weight:700;\">DEBUG Mode Console</span></p></body></html>", nullptr));
        label_StopBit->setText(QCoreApplication::translate("debug_console", "Stop Bit:", nullptr));
        comboBox_OpetionsStopBit->setItemText(0, QCoreApplication::translate("debug_console", "1 bit", nullptr));
        comboBox_OpetionsStopBit->setItemText(1, QCoreApplication::translate("debug_console", "2 bits", nullptr));
        comboBox_OpetionsStopBit->setItemText(2, QCoreApplication::translate("debug_console", "1.5 bit", nullptr));

        pushButton_ClearCMD->setText(QCoreApplication::translate("debug_console", "CLR CMD", nullptr));
        label_SerialPortManufacturer->setText(QCoreApplication::translate("debug_console", "Manufacturer:", nullptr));
        label_SerialPortProductID->setText(QCoreApplication::translate("debug_console", "Product ID:", nullptr));
        label_SerialPortVendorID->setText(QCoreApplication::translate("debug_console", "Vendor ID:", nullptr));
        label_SerialPortDescription->setText(QCoreApplication::translate("debug_console", "Description:", nullptr));
        label_ValueSerialPortDescription->setText(QCoreApplication::translate("debug_console", "N/A", nullptr));
        label_ValueSerialPortManufacturer->setText(QCoreApplication::translate("debug_console", "N/A", nullptr));
        label_ValueSerialPortProductID->setText(QCoreApplication::translate("debug_console", "N/A", nullptr));
        label_ValueSerialPortVendorID->setText(QCoreApplication::translate("debug_console", "N/A", nullptr));
        pushButton_ConnectToMainWindow->setText(QCoreApplication::translate("debug_console", "Connected To Main Console", nullptr));
    } // retranslateUi

};

namespace Ui {
    class debug_console: public Ui_debug_console {};
} // namespace Ui

QT_END_NAMESPACE
