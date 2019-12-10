#include "editarena.h"
#include "ui_editarena.h"

editarena::editarena(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::editarena)
{
    ui->setupUi(this);

    myDB = QSqlDatabase::database();
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
    QString location;
    location=ui->txt_Location->text();

    QSqlQuery * qry = new QSqlQuery(myDB);
    qry->prepare("update info set Location='"+location+"' where Location='"+ui->List->currentText()+"'");
}

void editarena::editCapacity()
{
    QString Capacity;
    Capacity=ui->txt_Capacity->text();

    QSqlQuery * qry = new QSqlQuery(myDB);
    qry->prepare("INSERT INTO info (StadiumCapacity) "
                 "VALUES (:StadiumCapacity)");

    qry->bindValue(":StadiumCapacity", Capacity);
    qry->exec();
}

void editarena::on_confirmLocation_clicked()
{
    editLocation();
}

void editarena::on_confirmCapacity_clicked()
{
    editCapacity();
}
