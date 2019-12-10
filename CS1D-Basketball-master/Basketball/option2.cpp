#include "option2.h"
#include "ui_option2.h"

Option2::Option2(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Option2)
{

    ui->setupUi(this);
    myDB = QSqlDatabase::database();
    defaultListView();
    ui->newList1->setEnabled(true);
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
            ui->newList1->addItem(cityName);
        }
    }
    else
    {
        qDebug() << ("option2 Error: qry failed.");
    }
}
void Option2::defaultListView1()
{
    QString cityName;
    QSqlQuery * qry = new QSqlQuery(myDB);
    QString selectedCities = "WHERE TeamName NOT LIKE ";
    for(int i = 0; i < cityList.size(); i++)
    {
        selectedCities += "'";
        selectedCities += cityList[i];
        selectedCities += "'";
        if(i + 1 != cityList.size())
        {
             selectedCities += " AND TeamName NOT LIKE ";
        }
        else
        {
            selectedCities += " ";
        }
    }
    qry->prepare("SELECT TeamName "
                    "FROM info " + selectedCities +
                    "ORDER BY TeamName ASC ");

    if(qry->exec())
    {
        // Populating list from query
        while(qry->next())
        {
            cityName = qry->value(0).toString();
            ui->newList2->addItem(cityName);
        }
    }
    else
    {
        qDebug() << ("option2 Error: qry failed.");
    }
}
void Option2::on_exitButton_clicked()
{
    close();
}

void Option2::on_newList1_itemClicked(QListWidgetItem *item)
{
    cityList.push_back(item->text());
    ui->stackedWidget->setCurrentIndex(1);
    qDebug() << "Start1";
    qDebug() << "Start2";
    defaultListView1();
    qDebug() << "Start3";

}

void Option2::on_exit1_clicked()
{
    close();
}

void Option2::on_exit2_clicked()
{
    close();
}

void Option2::on_confirm_clicked()
{
    next1 = new class next;
    next1->setCity(cityList);
    next1->show();
}

void Option2::on_newList2_itemClicked(QListWidgetItem *item)
{

    cityList.push_back(item->text());
    ui->stackedWidget->setCurrentIndex(0);
    ui->stackedWidget->setCurrentIndex(1);
    qDebug() << "Start1";
    myDB = QSqlDatabase::database();
    defaultListView1();
    qDebug() << "Start3";
    ui->newList2->setEnabled(true);
    qDebug() << "End";
}
