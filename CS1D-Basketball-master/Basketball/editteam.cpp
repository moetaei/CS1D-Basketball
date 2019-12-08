#include "editteam.h"
#include "ui_editteam.h"

editTeam::editTeam(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::editTeam)
{
    ui->setupUi(this);
}

editTeam::~editTeam()
{
    delete ui;
}
