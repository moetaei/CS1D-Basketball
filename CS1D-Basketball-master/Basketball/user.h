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

/*! Class user is used to create the Ui for the basketball fan to interact with.
 * The Basketball fan can perform the necesary searches and plan their trip to the different teams in many diferent ways */
class user : public QWidget
{
    Q_OBJECT

public:
    explicit user(QWidget *parent = nullptr);

    //! destructor
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

    //! When clicked it opens dfs window
    void on_dfs_clicked();

    //! When clicked it opens mst window
    void on_mst_clicked();

    //! When clicked it opens bfs window
    void on_bfs_clicked();

private:
    Ui::user *ui;

    QSqlDatabase myDB;

    uTeams teamWindow; //!< object to open team window
    info infoWindow; //!< object to open info window
    arenas arenaWindow; //!< object to open arena window
    coaches coachWindow; //!< object to open coach window
    divisions divisionWindow; //!< object to open division window
    conference conferenceWindow; //!< object to open conference window

    confirmDenver* denverWindow;
    ConfirmDetroit* detroitWindow;
    Option2 *option2;
    confirmCustom2* custom2Window;
    dfs *DFS; //!< dfs object
    mst *MST; //!< mst object
    bfs *BFS; //!< bfs object
};

#endif // USER_H
