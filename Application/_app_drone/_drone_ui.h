#ifndef _DRONE_UI_H
#define _DRONE_UI_H

#include <QDialog>

namespace Ui {
class _drone_UI;
}

class _drone_UI : public QDialog
{
    Q_OBJECT

public:
    explicit _drone_UI(QWidget *parent = nullptr);
    ~_drone_UI();

private:
    Ui::_drone_UI *ui;
};

#endif // _DRONE_UI_H
