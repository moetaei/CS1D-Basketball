#include "citytocity.h"
#include "ui_citytocity.h"

cityToCity::cityToCity(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::cityToCity)
{
    ui->setupUi(this);
}
void cityToCity::setCityName(QString start, QString end)
{
    QString text = "";
    double total = 0;
    graf.shortestPath(datah.findCityIndex(start),datah.findCityIndex(end),text,total);
    ui->displayDistance->setText(text);
}
cityToCity::~cityToCity()
{
    delete ui;
}

void cityToCity::on_exit_clicked()
{
    close();
}
