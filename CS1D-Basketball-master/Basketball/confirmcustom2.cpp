#include "confirmcustom2.h"
#include "ui_confirmcustom2.h"

confirmCustom2::confirmCustom2(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::confirmCustom2)
{
    ui->setupUi(this);

    myDB = QSqlDatabase::database();

    ui->confirmListWidget->clear();
    ui->select->setEnabled(true);
    ui->customList->setEnabled(true);
    ui->confirmListWidget->setEnabled(false);
//    ui->startCityComboBox->clear();
    cityList.clear();
    ui->confirm->setEnabled(false);

    defaultListView();
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

/*! Sorts the teams in the list */
void confirmCustom2::sortCities()
{
    QVector<double> total;
    QVector<bool> checker;
    QVector<int> cityChoice;
    QVector<int> route;
    qDebug() << "size: " << cityNum;

    /************************************************************************
     * PROCESS: Sort array from index 1 to n (max index) -1.
     *          Index 0 is the start destination.
     *          Index n (max index for array) is last element, which does
     *              not require sorting.  It is the end.
     ***********************************************************************/
    for(int i = 0; i < cityList.size(); i++)
    {
        cityChoice.push_back(datah.findCityIndex(cityList.at(i)->text()));
        checker.push_back(false);
    }
    graf.efficientPath(route,total,cityChoice,checker,cityChoice[0]);

    checkoutWindow->setTables(route,total);
}

/*! Changes the values to default values */
void confirmCustom2::on_reset_clicked()
{
    ui->customList->reset();
    ui->stackedWidget->setCurrentIndex(0);

    ui->confirmListWidget->clear();
    ui->select->setEnabled(true);
    ui->customList->setEnabled(true);
    ui->confirmListWidget->setEnabled(false);
    ui->startCityComboBox->clear();
    cityList.clear();

    ui->confirm->setEnabled(false);
}

/*! close window */
void confirmCustom2::on_cancel_clicked()
{
    this->close();
}

/*! prepares for sorting and moves on to ask the user for the starting point */
void confirmCustom2::on_select_clicked()
{
    // Stores selected items from availDestListWidget into customList
    cityList = ui->customList->selectedItems();
    cityNum = cityList.count();
    delete sortedDest;
    delete sortedDist;
    sortedDest = new QString[cityNum];
    sortedDist = new double[cityNum];

    // Must have at least two cities selected to be valid
    if(cityNum >= 2)
    {
        ui->startCityComboBox->addItem(" ");

        // Load list and combo box with selected cities
        for(int i = 0; i < cityNum; i++)
        {
            ui->confirmListWidget->addItem(cityList.at(i)->text());
            ui->startCityComboBox->addItem(cityList.at(i)->text());
            qDebug() << "selected item : " << cityList.at(i)->text()
                     << " , row number id " << ui->customList->row(cityList.at(i));
        }

        // Update button and widget
        ui->select->setEnabled(false);
        ui->customList->setEnabled(false);
        ui->confirmListWidget->setEnabled(true);
        ui->stackedWidget->setCurrentIndex(1);
    }
}

/*!
 ****************************************************************************
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
void confirmCustom2::on_confirm_clicked()
{
        checkoutWindow = new checkout;
        sortCities();
        qDebug() << "END";
        checkoutWindow->show();
        this->close();
}

void confirmCustom2::on_startCityComboBox_currentIndexChanged(int index)
{
    if(index != 0)
    {
        startCity = ui->startCityComboBox->currentText();
        sortedDest[0] = startCity;
        sortedDist[0] = 0;
        ui->confirm->setEnabled(true);
    }
    else
    {
        ui->confirm->setEnabled(false);
    }
}
