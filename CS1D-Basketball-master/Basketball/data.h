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
class data
{
public:
    data();
    void setVector();
    void setNames();
    QVector<node> getTeams();
    int findCityIndex(QString name);
    int getSizeN();
    int getSizeC();
    QString findCityName(int i);
    double findDistance(int c1, int c2);
    QString showMe(node team);
private:
    QVector<node> team; //distances, doubles
    QVector<city> names; // names, strings
    QSqlDatabase myDB;
};

#endif // DATA_H
