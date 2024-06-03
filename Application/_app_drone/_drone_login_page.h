#ifndef _DRONE_LOGIN_PAGE_H
#define _DRONE_LOGIN_PAGE_H

#include <QDialog>

namespace Ui {
class _drone_login_page;
}

class _drone_login_page : public QDialog
{
    Q_OBJECT

public:
    explicit _drone_login_page(QWidget *parent = nullptr);
    ~_drone_login_page();

private:
    Ui::_drone_login_page *ui;
};

#endif // _DRONE_LOGIN_PAGE_H
