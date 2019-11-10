#include "user.h"
#include "ui_user.h"

user::user(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::user)
{
    ui->setupUi(this);

    // Creates a stacked widget index for different pages
    ui->stackedWidget->insertWidget(1, &teamWindow);
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
//    ui->stackedWidget->setCurrentIndex(2);
}

void user::on_logoutButton_clicked()
{
    this->close();
}
