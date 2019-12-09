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

/*! Class login is created so that a basketball fan can login and plan
 * their trip and so an administrator can change and view the teams, arenas, distances, souveneirs and etc.*/
class login : public QDialog
{
    Q_OBJECT

public:
    explicit login(QWidget *parent = nullptr);

    //! destructor
    ~login();

private slots:

    //! opens the user window or the admin window
    void on_pushButton_login_clicked();

private:
    Ui::login *ui;
    user *userWindow;
    admin* adminWindow;
    QSqlDatabase userDB; //!< database for users
    databaseManager myDB; //!< database
};

#endif // LOGIN_H
