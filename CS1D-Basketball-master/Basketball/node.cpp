#include "node.h"

node::node()
{

}
node::node(QString c1, QString c2, double d)
{
    city1 = c1;
    city2 = c2;
    distance = d;
}
void node::setCity1(QString c1)
{
     city1 = c1;
}
void node::setCity2(QString c2)
{
    city2 = c2;
}
void node::setDistance(double d)
{
    distance = d;
}
QString node::getCity1()
{
    return city1;
}
QString node::getCity2()
{
    return city2;
}
double node::getDistance()
{
    return distance;
}
