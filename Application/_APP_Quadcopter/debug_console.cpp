#include "debug_console.h"
#include "ui_debug_console.h"

debug_console::debug_console(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::debug_console)
{
    ui->setupUi(this);

    DebugModeParamInit();
    DebugModeConnectingFunctions();
}

debug_console::~debug_console()
{
    delete ui;
}

void debug_console::SerialPortDataRead()
{
    QString inputData = QDateTime::currentDateTime().toString("HH.mm.ss.zzz") + " -> " + debugSerialPort->readAll();

    ui->plainTextEdit_SerialInput->appendPlainText(inputData);
}

void debug_console::SetSerialPort(int index)
{

}

void debug_console::SetBaudRate(int index)
{

}

void debug_console::SetNBits(int index)
{

}

void debug_console::SetParity(int index)
{

}

void debug_console::SetStopBits(int index)
{

}

void debug_console::SerialPortConnection()
{

}

void debug_console::SerialRxClear()
{
    ui->plainTextEdit_SerialInput->clear();
    ui->plainTextEdit_SerialInput->appendPlainText("Debug input seriat data -->");
}

void debug_console::SerialRxPause()
{
    return;
}

void debug_console::SerialRxSave()
{
    QString defaultFileName = "../qcopter debug log - ";
    defaultFileName.append(QDateTime::currentDateTime().toString("dd.MM.yyyy - HH.mm.ss"));
    QString filename = QFileDialog::getSaveFileName( this, tr("Save File"), defaultFileName, tr("Text Files(*.txt)"));

    if(filename.isEmpty())
    {
        return;
    }

    QFile file(filename);
    if(!file.open(QIODevice::WriteOnly))
    {
        QMessageBox::information(this, tr("Unable to open file"), file.errorString());
        return;
    }

    QTextStream out(&file);

    out << ui->plainTextEdit_SerialInput->toPlainText();

    SerialRxClear();
}

void debug_console::SerialTxCMDSend()
{
    QByteArray cmd = ui->plainTextEdit_SerialCommand->toPlainText().toUtf8();
    qDebug() << cmd;
    debugSerialPort->write(cmd);
}

void debug_console::SerialTxCMDClear()
{
    ui->plainTextEdit_SerialCommand->clear();
}

void debug_console::DebugModeParamInit()
{
    ui->plainTextEdit_SerialInput->clear();
    ui->plainTextEdit_SerialInput->setReadOnly(true);

    ui->plainTextEdit_SerialCommand->clear();

    ui->label_SerialPort->setStyleSheet("background-color: rgb(0, 200, 25);"
                                        "border-radius: 10px;"
                                        "alignment: center-aligned;"
                                        "padding: 5px;");

    ui->label_BaudRate->setStyleSheet("background-color: rgb(0, 200, 25);"
                                      "border-radius: 10px;"
                                      "alignment: center-aligned;"
                                      "padding: 5px;");

    ui->label_NBits->setStyleSheet("background-color: rgb(0, 200, 25);"
                                   "border-radius: 10px;"
                                   "alignment: center-aligned;"
                                   "padding: 5px;");

    ui->label_Parity->setStyleSheet("background-color: rgb(0, 200, 25);"
                                    "border-radius: 10px;"
                                    "alignment: center-aligned;"
                                    "padding: 5px;");

    ui->label_StopBit->setStyleSheet("background-color: rgb(0, 200, 25);"
                                     "border-radius: 10px;"
                                     "alignment: center-aligned;"
                                     "padding: 5px;");
}

void debug_console::DebugModeConnectingFunctions()
{
    connect(ui->pushButton_Connection, SIGNAL(clicked(bool)), this, SLOT(SerialPortConnection(void)));
    connect(ui->pushButton_ClearInput, SIGNAL(clicked(bool)), this, SLOT(SerialRxClear(void)));
    connect(ui->pushButton_Pause, SIGNAL(clicked(bool)), this, SLOT(SerialRxPause(void)));
    connect(ui->pushButton_Save, SIGNAL(clicked(bool)), this, SLOT(SerialRxSave(void)));
    connect(ui->pushButton_SendCMD, SIGNAL(clicked(bool)), this, SLOT(SerialTxCMDSend(void)));
    connect(ui->pushButton_ClearCMD, SIGNAL(clicked(bool)), this, SLOT(SerialTxCMDClear(void)));

    connect(ui->comboBox_OptionsSerialPort, SIGNAL(activated(int)), this, SLOT(SetSerialPort(int)));
    connect(ui->comboBox_OptionsBaudRate, SIGNAL(activated(int)), this, SLOT(SetBaudRate(int)));
    connect(ui->comboBox_OptionsNBits, SIGNAL(activated(int)), this, SLOT(SetNBits(int)));
    connect(ui->comboBox_OptionsParity, SIGNAL(activated(int)), this, SLOT(SetParity(int)));
    connect(ui->comboBox_StopBit, SIGNAL(activated(int)), this, SLOT(SetStopBits(int)));

    connect(debugSerialPort, SIGNAL(readyRead()), this, SLOT(SerialPortDataRead()));
}
