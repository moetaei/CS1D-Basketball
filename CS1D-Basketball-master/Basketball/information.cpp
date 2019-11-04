#include "information.h"

information::information()
{

}
information:: information(QString conference, QString division, QString team,QString location,QString arena,double stadiumCap,QString yearJoined,QString coach)
{
    this->conference = conference;
    this->division = division;
    this->team = team;
    this->location = location;
    this->arena = arena;
    this->stadiumCap = stadiumCap;
    this->yearJoined = yearJoined;
    this->coach = coach;
}
