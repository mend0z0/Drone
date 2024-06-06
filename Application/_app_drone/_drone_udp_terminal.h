#ifndef _DRONE_UDP_TERMINAL_H
#define _DRONE_UDP_TERMINAL_H

#include <QDialog>

namespace Ui {
class _drone_udp_terminal;
}

class _drone_udp_terminal : public QDialog
{
    Q_OBJECT

public:
    explicit _drone_udp_terminal(QWidget *parent = nullptr);
    ~_drone_udp_terminal();

private:
    Ui::_drone_udp_terminal *ui;
};

#endif // _DRONE_UDP_TERMINAL_H
