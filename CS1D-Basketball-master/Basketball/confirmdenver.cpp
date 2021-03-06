#include "confirmdenver.h"
#include "ui_confirmdenver.h"

/*!
 ****************************************************************************
 * METHOD - ConfirmDenver
 * --------------------------------------------------------------------------
 * This method is the constructor.
 * --------------------------------------------------------------------------
 * PRE-CONDITIONS
 *      Database must exist and be open.
 *
 * POST-CONDITIONS
 *      ==> Returns nothing.
 ***************************************************************************/
confirmDenver::confirmDenver(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::confirmDenver)
{
    ui->setupUi(this);

    myDB = QSqlDatabase::database();
    defaultListView();
    ui->denverList->setEnabled(true);
    destinations = new QString[1];
    distances = new double[1];
}

/*!
 ****************************************************************************
 * METHOD - ~ConfirmDenver
 * --------------------------------------------------------------------------
 * This method is the desconstructor.
 * --------------------------------------------------------------------------
 * PRE-CONDITIONS
 *      No parameters are required.
 *
 * POST-CONDITIONS
 *      ==> Returns nothing.
 ***************************************************************************/
confirmDenver::~confirmDenver()
{
    delete ui;
}


void confirmDenver::defaultListView()
{
    QString cityName;
    QSqlQuery * qry = new QSqlQuery(myDB);

    qry->prepare("SELECT DISTINCT Team1 "
                 "FROM distances "
                 "WHERE NOT Team1 = 'Denver Nuggets' ");

    if(qry->exec())
    {
        // Populating list from query
        while(qry->next())
        {
            cityName = qry->value(0).toString();
            ui->denverList->addItem(cityName);
        }
    }
    else
    {
        qDebug() << ("tConfirmCustom Error: qry failed.");
    }
}

void confirmDenver::on_denverList_itemClicked(QListWidgetItem *item)
{
    QString temp;
    denverto = new denverTo();
    temp = denverto->setCityName(item->text());
    denverto->show();

    temp = temp.right(6);
    dist = temp.toDouble();
    qDebug() << dist;
    distances[0] = dist;
    destinations[0] = item->text();
}

/*! shows checkout window after trip */
void confirmDenver::on_pushButton_clicked()
{
    checkoutWindow = new checkout(destinations,distances,1);
    checkoutWindow->show();
    this->close();
}

/*! close */
void confirmDenver::on_exitButton_clicked()
{
    close();
}
