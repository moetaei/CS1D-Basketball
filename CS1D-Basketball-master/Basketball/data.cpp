#include "data.h"

data::data()
{

}
bool data::checkExist(QString teamA, QString teamB, QVector<distances> read)
{
    if(read.size() == 0)
    {
        return true;
    }
    for(int i = 0; i < read.size(); i++)
    {
        if(teamA == read[i].getTeam1() || teamA == read[i].getTeam2())
        {
            if(teamB == read[i].getTeam1() || teamB == read[i].getTeam2())
            {
                return false;
            }
        }
    }
    return true;
}
int data:: findCity(QString teamA, QString teamB,QVector<distances> read)
{
    for(int i = 0; i < read.size(); i++)
    {
        if(teamA == read[i].getTeam1() || teamA == read[i].getTeam2())
        {
            if(teamB == read[i].getTeam1() || teamB == read[i].getTeam2())
            {
                return i;
            }
        }
    }
    return -1;
}
void data:: readDataDistance()
{
    QVector<distances> read;
    QFile file1("../csvFiles/NBA Distances.csv");
    if (!file1.open(QIODevice::ReadOnly))
    {
        qDebug()<< "ERROR: File Open 1" << endl;
    }
    else
    {
        QTextStream in(&file1);
        QString team1 = "";
        QString team2 = "";
        QString arena1;
        QString arena2;
        QString distance;
        in.readLine();
        while (!in.atEnd())
        {
            QString line = in.readLine();
            QStringList listOfString = line.split(",");
            team1 = listOfString[0];
            arena1 = listOfString[1];
            team2 = listOfString[2];
            distance = listOfString[3];

            if(checkExist(team1, team2, read)) // if false the cities and their distance between each other are in data2 already
            {
                if(!(team1 == ""))
                {
                    distances AB(team1, team2, arena1, distance); // initialize distance
                    read.push_back(AB); //add new distance
                }
            }
            else
            {
                int index = findCity(team1,team2,read);
                arena2 = arena1;
                read[index].setArena2(arena2);
            }
        }
    }
     file1.close();
     QFile file2("../csvFiles/NBA newDistance.csv");
     if (!file2.open(QIODevice::ReadOnly))
     {
         qDebug()<< "ERROR: File Open 2" << endl;
     }
     else
     {
         QTextStream in(&file2);
         QString team1 = "";
         QString team2 = "";
         QString arena1;
         QString arena2;
         QString distance;
         in.readLine();
         while (!in.atEnd())
         {
             QString line = in.readLine();
             QStringList listOfString = line.split(",");
             team1 = listOfString[0];
             arena1 = listOfString[1];
             team2 = listOfString[2];
             distance = listOfString[3];

             if(checkExist(team1, team2, read)) // if false the cities and their distance between each other are in data2 already
             {
                 if(!(team1 == ""))
                 {
                     distances AB(team1, team2, arena1, distance); // initialize distance
                     read.push_back(AB); //add new distance
                 }
             }
             else
             {
                 int index = findCity(team1,team2,read);
                 arena2 = arena1;
                 read[index].setArena2(arena2);
             }
         }
         if (data1.size() < read.size())
         {
             data1 = read;
         }
     }
      file2.close();
     read.clear();

}
void data:: readDataInfo()
{
    QVector<information> read;
    QFile file3("../csvFiles/NBA Information.csv");
    if (!file3.open(QIODevice::ReadOnly))
    {
        qDebug()<< "ERROR: File Open 3" << endl;
    }
    else
    {
        int i = 1;
        QTextStream in(&file3);
        QString conference;
        QString division;
        QString team;
        QString location;
        QString arena;
        QString capcity;
        QString year;
        QString coach;
        in.readLine();
        while (!in.atEnd())
        {
            if(i == 31)
            {
                in.readLine();
                in.readLine();
            }
            QString line = in.readLine();
            QStringList listOfString = line.split(",");
            conference = listOfString[0];
            division = listOfString[1];
            team = listOfString[2];
            location = listOfString[3];
            arena = listOfString[4];
            capcity = listOfString[5];
            year = listOfString[6];
            coach = listOfString[7];
            i++;

            information newInfo(conference,division,team,location,arena,capcity.toDouble(),year,coach);
            read.push_back(newInfo);
        }
        if (data2.size() < read.size())
        {
            data2 = read;
        }
    }
     file3.close();
}
void data::showDistances()
{
    qDebug() << data1.size();
    for(int i = 0; i < data1.size(); i++)
    {
        std::cout << data1[i].getTeam1().toStdString() << ", "<< data1[i].getArena1().toStdString() << ", "
                  << data1[i].getTeam2().toStdString() << ", "<< data1[i].getArena2().toStdString() << ", "
                  << data1[i].getDistance() << endl;
    }
}
void data::showInfo()
{
    qDebug() << data2.size();
    for(int i = 0; i < data2.size(); i++)
    {
        std::cout << data2[i].getConference().toStdString() << ", "
                  << data2[i].getDivision().toStdString() << ", "
                  << data2[i].getTeam().toStdString() << ", "
                  << data2[i].getLocation().toStdString() << ", "
                  << data2[i].getArena().toStdString() << ", "
                  << data2[i].getStadiumCap() << ", "
                  << data2[i].getYearJoined().toStdString() << ", "
                  << data2[i].getCoach().toStdString() << ", " << endl;
    }
}
