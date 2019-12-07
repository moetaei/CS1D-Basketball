
#ifndef ADMIN_H
#define ADMIN_H

#include "uTeams.h"
// need to include distances and souvenirs

#include <QWidget>
#include <QSqlDatabase>

namespace Ui {
class admin;
}

class admin : public QWidget
{
    Q_OBJECT

public:
    explicit admin(QWidget *parent = nullptr);
    ~admin();

private slots:
    void on_teamButton_clicked();
    //!< Teams page is displayed in stackedWidget
    void on_distanceButton_clicked();

    void on_souvinerButton_clicked();

    void on_logoutButton_clicked();
    //!< Admin window closes

    void on_adminButton_clicked();

private:
    Ui::admin *ui;
    uTeams teamWindow;

    QSqlDatabase myDB;
};

#endif // ADMIN_H
