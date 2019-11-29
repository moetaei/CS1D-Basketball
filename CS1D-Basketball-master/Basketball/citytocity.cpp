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
    graf.setDijEdges();
    double distance = graf.shortestPath(datah.findCityIndex(start),datah.findCityIndex(end));
    QString text = QString :: number (distance/1.0, 'f', 2);
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
