#include "_drone_wlr_terminal.h"
#include "ui__drone_wlr_terminal.h"

_drone_wlr_terminal::_drone_wlr_terminal(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::_drone_wlr_terminal)
{
    ui->setupUi(this);
}

_drone_wlr_terminal::~_drone_wlr_terminal()
{
    delete ui;
}
