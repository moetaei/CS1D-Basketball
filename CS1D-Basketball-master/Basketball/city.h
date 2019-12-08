#ifndef CITY_H
#define CITY_H
#include <QString>

class city
{
public:
    city();
    city(QString n);
    void setName(QString n);
    QString getName();
private:
    QString name;

};

#endif // CITY_H
