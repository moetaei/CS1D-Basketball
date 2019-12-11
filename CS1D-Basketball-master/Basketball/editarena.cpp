#include "editarena.h"
#include "ui_editarena.h"
#include "QDebug"
#include "QMessageBox"

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
    QString Location, team;
    Location = ui->txt_Location->text();
    team = ui->List->currentText();
    qDebug() << Location << team;

    QSqlQuery* qry = new QSqlQuery(myDB);
    qry->prepare("UPDATE info SET Location = :location WHERE TeamName = :teamName");
    qry->bindValue(":location", Location);
    qry->bindValue(":teamName", team);
    qry->exec();

    if(qry->exec())
    {
        QMessageBox::information(this,"Success","Location updated.");
        qry->next();
        qDebug() << qry->numRowsAffected() << qry->lastError();
    }
    else
    {
        QMessageBox::critical(this,"Error","Location unable to be updated.");
        qDebug() << "Failed to Update Location";
    }

}

void editarena::editCapacity()
{
    QString capacity, team;
    capacity=ui->txt_Capacity->text();
    team = ui->List->currentText();
    qDebug() << capacity << team;

    QSqlQuery* qry = new QSqlQuery(myDB);
    qry->prepare("UPDATE info SET StadiumCapacity = :stadiumCapacity WHERE TeamName = :teamName");
    qry->bindValue(":stadiumCapacity", capacity);
    qry->bindValue(":teamName", team);
    qry->exec();

    if(qry->exec())
    {
        QMessageBox::information(this,"Success","Stadium Capacity updated.");
        qry->next();
        qDebug() << qry->numRowsAffected() << qry->lastError();
    }
    else
    {
        QMessageBox::critical(this,"Error","Location unable to be updated.");
        qDebug() << "Failed to Update Stadium Capacity";
    }
}

void editarena::editArenaName()
{
    QString arenaN, team;
    arenaN=ui->txt_ArenaName->text();
    team = ui->List->currentText();
    qDebug() << arenaN << team;

    QSqlQuery* qry = new QSqlQuery(myDB);
    qry->prepare("UPDATE info SET ArenaName = :arenaName WHERE TeamName = :teamName");
    qry->bindValue(":arenaName", arenaN);
    qry->bindValue(":teamName", team);
    qry->exec();

    if(qry->exec())
    {
        QMessageBox::information(this,"Success","Arena name updated.");
        qry->next();
        qDebug() << qry->numRowsAffected() << qry->lastError(); //<< qry->value(3).toString();
    }
    else
    {
        QMessageBox::critical(this,"Error","Arena name unable to be updated.");
        qDebug() << "Failed to Update Arena Name";
    }
}

void editarena::on_confirmLocation_clicked()
{
    editLocation();
}

void editarena::on_confirmCapacity_clicked()
{
    editCapacity();
}

void editarena::on_confirmArenaName_clicked()
{
    editArenaName();
}
