#ifndef INFORMATION_H
#define INFORMATION_H

#include <QString>

class information
{
    QString conference;
    QString division;
    QString team;
    QString location;
    QString arena;
    double stadiumCap;
    QString yearJoined;
    QString coach;

public:
    information();
    information(QString conference, QString division, QString team,QString location,QString arena,double stadiumCap,QString yearJoined,QString coach);
    QString getConference() {return conference;}
    QString getDivision() {return division;}
    QString getTeam() {return team;}
    QString getLocation() {return location;}
    QString getArena() {return arena;}
    double getStadiumCap() {return stadiumCap;}
    QString getYearJoined() {return yearJoined;}
    QString getCoach() {return coach;}
};

#endif // INFORMATION_H
