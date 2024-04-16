#include "debug_console.h"
#include "ui_debug_console.h"

debug_console::debug_console(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::debug_console)
{
    ui->setupUi(this);

    serialSpecUpdate->start(500);   // it'll check the available ports every 500 ms
    connect( serialSpecUpdate, SIGNAL(timeout()), this, SLOT(CheckAvailabePorts()));

    DebugModeConnectingFunctions();
}

debug_console::~debug_console()
{
    delete ui;
}

void debug_console::ShowSerialPortErrors(QSerialPort::SerialPortError)
{
    disconnect(debugSerialPort, SIGNAL(readyRead()), this, SLOT(SerialPortDataRead()));
    debugModeMessageBox->critical( this, "ERROR", debugSerialPort->errorString());
    ui->pushButton_Connection->setText("Connect");
    emit DebugPortConnectStatus(false);
    debugSerialPort->close();

}

void debug_console::SerialPortDataRead()
{
    QTextCharFormat inputDataFormat;
    QString inputData = QDateTime::currentDateTime().toString("HH.mm.ss.zzz") + " -> " + debugSerialPort->readAll();
    inputDataFormat.setFontItalic(false);
    ui->textBrowser_SerialInput->setCurrentCharFormat(inputDataFormat);
    ui->textBrowser_SerialInput->append(inputData);
}

void debug_console::CheckAvailabePorts()
{
    ui->comboBox_OptionsPortName->clear();
    ui->comboBox_OptionsPortName->addItem("...");
    for(const QSerialPortInfo &portInfo : debugSerialPortInfo.availablePorts())
    {
        ui->comboBox_OptionsPortName->addItem(portInfo.portName());
    }
    if(ui->comboBox_OptionsPortName->itemText(serial_spec.portIndexNumber) == serial_spec.portName){
        ui->comboBox_OptionsPortName->setCurrentIndex(serial_spec.portIndexNumber);
    }
    else{
        ui->comboBox_OptionsPortName->setCurrentIndex(0);
        SerialPortReset();
    }

}

void debug_console::SetPortName( int index )
{
    if(index <= 0)
    {
        SerialPortReset();
    }
    else
    {
        index -= 1; //because we added 1 item before updating the list in comboBox
        qDebug() << "Selected Port Name" << debugSerialPortInfo.availablePorts().at(index).portName();
        serial_spec.portName = debugSerialPortInfo.availablePorts().at(index).portName();
        serial_spec.portIndexNumber = index + 1;
        ui->label_ValueSerialPortDescription->setText(debugSerialPortInfo.availablePorts().at(index).description());
        ui->label_ValueSerialPortDescription->setToolTip(debugSerialPortInfo.availablePorts().at(index).description());
        ui->label_ValueSerialPortManufacturer->setText(debugSerialPortInfo.availablePorts().at(index).manufacturer());
        ui->label_ValueSerialPortProductID->setText(QString::number(debugSerialPortInfo.availablePorts().at(index).productIdentifier()));
        ui->label_ValueSerialPortVendorID->setText(QString::number(debugSerialPortInfo.availablePorts().at(index).vendorIdentifier()));
    }

}

void debug_console::SetBaudRate(int index)
{
    qDebug() << "Selected Baudrate" << ui->comboBox_OptionsBaudRate->itemText(index).toInt();
    serial_spec.baudrate = QSerialPort::BaudRate(ui->comboBox_OptionsBaudRate->itemText(index).toInt());
}

void debug_console::SetNBits(int index)
{
    qDebug() << "Selected DataBits" << (index + 5);
    serial_spec.dataBits = QSerialPort::DataBits(index + 5);
}

void debug_console::SetParity(int index)
{
    qDebug() << "Selected Parity" << ui->comboBox_OptionsParity->itemText(index);
    serial_spec.parity = QSerialPort::Parity(index);
}

void debug_console::SetStopBits(int index)
{
    qDebug() << "Selected StopBits" << ui->comboBox_OpetionsStopBit->itemText(index);
    serial_spec.stopBits = QSerialPort::StopBits(index);
}

void debug_console::SerialPortConnection()
{
    /*
     * 1 - if it was opened (means we can read and write to port)
     *  {
     *      close the connection
     *      set button text as Connect
     *      send a status signal as disconnected
     *  }
     *
     * 2 - if it was not open
     * {
     *      Set the parameters
     *      Trying to open the port
     *          set the button text as disconnect
     *          Send a status signal as connected
     *      If it was opened before
     *          Show an error message
     * }
     */
    if(debugSerialPort->isOpen())
    {
        disconnect(debugSerialPort, SIGNAL(readyRead()), this, SLOT(SerialPortDataRead()));
        debugSerialPort->close();
        ui->pushButton_Connection->setText("Connect");
        emit DebugPortConnectStatus(false);
    }
    else
    {
        debugSerialPort->setPortName(serial_spec.portName);
        debugSerialPort->setBaudRate(serial_spec.baudrate, QSerialPort::AllDirections);
        debugSerialPort->setDataBits(serial_spec.dataBits);
        debugSerialPort->setStopBits(serial_spec.stopBits);
        debugSerialPort->setParity(serial_spec.parity);
        if( debugSerialPort->open(QIODevice::ReadWrite))
        {
            ui->pushButton_Connection->setText("Disconnect");
            connect(debugSerialPort, SIGNAL(readyRead()), this, SLOT(SerialPortDataRead()));
            emit DebugPortConnectStatus(true);
        }
        else
        {
            debugModeMessageBox->critical( this, "Error", debugSerialPort->errorString());
        }
    }
}

void debug_console::SerialRxClear()
{
    ui->textBrowser_SerialInput->clear();
    ui->textBrowser_SerialInput->append("Debug input seriat data -->");
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

    out << ui->textBrowser_SerialInput->toPlainText();

    SerialRxClear();
}

void debug_console::SerialTxCMDSend()
{
    QTextCharFormat cmdFormat;

    QByteArray cmd = ui->plainTextEdit_SerialCommand->toPlainText().toUtf8();
    qDebug() << cmd;
    debugSerialPort->write(cmd);
    cmdFormat.setFontItalic(true);
    ui->textBrowser_SerialInput->setTextColor(Qt::green);
    ui->textBrowser_SerialInput->setCurrentCharFormat(cmdFormat);
    ui->textBrowser_SerialInput->append(QDateTime::currentDateTime().toString("HH:mm:ss.zzz")+ " -> Sent: " + cmd);
}

void debug_console::SerialTxCMDClear()
{
    ui->plainTextEdit_SerialCommand->clear();
}

void debug_console::DebugModeParamInit()
{
    ui->label_DEBUGModeConsole->setText(debugModeHeader);
    ui->label_DEBUGModeConsole->setAlignment(Qt::AlignCenter);
    ui->label_DEBUGModeConsole->setStyleSheet("font: 20px;"
                                              "font: bold;"
                                              "border-radius: 5px;"
                                              "padding: 5px;"
                                              "alignment: center;"
                                              "background-color: rgb(222, 223, 225);");


    serial_spec.labelSize.setWidth(80);
    serial_spec.labelSize.setHeight(25);

    ui->textBrowser_SerialInput->clear();
    ui->textBrowser_SerialInput->setReadOnly(true);

    ui->plainTextEdit_SerialCommand->clear();

    ui->label_PortName->resize(serial_spec.labelSize);
    ui->label_PortName->setStyleSheet("background-color: rgb(212, 213, 215);"
                                        "border-radius: 5px;"
                                        "alignment: left-aligned;"
                                        "padding: 5px;");

    ui->label_BaudRate->resize(serial_spec.labelSize);
    ui->label_BaudRate->setStyleSheet("background-color: rgb(212, 213, 215);"
                                      "border-radius: 5px;"
                                      "alignment: left-aligned;"
                                      "padding: 5px;");

    ui->label_NBits->resize(serial_spec.labelSize);
    ui->label_NBits->setStyleSheet("background-color: rgb(212, 213, 215);"
                                   "border-radius: 5px;"
                                   "alignment: left-aligned;"
                                   "padding: 5px;");

    ui->label_Parity->resize(serial_spec.labelSize);
    ui->label_Parity->setStyleSheet("background-color: rgb(212, 213, 215);"
                                    "border-radius: 5px;"
                                    "alignment: left-aligned;"
                                    "padding: 5px;");

    ui->label_StopBit->resize(serial_spec.labelSize);
    ui->label_StopBit->setStyleSheet("background-color: rgb(212, 213, 215);"
                                     "border-radius: 5px;"
                                     "alignment: left-aligned;"
                                     "padding: 5px;");

    ui->comboBox_OptionsPortName->setSizeAdjustPolicy(QComboBox::AdjustToContentsOnFirstShow);
    serial_spec.portIndexNumber = 0;
}

void debug_console::DebugModeConnectingFunctions()
{
    connect(ui->pushButton_Connection, SIGNAL(clicked(bool)), this, SLOT(SerialPortConnection()));
    connect(ui->pushButton_ClearInput, SIGNAL(clicked(bool)), this, SLOT(SerialRxClear()));
    //connect(ui->pushButton_Pause, SIGNAL(clicked(bool)), this, SLOT(SerialRxPause()));
    connect(ui->pushButton_Save, SIGNAL(clicked(bool)), this, SLOT(SerialRxSave()));
    connect(ui->pushButton_SendCMD, SIGNAL(clicked(bool)), this, SLOT(SerialTxCMDSend()));
    connect(ui->pushButton_ClearCMD, SIGNAL(clicked(bool)), this, SLOT(SerialTxCMDClear()));

    connect(ui->comboBox_OptionsPortName, SIGNAL(activated(int)), this, SLOT(SetPortName(int)));
    connect(ui->comboBox_OptionsBaudRate, SIGNAL(activated(int)), this, SLOT(SetBaudRate(int)));
    connect(ui->comboBox_OptionsNBits, SIGNAL(activated(int)), this, SLOT(SetNBits(int)));
    connect(ui->comboBox_OptionsParity, SIGNAL(activated(int)), this, SLOT(SetParity(int)));
    connect(ui->comboBox_OpetionsStopBit, SIGNAL(activated(int)), this, SLOT(SetStopBits(int)));

    connect(debugSerialPort, SIGNAL(errorOccurred(QSerialPort::SerialPortError)), this, SLOT(ShowSerialPortErrors( QSerialPort::SerialPortError )));

}

void debug_console::SerialPortReset()
{
    static bool resetFlag = true;

    if(serial_spec.portIndexNumber != 0)
    {
        resetFlag = true;
    }

    if(resetFlag == true)
    {
        qDebug() << "Selected Port Name" << "";
        serial_spec.portName = "";
        serial_spec.portIndexNumber = 0;
        ui->label_ValueSerialPortDescription->setText("N/A");
        ui->label_ValueSerialPortManufacturer->setText("N/A" );
        ui->label_ValueSerialPortProductID->setText("N/A");
        ui->label_ValueSerialPortVendorID->setText("N/A");
        debugSerialPort->disconnect();
        resetFlag = false;
    }
}
