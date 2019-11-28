#include "admin.h"
#include "ui_admin.h"

admin::admin(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::admin)
{
    ui->setupUi(this);

    // Creates a stacked widget index for different pages
//    ui->stackedWidget->insertWidget(1, &teamWindow);
//    ui->stackedWidget->insertWidget(2, &infoWindow);
//    ui->stackedWidget->insertWidget(3, &coachWindow);
//    ui->stackedWidget->insertWidget(4, &conferenceWindow);
}

admin::~admin()
{
    delete ui;
}

void admin::on_teamButton_clicked()
{

}

void admin::on_distanceButton_clicked()
{

}

void admin::on_souvinerButton_clicked()
{

}

void admin::on_logoutButton_clicked()
{
    this->close();
}
