#include "admin.h"
#include "ui_admin.h"

#include <QSqlDatabase>
#include <QSql>
#include <QSqlQuery>

admin::admin(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::admin)
{
    ui->setupUi(this);

    // Creates a stacked widget index for different pages
      ui->stackedWidget->insertWidget(1, &editWindow);
//    ui->stackedWidget->insertWidget(2, &infoWindow);
//    ui->stackedWidget->insertWidget(3, &coachWindow);
//    ui->stackedWidget->insertWidget(4, &conferenceWindow);


    myDB = QSqlDatabase::database();

}

admin::~admin()
{
    delete ui;
}

void admin::on_teamButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
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

void admin::on_adminButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}
