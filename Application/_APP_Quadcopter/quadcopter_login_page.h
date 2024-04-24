#ifndef QUADCOPTER_LOGIN_PAGE_H
#define QUADCOPTER_LOGIN_PAGE_H

#include <QDialog>

namespace Ui {
class quadcopter_login_page;
}

class quadcopter_login_page : public QDialog
{
    Q_OBJECT

public:
    explicit quadcopter_login_page(QWidget *parent = nullptr);
    ~quadcopter_login_page();

signals:
    void LoginPageCheckResult( bool result );

private slots:
    void LoginCheckResult( void );
    void LoginLockPanel( void );

private:
    Ui::quadcopter_login_page *ui;

    struct{
        QString username;
        QString password;
    }login_page;
};

#endif // QUADCOPTER_LOGIN_PAGE_H
