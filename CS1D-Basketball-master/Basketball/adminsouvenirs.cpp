#include "adminsouvenirs.h"
#include "ui_adminsouvenirs.h"
#include <QMessageBox>
#include <QSqlQuery>
#include <QSql>

adminSouvenirs::adminSouvenirs(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::adminSouvenirs)
{
    ui->setupUi(this);
    myDB = QSqlDatabase::database();
    list = new QSqlQueryModel();

    list->setQuery("SELECT DISTINCT item "
                                "FROM souvenirs ");
    ui->editComboBox->setModel(list);
    ui->deleteSouvenir->setModel(list);

    defaultReset();
}

adminSouvenirs::~adminSouvenirs()
{
    delete ui;
}

void adminSouvenirs::defaultReset()
{
    // NOT NEEDED
//    QString start = ui->selectTeam->currentText();

//    QSqlQueryModel * model = new QSqlQueryModel();
//    model->setQuery("SELECT * FROM info WHERE TeamName = '"+start+"'");

//    model->setHeaderData(2, Qt::Horizontal, QObject::tr("Team Name"));
//    model->setHeaderData(4, Qt::Horizontal, QObject::tr("Arena Name"));
//    model->setHeaderData(5, Qt::Horizontal, QObject::tr("Stadium Capavity"));
//    model->setHeaderData(6, Qt::Horizontal, QObject::tr("Date Joined"));


//    QSqlQueryModel * list = new QSqlQueryModel();

//    // Gets the teams in the database
//    list->setQuery("SELECT DISTINCT TeamName "
//                          "FROM info ");
//    ui->selectTeam->setModel(list);

}

void adminSouvenirs::on_confirmAddSouvenir_clicked()
{
    QString name;
    double price;

    if(ui->addPrice->value() < -1)
    {
        QMessageBox::warning(this, "Invalid Input", "Please enter a positive number");
    }
    else
    {
        price = ui->addPrice->value();
        name = ui->confirmAddSouvenir->text();
        QSqlQuery* qry = new QSqlQuery(myDB);

    }




}
