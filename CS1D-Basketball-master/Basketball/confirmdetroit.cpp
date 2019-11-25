#include "confirmdetroit.h"
#include "ui_confirmdetroit.h"

ConfirmDetroit::ConfirmDetroit(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ConfirmDetroit)
{
    ui->setupUi(this);

    myDB = QSqlDatabase::database();
    defaultListView();
    ui->detroitList->setEnabled(true);
}

ConfirmDetroit::~ConfirmDetroit()
{
    delete ui;
}

void ConfirmDetroit::defaultListView()
{
    QString cityName;
    QSqlQuery * qry = new QSqlQuery(myDB);

    qry->prepare("SELECT TeamName "
                    "FROM info "
                    "ORDER BY TeamName ASC ");

    if(qry->exec())
    {
        // Populating list from query
        while(qry->next())
        {
            cityName = qry->value(0).toString();
            ui->detroitList->addItem(cityName);
        }
    }
    else
    {
        qDebug() << ("confirmDetroit Error: qry failed.");
    }
}
