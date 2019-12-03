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

void user::on_infoButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}

void user::on_coachButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);
}

void user::on_confrenceButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(4);
}

void user::on_divisionButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(5);
}

void user::on_arenaButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(6);
}

void user::on_pushButton_clicked()
{
    denverWindow = new confirmDenver();
    denverWindow->show();
}

void user::on_pushButton_2_clicked()
{
    option2 = new Option2();
    option2->show();
}

void user::on_pushButton_3_clicked()
{
    detroitWindow = new ConfirmDetroit();
    detroitWindow->show();
}

void user::on_pushButton_4_clicked()
{
    custom2Window = new confirmCustom2();
    custom2Window->show();
}

void user::on_logoutButton_clicked()
{
    this->close();
}

void user::on_dfs_clicked()
{
    DFS = new dfs();
    DFS->setText();
    DFS->show();
}

void user::on_mst_clicked()
{
    MST= new mst();
    MST->setLabel();
    MST->show();
}
