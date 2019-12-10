#include "adminsouvenirs.h"
#include "ui_adminsouvenirs.h"
#include <QSqlQuery>
#include <QSql>

adminSouvenirs::adminSouvenirs(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::adminSouvenirs)
{
    ui->setupUi(this);
    myDB = QSqlDatabase::database();

    defaultReset();
}

adminSouvenirs::~adminSouvenirs()
{
    delete ui;
}

void adminSouvenirs::defaultReset()
{
    QString start = ui->selectTeam->currentText();

    QSqlQueryModel * model = new QSqlQueryModel();
    model->setQuery("SELECT * FROM info WHERE TeamName = '"+start+"'");

    model->setHeaderData(2, Qt::Horizontal, QObject::tr("Team Name"));
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("Arena Name"));
    model->setHeaderData(5, Qt::Horizontal, QObject::tr("Stadium Capavity"));
    model->setHeaderData(6, Qt::Horizontal, QObject::tr("Date Joined"));


    QSqlQueryModel * list = new QSqlQueryModel();

    // Gets the teams in the database
    list->setQuery("SELECT DISTINCT TeamName "
                          "FROM info ");
    ui->selectTeam->setModel(list);

}
