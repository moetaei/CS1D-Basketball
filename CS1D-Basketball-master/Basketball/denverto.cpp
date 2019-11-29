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
void denverTo:: setCityName(QString city)
{
    graf.setDijEdges();
    double distance = graf.shortestPath(datah.findCityIndex("Denver Nuggets"),datah.findCityIndex(city));
    QString text = QString :: number (distance/1.0, 'f', 2);
    ui->displayDistance->setText(text);
}
void denverTo::on_exit_clicked()
{
    close();
}
