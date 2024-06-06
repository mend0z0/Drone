#include "_drone_mqtt_terminal.h"
#include "ui__drone_mqtt_terminal.h"

_drone_mqtt_terminal::_drone_mqtt_terminal(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::_drone_mqtt_terminal)
{
    ui->setupUi(this);
}

_drone_mqtt_terminal::~_drone_mqtt_terminal()
{
    delete ui;
}
