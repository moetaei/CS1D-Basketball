#ifndef USER_H
#define USER_H

#include <QWidget>

#include "uTeams.h"
#include "info.h"
#include "arenas.h"
#include "coaches.h"
#include "divisions.h"
#include "conference.h"
#include "confirmdenver.h"
#include "confirmdetroit.h"
#include "confirmcustom1.h"
#include "confirmcustom2.h"

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

    void on_infoButton_clicked();
    //!< team info page is displayed in stackedWidget

    void on_coachButton_clicked();
    //!< coaches page is displayed in stackedWidget

    void on_confrenceButton_clicked();
    //!< confrences page is displayed in stackedWidget

    void on_divisionButton_clicked();
    //!< divisions page is displayed in stackedWidget

    void on_logoutButton_clicked();
    //!< User window closes

    void on_pushButton_clicked();

private:
    Ui::user *ui;

    QSqlDatabase myDB;

    uTeams teamWindow;
    info infoWindow;
    arenas arenaWindow;
    coaches coachWindow;
    divisions divisionWindow;
    conference conferenceWindow;

    confirmDenver* denverWindow;
};

#endif // USER_H
