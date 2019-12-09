#include "editteam.h"
#include "ui_editteam.h"

editTeam::editTeam(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::editTeam)
{
    ui->setupUi(this);
    QPixmap pix1(":/rec/graph.png");
    ui->OrigGraph->setPixmap(pix1.scaled(411,361,Qt::KeepAspectRatio));

    QPixmap pix2(":/rec/arrow.png");
    ui->arrowPic->setPixmap(pix2.scaled(121,91,Qt::KeepAspectRatio));

    QPixmap pix3(":/rec/newGraph.PNG");
    ui->NewGraph->setPixmap(pix3.scaled(411,361,Qt::KeepAspectRatio));
}

editTeam::~editTeam()
{
    delete ui;
}
