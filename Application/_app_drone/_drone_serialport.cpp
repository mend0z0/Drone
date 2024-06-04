#include "_drone_serialport.h"
#include "ui__drone_serialport.h"

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
