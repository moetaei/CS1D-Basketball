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

//! set team name
QString denverTo::setCityName(QString city)
{
    QString output = "";
    double total = 0;
    graf.shortestPath(datah.findCityIndex("Denver Nuggets"),datah.findCityIndex(city), output, total);
    ui->displayDistance->setText(output);
    return output;
}
void denverTo::on_exit_clicked()
{
    close();
}
