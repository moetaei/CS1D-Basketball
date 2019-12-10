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
      ui->stackedWidget->insertWidget(2, &souvenirWindow);
      ui->stackedWidget->insertWidget(3, &arenaWindow);

    myDB = QSqlDatabase::database();

    //int total = 12;
    //datah.setSeatingCapacity(total);
    ui->totalSeatingValue->setText(QString::number(datah.getSeatingCapacity()));

}

admin::~admin()
{
    delete ui;
}

void admin::on_teamButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}


void admin::on_logoutButton_clicked()
{
    this->close();
}

void admin::on_adminButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}


void admin::on_souvenirButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}



void admin::on_arenaButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);
}
