#include "confirmcustom1.h"
#include "ui_confirmcustom1.h"

confirmCustom1::confirmCustom1(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::confirmCustom1)
{
    ui->setupUi(this);

    myDB = QSqlDatabase::database();
    defaultListView();
    ui->customList->setEnabled(true);
}

confirmCustom1::~confirmCustom1()
{
    delete ui;
}

void confirmCustom1::defaultListView()
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
            ui->customList->addItem(cityName);
        }
    }
    else
    {
        qDebug() << ("confirmDenver Error: qry failed.");
    }
}
