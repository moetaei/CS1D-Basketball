#include "confirmcustom2.h"
#include "ui_confirmcustom2.h"

confirmCustom2::confirmCustom2(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::confirmCustom2)
{
    ui->setupUi(this);
<<<<<<< Updated upstream
=======

    myDB = QSqlDatabase::database();

    ui->confirmListWidget->clear();
    ui->select->setEnabled(true);
    ui->customList->setEnabled(true);
    ui->confirmListWidget->setEnabled(false);
    ui->startCityComboBox->clear();
    cityList.clear();
    ui->confirm->setEnabled(false);

    defaultListView();
>>>>>>> Stashed changes
}

confirmCustom2::~confirmCustom2()
{
    delete ui;
}
<<<<<<< Updated upstream
=======

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

void confirmCustom2::sortCities()
{
    QString temp;
    /************************************************************************
     * PROCESS: Copy contents of customList (traveler's selected citites)
     *          into tempList (QVector <QString> array).
     ***********************************************************************/
    for(int i = 0; i < cityList.count(); i++)
    {
        temp = cityList.at(i)->text();
        sortedDest[i] = temp;
    }

    qDebug() << "size: " << cityNum;

    /************************************************************************
     * PROCESS: Check if traveler's selected startCity is index 0 in
     *          sortedDestinationList array.
     *          If startCity is not at index 0, swap position.
     ***********************************************************************/
    if(sortedDest[0] != startCity)
    {
        int index = 0;
        // Find index location of the startCity
        while(index < cityNum && sortedDest[index] != startCity)
        {
            index++;
        }
        temp = sortedDest[index];
        sortedDest[index] = sortedDest[0];
        sortedDest[0] = temp;
    }
    startCity = sortedDest[0];
    sortedDist[0] = 0;

    qDebug() << "start city: " << startCity;

    /************************************************************************
     * PROCESS: Sort array from index 1 to n (max index) -1.
     *          Index 0 is the start destination.
     *          Index n (max index for array) is last element, which does
     *              not require sorting.  It is the end.
     ***********************************************************************/
    for(int i = 1; i < (cityNum-1); i++)
    {
        bool isFound = false;
        int  j = i;

        // Create query for list of cities closest to the startCity in order
        // by distance.
        QSqlQuery sortQry;
        sortQry.prepare("SELECT * "
                        "FROM distances "
                        "WHERE Team1 = '"+startCity+"' "
                        "ORDER BY Distance");
        sortQry.exec();
        qDebug() << "hi";
        // Select first row of query and set closestCity to first item
        sortQry.next();
        closestCity = sortQry.value(2).toString();

        qDebug() << "The next closest city is: " << closestCity;

        /********************************************************************
         * PROCESS: Find next closestCity to the StartCity that is in the
         *          array sortedDestinationList.
         *******************************************************************/
        while(!isFound)
        {
            // Stay within array boundry
            if(j < cityNum)
            {
                // closestCity found
                if(closestCity == sortedDest[j])
                {
                    isFound = true;
                    qDebug() << "It matches next item in array: "
                             << closestCity << endl;
                }
                // Check next element in array
                else
                {
                    qDebug() << "It does not match next item in array: "
                             << sortedDest[j] << endl;
                    j++;
                }
            }
            // If out of array boundry, move to next row in query and make
            // that city the next closestCity
            else
            {
                j = i;
                sortQry.next();
                closestCity = sortQry.value(2).toString();
            }
        }

        // If closestCity is found in the array, do the swap
        if(isFound)
        {
            temp = sortedDest[j];
            sortedDest[j] = sortedDest[i];
            sortedDest[i] = temp;
            startCity = sortedDest[i];
            sortedDist[i] = sortQry.value(3).toInt();

            qDebug() << sortedDest[i];
        }

        qDebug() << "start city: " << startCity;
        if(i == 10)
        {
            qDebug() << sortedDest[0] << ' ' << sortedDest[1] << ' ' << sortedDest[2] << ' ' << sortedDest[3] << ' ' << sortedDest[4] << ' ' << sortedDest[5] << ' ' << endl
                     << sortedDest[6] << ' ' << sortedDest[7] << ' ' << sortedDest[8] << ' ' << sortedDest[9] << ' ' << sortedDest[10];
            return;
        }
    }

    closestCity = sortedDest[cityNum-1];

    // Last destination distance in list
    QSqlQuery qry;
    qry.prepare("SELECT * "
                "FROM distances "
                 "WHERE Team1 = '"+startCity+"' AND Team2 = '"+closestCity+"' "
                 "ORDER BY Distances ASC");
    qry.exec();
    // Select first row of query and set closestCity to first item
    qry.next();
    sortedDist[cityNum-1] = qry.value(3).toInt();
}

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

void confirmCustom2::on_cancel_clicked()
{
    this->close();
}

void confirmCustom2::on_select_clicked()
{
    // Stores selected items from availDestListWidget into customList
    cityList = ui->customList->selectedItems();
    cityNum = cityList.count();

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

void confirmCustom2::on_confirm_clicked()
{
    sortCities();
    for(int i =0; i < cityNum;i++)
        qDebug() << sortedDest[i];
}

void confirmCustom2::on_startCityComboBox_currentIndexChanged(int index)
{
    if(index != 0)
    {
        startCity = ui->startCityComboBox->currentText();
        ui->confirm->setEnabled(true);
    }
    else
    {
        ui->confirm->setEnabled(false);
    }
}
>>>>>>> Stashed changes
