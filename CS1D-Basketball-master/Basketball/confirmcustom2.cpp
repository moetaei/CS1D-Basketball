#include "confirmcustom2.h"
#include "ui_confirmcustom2.h"

confirmCustom2::confirmCustom2(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::confirmCustom2)
{
    ui->setupUi(this);

    myDB = QSqlDatabase::database();
    defaultListView();
    ui->customList->setEnabled(true);
}

confirmCustom2::~confirmCustom2()
{
    delete ui;
}

void confirmCustom2::defaultListView()
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

void confirmCustom2::on_exitButton_clicked()
{
    close();
}
