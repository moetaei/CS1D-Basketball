#ifndef DISTANCES_H
#define DISTANCES_H

#include <QString>

using namespace std;

class distances
{
private:
    QString team1;
    QString team2;
    QString arena1;
    QString arena2;
    double distance;
public:
    distances();
    distances(QString teamA, QString teamB, QString arenaA, QString distanceA);
    QString getTeam1(){return team1;}
    QString getTeam2(){return team2;}
    QString getArena1(){return arena1;}
    QString getArena2(){return arena2;}
    double getDistance(){return distance;}

    void setTeam1(QString team);
    void setTeam2(QString team);
    void setArena1(QString arena);
    void setArena2(QString arena);
    void setDistance(double distances);
};

#endif // DISTANCES_H
