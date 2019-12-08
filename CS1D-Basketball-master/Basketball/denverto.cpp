#include "denverto.h"
#include "ui_denverto.h"

denverTo::denverTo(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::denverTo)
{
    ui->setupUi(this);
}

denverTo::~denverTo()
{
    delete ui;
}
QString denverTo::setCityName(QString city)
{
    QString output = "";
    graf.shortestPath(datah.findCityIndex("Denver Nuggets"),datah.findCityIndex(city), output);
    ui->displayDistance->setText(output);
    return output;
}
void denverTo::on_exit_clicked()
{
    close();
}
//admin stuff, the info tabs, and making the travel package pages can work with the souviner/checkout page
