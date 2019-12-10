#include "next.h"
#include "ui_next.h"

next::next(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::next)
{
    ui->setupUi(this);

}

next::~next()
{
    delete ui;
}
void next::setCity(QVector<QString> s)
{
  for(int i = 0; i < s.size(); i++)
  {
      cityOrder.push_back(s[i]);
  }
  QString text = "";
  QString cities = "";
  double total = 0;
  for(int i = 0; i < cityOrder.size(); i++)
  {
      if(i + 1 != cityOrder.size() )
      {
          graf = new Graph();
          graf->shortestPath(datah.findCityIndex(cityOrder[i]),datah.findCityIndex(cityOrder[i+1]),text, total);
          text += "\n\n";
      }
      cities += cityOrder[i];
      cities += '\n';

  }
  text += "TOTAL DISTANCE FOR YOUR ROUTE: " + QString::number(total);
  ui->route->setText(text);
  ui->cityList->setText(cities);
}
void next::on_exitButton_clicked()
{
    cityOrder.clear();
    ui->route->clear();
    ui->cityList->clear();
    close();
}

