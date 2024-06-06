#include "_drone_serial_terminal.h"
#include "ui__drone_serial_terminal.h"

_drone_serialport::_drone_serialport(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::_drone_serialport)
{
    ui->setupUi(this);
}

_drone_serialport::~_drone_serialport()
{
    delete ui;
}
