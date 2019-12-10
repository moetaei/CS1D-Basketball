#ifndef DATA_H
#define DATA_H

#include <QVector>
#include "node.h"
#include "city.h"
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QSqlError>
#include <QDebug>
#include <QMessageBox>
#include <QFileDialog>
#include <QFile>

struct enter
{
    QString type;
    QString username; //! username for login
    QString password; //! password for login
};

/*! Class data is used to make the use of data easier to handle with functions
 * that can find the team in the database that is needed and can return the name, index and etc */
class data : public QWidget
{
public:

    //! Constructor
    data();
    void setVector();

    //! Set the team names
    void setNames();

    //! Sets the seating capacity of the teams
    void setSeatingCapacity();

    //! returns total seating capacity of all teams
    int getSeatingCapacity();

    //! Returns a team
    QVector<node> getTeams();

    //! Function to find the index of a given team name
    int findCityIndex(QString name);

    //! returns size
    int getSizeN();

    //! returns size
    int getSizeC();

    //! Function to find the name of the team
    QString findCityName(int i);

    //! Function to find the distance of an edge
    double findDistance(int c1, int c2);

    //! Displays the team and distance
    QString showMe(node team);

    void updateDB1(); // updates distance

    void updateDB2(); // updates info

private:
    QVector<node> team; //!< distances, doubles
    QVector<city> names; //!< names, strings
    int totalCap = 0; //!< total seating capacity of all stadiums
    QSqlDatabase myDB;
};

#endif // DATA_H
