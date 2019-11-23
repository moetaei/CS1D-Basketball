#ifndef LOGIN_H
#define LOGIN_H

#include <QDialog>
#include <QStackedLayout>
#include <QDebug>
#include <QMessageBox>
#include <QtSql>

#include "user.h"
#include "databasemanager.h"

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

    void connectToDB();

private slots:

    void on_pushButton_login_clicked();

private:
    Ui::login *ui;
    user *userWindow;
    QSqlDatabase userDB;

    databaseManager myDB;
};

#endif // LOGIN_H
