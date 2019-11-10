#ifndef USER_H
#define USER_H

#include <QWidget>

#include "uTeams.h"
//#include "
//#include "
//#include "

namespace Ui {
class user;
}

class user : public QWidget
{
    Q_OBJECT

public:
    explicit user(QWidget *parent = nullptr);
    ~user();

private slots:
    void on_travelPackButton_clicked();
    //!< Travel Packages page is displayed in stackedWidget

    void on_teamButton_clicked();
    //!< Teams page is displayed in stackedWidget

    void on_arenaButton_clicked();
    //!< Arena page is displayed in stackedWidget

    void on_logoutButton_clicked();
    //!< User window closes

private:
    Ui::user *ui;

    QSqlDatabase myDB;

    uTeams teamWindow;


};

#endif // USER_H
