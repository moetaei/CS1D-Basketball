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
    ui->confirm->setEnabled(false);
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
                 "FROM info WHERE NOT CityName = 'Detroit' "
                 "ORDER BY TeamName ");

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

void ConfirmDetroit::sortCities()
{

}

/****************************************************************************
 * METHOD - on_cancel_clicked
 * --------------------------------------------------------------------------
 * This method clears the cities selected when this button is clicked.
 * --------------------------------------------------------------------------
 * PRE-CONDITIONS
 *      None.
 *
 * POST-CONDITIONS
 *      ==> Returns nothing.
 ***************************************************************************/
void ConfirmDetroit::on_cancel_clicked()
{
    ui->select->setEnabled(true);
    ui->confirm->setEnabled(false);
    ui->stackedWidget->setCurrentIndex(0);
}

/****************************************************************************
 * METHOD - on_select_clicked
 * --------------------------------------------------------------------------
 * This method changes to a different widget view so the traveler can see
 * their travel plan when this button is clicked.
 * --------------------------------------------------------------------------
 * PRE-CONDITIONS
 *      None.
 *
 * POST-CONDITIONS
 *      ==> Returns nothing.
 ***************************************************************************/
void ConfirmDetroit::on_select_clicked()
{
    ui->confirm->setEnabled(true);
    ui->select->setEnabled(false);
    ui->stackedWidget->setCurrentIndex(1);
}

/****************************************************************************
 * METHOD - on_confirm_clicked
 * --------------------------------------------------------------------------
 * This method clears the cities selected when this button is clicked.
 * --------------------------------------------------------------------------
 * PRE-CONDITIONS
 *      None.
 *
 * POST-CONDITIONS
 *      ==> Returns nothing.
 ***************************************************************************/
void ConfirmDetroit::on_confirm_clicked()
{

}
