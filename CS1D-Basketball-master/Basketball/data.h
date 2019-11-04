#ifndef DATA_H
#define DATA_H

#include <iostream>
#include <fstream>
#include <QString>
#include <QVector>
#include <QtSql>
#include "distances.h"
#include "information.h"

using namespace std;

class data
{
private:
    QVector<distances> data1;
    QVector<information> data2;
public:
    data();
    void readDataDistance();
    void readDataInfo();
    bool checkExist(QString teamA, QString teamB, QVector<distances> read);
    int findCity(QString teamA, QString teamB,QVector<distances> read);
    void showDistances();
    void showInfo();
};

#endif // DATA_H
