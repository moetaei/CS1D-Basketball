
#ifndef ADMIN_H
#define ADMIN_H
#include "editarena.h"
#include "uTeams.h"
#include "editteam.h"
#include "adminsouvenirs.h"
#include "data.h"

#include <QWidget>
#include <QSqlDatabase>

namespace Ui {
class admin;
}

/*! Class admin is used so that the admin can have the ability to
 * login and view and edit the teams, the distances and or the souviners*/
class admin : public QWidget
{
    Q_OBJECT

public:
    explicit admin(QWidget *parent = nullptr);

    //! destructor
    ~admin();

private slots:
    void on_teamButton_clicked(); //!< Teams page is displayed in stackedWidget
    void on_logoutButton_clicked(); //!< Admin window closes
    void on_adminButton_clicked(); //!< default admin page is displayed in stackedWidget

    void on_souvenirButton_clicked();//!< Souviner page is diplayed in stackedWidget

    void on_arenaButton_clicked();

private:
    Ui::admin *ui;
    editTeam editWindow;
    adminSouvenirs souvenirWindow;
    editarena arenaWindow;
    QSqlDatabase myDB; //!< QSqlDatabase for the teams
    class data datah;
};

#endif // ADMIN_H
