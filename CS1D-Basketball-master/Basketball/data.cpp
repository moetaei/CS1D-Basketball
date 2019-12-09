#include "data.h"

/*! Constructor*/
data::data()
{
    myDB = QSqlDatabase::database();
    setNames();
    setVector();
}

/*! Populates the vector with the team names and distances */
void data::setVector()
{
    QString city1;
    QString city2;
    double distance;
    QSqlQuery * qry = new QSqlQuery(myDB);

    qry->prepare("SELECT Team1, Team2, Distance "
                 "FROM distances ");

    if(qry->exec())
    {
        // Populating list from query
        while(qry->next())
        {
            city1 = qry->value(0).toString();
            city2 = qry->value(1).toString();
            distance = qry->value(2).toDouble();
            node newNode(city1,city2,distance);
            team.push_back(newNode);
        }
    }
    else
    {
        qDebug() << ("denverTo Error: qry failed.");
    }
}

/*! sets the team names and populates query */
void data::setNames()
{
    QString cityName;
    QSqlQuery * qry = new QSqlQuery(myDB);

    qry->prepare("SELECT TeamName "
                 "FROM info ");

    if(qry->exec())
    {
        // Populating list from query
        while(qry->next())
        {
            cityName = qry->value(0).toString();
            city newCity(cityName);
            names.push_back(newCity);
        }
    }
    else
    {
        qDebug() << ("denverTo Error: qry failed.");
    }
}

/*! Finds specific index of given team */
int data::findCityIndex(QString name)
{
    for(int i = 0; i <names.size(); i++)
    {
        if(names[i].getName() == name)
        {
            return i;
        }
    }
    return -1;

}

/*! Return team name found with specific index */
QString data::findCityName(int i)
{
    return names[i].getName();
}

/*! calculates distance */
double data::findDistance(int c1, int c2)
{
    QString city1 = findCityName(c1);
    QString city2 = findCityName(c2);
    for(int i = 0; i < team.size(); i++)
    {
        if(team[i].getCity1() == city1 && team[i].getCity2() == city2)
        {
            return team[i].getDistance();
        }
        else if(team[i].getCity2() == city1 && team[i].getCity1() == city2)
        {
            return team[i].getDistance();
        }
    }
    return -1;
}

/*! returns the team name specified */
QVector<node> data::getTeams()
{
    return team;
}

/*! Shows the team given and distance to another */
QString data::showMe(node city)
{
    return(city.getCity1() + " / " + city.getCity2() + " / " + QString::number(city.getDistance()));
}

/*! Size of teams */
int data::getSizeN()
{
    return team.size();
}

/*! size of names (vertices) */
int data::getSizeC()
{
    return names.size();
}
