#include "distances.h"
distances ::distances()
{

}
distances::distances(QString teamA, QString teamB, QString arenaA, QString distanceA)
{
    team1 = teamA;
    team2 = teamB;
    arena1 = arenaA;
    arena2 = "";
    distance = distanceA.toDouble();
}
void distances::setTeam1(QString team)
{
    team1 = team;
}
void distances::setTeam2(QString team)
{
    team2 = team;
}
void distances::setArena1(QString arena)
{
    arena1 = arena;
}
void distances::setArena2(QString arena)
{
    arena2 = arena;
}
void distances::setDistance(double distances)
{
    distance = distances;
}
