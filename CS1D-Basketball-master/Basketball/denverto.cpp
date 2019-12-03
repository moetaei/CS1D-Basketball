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
    QString output = "";
    graf.shortestPath(datah.findCityIndex("Denver Nuggets"),datah.findCityIndex(city), output);
    ui->displayDistance->setText(output);
}
void denverTo::on_exit_clicked()
{
    close();
}
