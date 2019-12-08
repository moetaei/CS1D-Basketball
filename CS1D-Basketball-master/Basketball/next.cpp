#include "next.h"
#include "ui_next.h"

next::next(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::next)
{
    ui->setupUi(this);
    myDB = QSqlDatabase::database();
    defaultListView();
    ui->newList->setEnabled(true);
}

next::~next()
{
    delete ui;
}
void next::setCity(QString s)
{
    starting = s;
}
void next::defaultListView()
{
    QString cityName;
    QSqlQuery * qry = new QSqlQuery(myDB);
    qry->prepare("SELECT TeamName "
                    "FROM info WHERE TeamName NOT IN ('"+starting+"') "
                    "ORDER BY TeamName ASC ");

    if(qry->exec())
    {
        // Populating list from query
        while(qry->next())
        {
            cityName = qry->value(0).toString();
            ui->newList->addItem(cityName);
        }
    }
    else
    {
        qDebug() << ("next Error: qry failed.");
    }
}
void next::on_newList_itemClicked(QListWidgetItem *item)
{
    direct = new cityToCity();
    direct->setCityName(starting, item->text());
    direct->show();
}

void next::on_exitButton_clicked()
{
    close();
}
