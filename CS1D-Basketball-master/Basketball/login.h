#ifndef LOGIN_H
#define LOGIN_H

#include <QDialog>
#include <QtSql>
namespace Ui {
class login;
}

class login : public QDialog
{
    Q_OBJECT

public:
    void UserDB();
    explicit login(QWidget *parent = nullptr);
    ~login();

private slots:

    void on_pushButton_login_clicked();

private:
    Ui::login *ui;
    QSqlDatabase userDB;
};

#endif // LOGIN_H
