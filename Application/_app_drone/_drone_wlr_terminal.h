#ifndef _DRONE_WLR_TERMINAL_H
#define _DRONE_WLR_TERMINAL_H

#include <QDialog>

namespace Ui {
class _drone_wlr_terminal;
}

class _drone_wlr_terminal : public QDialog
{
    Q_OBJECT

public:
    explicit _drone_wlr_terminal(QWidget *parent = nullptr);
    ~_drone_wlr_terminal();

private:
    Ui::_drone_wlr_terminal *ui;
};

#endif // _DRONE_WLR_TERMINAL_H
