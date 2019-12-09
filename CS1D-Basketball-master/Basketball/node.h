#ifndef NODE_H
#define NODE_H

#include <QString>

/*! Class node is used to set two teams and its distance. All variables have getters and setter to access them. */
class node
{
public:
    //! constructor
    node();

    //! constructor
    node(QString c1, QString c2, double d);

    //! sets a team as team1
    void setCity1(QString c1);

    //! sets a second team as team2
    void setCity2(QString c2);

    //! sets distance between teams
    void setDistance(double d);

    //! returns team1
    QString getCity1();

    //! returns team2
    QString getCity2();

    //! returns distance
    double getDistance();

private:
    QString city1; //!< team 1
    QString city2; //!< team 2
    double distance; //!< distance between two teams

};

#endif // NODE_H
