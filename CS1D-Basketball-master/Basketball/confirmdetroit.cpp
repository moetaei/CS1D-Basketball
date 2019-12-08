#include "confirmdetroit.h"
#include "ui_confirmdetroit.h"

ConfirmDetroit::ConfirmDetroit(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ConfirmDetroit)
{
    ui->setupUi(this);
<<<<<<< Updated upstream
=======

    myDB = QSqlDatabase::database();
    defaultListView();
>>>>>>> Stashed changes
}

ConfirmDetroit::~ConfirmDetroit()
{
    delete ui;
}
<<<<<<< Updated upstream
=======

void ConfirmDetroit::defaultListView()
{
    QString cityName;
    QSqlQuery * qry = new QSqlQuery(myDB);

    qry->prepare("SELECT DISTINCT Team1 "
                 "FROM distances "
                 /*"WHERE NOT Team1 = 'Detroit Pistons' "*/);

    if(qry->exec())
    {
        while(qry->next())
        {
            cityNum++;
            cityName = qry->value(0).toString();
            ui->confirmListWidget->addItem(cityName);
            customList.push_back(cityName);
//            qDebug() << cityName;
        }
    }
    else
    {
        qDebug() << ("confirmDetroit Error: qry failed.");
        return;
    }
    qDebug() << customList.at(cityNum-1);
    qDebug() << cityNum;
    delete sortedDest;
    delete sortedDist;
    sortedDest = new QString[cityNum];
    sortedDist = new float[cityNum];

//    sortCities();
//    int tst = asd.calcMst("Detroit Pistons");
//    qDebug() << tst;

    for (int i = 0; i < cityNum ; i++)
    {
        ui->confirmListWidget->addItem(customList.at(i));
    }
}

void ConfirmDetroit::sortCities()
{
    QString temp;
    /************************************************************************
     * PROCESS: Copy contents of customList (traveler's selected citites)
     *          into tempList (QVector <QString> array).
     ***********************************************************************/
    for(int i = 0; i < customList.count(); i++)
    {
        temp = customList.at(i);
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
    this->close();
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
>>>>>>> Stashed changes
