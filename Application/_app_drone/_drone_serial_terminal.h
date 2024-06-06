#ifndef _DRONE_SERIAL_TERMINAL_H
#define _DRONE_SERIAL_TERMINAL_H

#include <QDialog>

namespace Ui {
class _drone_serialport;
}

class _drone_serialport : public QDialog
{
    Q_OBJECT

public:
    explicit _drone_serialport(QWidget *parent = nullptr);
    ~_drone_serialport();

private:
    Ui::_drone_serialport *ui;
};

#endif // _DRONE_SERIAL_TERMINAL_H
