#include "city.h"

city::city()
{

}
city::city(QString n)
{
    name = n;
}
void city::setName(QString n)
{
    name = n;
}
QString city::getName()
{
    return name;
}
