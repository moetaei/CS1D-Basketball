#include "editteam.h"
#include "ui_editteam.h"
#include <QMessageBox>

editTeam::editTeam(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::editTeam)
{
    ui->setupUi(this);
    QPixmap pix1(":/rec/graph.png");
    ui->OrigGraph->setPixmap(pix1.scaled(411,311,Qt::KeepAspectRatio));

    QPixmap pix2(":/rec/newGraph.PNG");
    ui->NewGraph->setPixmap(pix2.scaled(411,311,Qt::KeepAspectRatio));

    QPixmap pix3(":/rec/arrow.png");
    ui->arrowLabel->setPixmap(pix3.scaled(181,101,Qt::KeepAspectRatio));

}

editTeam::~editTeam()
{
    delete ui;
}

void editTeam::on_pushButton_clicked()
{
    QMessageBox::information(this, "Load From File", "Successfully loaded from file");
}
