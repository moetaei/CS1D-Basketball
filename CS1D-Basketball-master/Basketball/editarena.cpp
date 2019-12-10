#include "editarena.h"
#include "ui_editarena.h"

editarena::editarena(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::editarena)
{
    ui->setupUi(this);

    list = new QSqlQueryModel();

    // Gets the teams in the database
    list->setQuery("SELECT DISTINCT TeamName "
                          "FROM info ");
    ui->List->setModel(list);
}

editarena::~editarena()
{
    delete ui;
}

void editarena::editLocation()
{
    QString Location;
    Location=ui->txt_Location->text();

    QSqlQuery qry;
    qry.prepare("update info set Location='"+Location+"' where Location='"+ui->List->currentText()+"'");
}

void editarena::on_confirmLocation_clicked()
{
    editLocation();
}
