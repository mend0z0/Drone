#include "_drone_udp_terminal.h"
#include "ui__drone_udp_terminal.h"

_drone_udp_terminal::_drone_udp_terminal(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::_drone_udp_terminal)
{
    ui->setupUi(this);
}

_drone_udp_terminal::~_drone_udp_terminal()
{
    delete ui;
}
