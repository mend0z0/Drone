#ifndef DEBUG_CONSOLE_H
#define DEBUG_CONSOLE_H

#include <QDialog>
#include <QDebug>
#include <QByteArray>
#include <QString>
#include <QIODevice>
#include <QSerialPort>
#include <QSerialPortInfo>
#include <QDateTime>
#include <QFileDialog>
#include <QMessageBox>

namespace Ui {
class debug_console;
}

class debug_console : public QDialog
{
    Q_OBJECT

public:
    explicit debug_console(QWidget *parent = nullptr);
    ~debug_console();

signals:

    void DebugPortConnectStatus( bool );

public slots:

private slots:

    void SerialPortDataRead( void );

    void SetSerialPort( int index );
    void SetBaudRate( int index );
    void SetNBits( int index );
    void SetParity( int index );
    void SetStopBits( int index );

    void SerialPortConnection( void );

    void SerialRxClear( void );
    void SerialRxPause( void );
    void SerialRxSave( void );

    void SerialTxCMDSend( void );
    void SerialTxCMDClear( void );

private:
    Ui::debug_console *ui;

    QSerialPort *debugSerialPort = new QSerialPort(this);

    void DebugModeParamInit( void );
    void DebugModeConnectingFunctions( void );

};

#endif // DEBUG_CONSOLE_H
