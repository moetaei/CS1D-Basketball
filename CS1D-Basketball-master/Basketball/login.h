#ifndef LOGIN_H
#define LOGIN_H

#include <QDialog>
#include <QStackedLayout>
#include <QDebug>
#include <QMessageBox>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QSqlError>
#include <QDebug>
#include "user.h"
#include "admin.h"
#include "databasemanager.h"

namespace Ui {
class login;
}

class login : public QDialog
{
    Q_OBJECT

public:
    explicit login(QWidget *parent = nullptr);
    ~login();

private slots:

    void on_pushButton_login_clicked();

private:
    Ui::login *ui;
    user *userWindow;
    admin* adminWindow;
    QSqlDatabase userDB;
    databaseManager myDB;
};

#endif // LOGIN_H
