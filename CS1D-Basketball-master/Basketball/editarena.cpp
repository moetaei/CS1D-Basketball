#include "editarena.h"
#include "ui_editarena.h"
#include "QDebug"
#include "QMessageBox"

editarena::editarena(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::editarena)
{
    ui->setupUi(this);
//    myDB = QSqlDatabase::database();

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
    QString Location, team;
    Location=ui->txt_Location->text();
    team = ui->List->currentText();
    qDebug() << Location << team;


//    QSqlQueryModel* model = new QSqlQueryModel;
//    model->prepare("UPDATE info SET Location ='"+Location+"' WHERE TeamName ='"+ui->List->currentText()+"'");

    QSqlQuery* qry = new QSqlQuery(myDB);
    qry->prepare("UPDATE info "
                "SET Location = 'asjkd' "
                "WHERE TeamName = 'Boston Celtics' ");
    qry->numRowsAffected();
    if(qry->exec())
    {
        QMessageBox::information(this,"Success","Price for " + Location + " updated.");
        qry->next();
        qDebug() << qry->numRowsAffected() << qry->lastError(); //<< qry->value(3).toString();
    }
    else
    {
        QMessageBox::critical(this,"Error","Price for " + Location + " unable to be updated.");
        qDebug() << "Failed to Update Food Price";
    }
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
