#include "option2.h"
#include "ui_option2.h"

Option2::Option2(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Option2)
{
    ui->setupUi(this);
    myDB = QSqlDatabase::database();
    defaultListView();
    ui->newList->setEnabled(true);
}

Option2::~Option2()
{
    delete ui;
}
void Option2::defaultListView()
{
    QString cityName;
    QSqlQuery * qry = new QSqlQuery(myDB);

    qry->prepare("SELECT TeamName "
                    "FROM info  "
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
        qDebug() << ("option2 Error: qry failed.");
    }
}
void Option2::on_newList_itemClicked(QListWidgetItem *item)
{
    next1 = new class next();
    next1->setCity(item->text());
    next1->show();

}

void Option2::on_exitButton_clicked()
{
    close();
}
