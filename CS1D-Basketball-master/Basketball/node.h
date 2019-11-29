#ifndef NODE_H
#define NODE_H

#include <QString>

class node
{
public:
    node();
    node(QString c1, QString c2, double d);
    void setCity1(QString c1);
    void setCity2(QString c2);
    void setDistance(double d);
    QString getCity1();
    QString getCity2();
    double getDistance();
private:
    QString city1;
    QString city2;
    double distance;

};

#endif // NODE_H
