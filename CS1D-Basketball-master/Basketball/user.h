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
#include "startingCity.h"
#include "confirmcustom2.h"
#include "option2.h"
#include "dfs.h"
#include "mst.h"
#include "bfs.h"

namespace Ui {
class user;
}

/*! Class user is used so when the basketball fan logs in they can axcess all the
 * intended feature of the program. For example perform BFS, MST and DFS. Also be able to plan different kinds of trips. */
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

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    //! when clicked opens dfs window
    void on_dfs_clicked();

    //! when clicked opens mst window
    void on_mst_clicked();

    //! when clicked opens bfs window
    void on_bfs_clicked();

private:
    Ui::user *ui;

    QSqlDatabase myDB; //!< database

    uTeams teamWindow;
    info infoWindow;
    arenas arenaWindow;
    coaches coachWindow;
    divisions divisionWindow;
    conference conferenceWindow;

    confirmDenver* denverWindow;
    ConfirmDetroit* detroitWindow;
    Option2 *option2;
    confirmCustom2* custom2Window;
    dfs *DFS; //!< dfs object pointer
    mst *MST; //!< mst object pointer
    bfs *BFS; //!< bfs object pointer
};

#endif // USER_H
