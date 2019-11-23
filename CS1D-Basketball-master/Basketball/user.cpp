#include "user.h"
#include "ui_user.h"
#include "login.h"

#include "user.h"
#include <QSqlDatabase>
#include <QSql>
#include <QSqlQuery>

user::user(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::user)
{
    ui->setupUi(this);

    // Creates a stacked widget index for different pages
    ui->stackedWidget->insertWidget(1, &teamWindow);
    ui->stackedWidget->insertWidget(2, &infoWindow);
    ui->stackedWidget->insertWidget(3, &coachWindow);
    ui->stackedWidget->insertWidget(4, &conferenceWindow);
    ui->stackedWidget->insertWidget(5, &divisionWindow);
    ui->stackedWidget->insertWidget(6, &arenaWindow);

    myDB = QSqlDatabase::database();
}

user::~user()
{
    delete ui;
}

void user::on_travelPackButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}

void user::on_teamButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}
void user::on_arenaButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(6);
}

void user::on_logoutButton_clicked()
{
    this->close();
}

void user::on_infoButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}

void user::on_coachButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);
}
