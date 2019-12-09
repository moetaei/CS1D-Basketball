#ifndef CITY_H
#define CITY_H
#include <QString>

/*! Class city is the team class, it has the name of the team */
class city
{
public:
    //! constructor
    city();

    //! constructor
    city(QString n);

    //! changes the team name
    void setName(QString n);

    //! returns the team name
    QString getName();

private:
    QString name; //! team name

};

#endif // CITY_H
