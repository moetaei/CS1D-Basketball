#include "confirmdenver.h"
#include "ui_confirmdenver.h"

/****************************************************************************
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
}

/****************************************************************************
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

    qry->prepare("SELECT TeamName "
                    "FROM info "
                    "ORDER BY TeamName ASC ");

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
