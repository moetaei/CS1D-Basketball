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

    qry->prepare("SELECT DISTINCT Team1 "
                 "FROM distances "
                 "WHERE NOT Team1 = 'Detroit Pistons' ");

    if(qry->exec())
    {
        while(qry->next())
        {
            cityNum++;
            cityName = qry->value(0).toString();
            ui->detroitList->addItem(cityName);
            customList.push_back(cityName);
//            qDebug() << cityName;
        }
    }
    else
    {
        qDebug() << ("confirmDetroit Error: qry failed.");
        return;
    }
//    customList.push_back(startCity);
//    qDebug() << customList.at(cityNum);
    qDebug() << cityNum;
    delete sortedDest;
    delete sortedDist;
    sortedDest = new QString[cityNum];
    sortedDist = new float[cityNum];
    sortedDest[0] = startCity;
    sortedDist[0] = 0;

    sortCities();
//    int tst = asd.calcMst("Detroit Pistons");
//    qDebug() << tst;

    for (int i = 0; i < cityNum ; i++)
    {
        ui->detroitList->addItem(customList.at(i));
        qDebug() << customList.at(i);
    }
}

//! sorts array of teams
void ConfirmDetroit::sortCities()
{
    QString temp;
    stack<float> smallest;
    float tempDist[cityNum];
//        QString tempDest[cityNum]/* = {*sortedDest}*/;
    QString output = "";
    stack<QString> tempDest;

    qDebug() << "size: " << cityNum;

//    startCity = sortedDest[0];
//    sortedDist[0] = 0;


    /************************************************************************
     * PROCESS: Sort array from index 1 to n (max index) -1.
     *          Index 0 is the start destination.
     *          Index n (max index for array) is last element, which does
     *              not require sorting.  It is the end.
     ***********************************************************************/
    for(int i = 1; i < (cityNum); i++)
    {
        qDebug() << "start city: " << startCity;
        for(int k = 0; k < cityNum-1; k++)
        {
            qDebug() << "get dist" << customList[k];
            graf.shortestPath(datah.findCityIndex(startCity),datah.findCityIndex(customList[k]), output);
            qDebug() << "got dist";
            output = output.right(6);
            output.remove(QChar('e'));
            output.remove(QChar(' '));
            output.remove(QChar(':'));
//            qDebug() << output;
            tempDist[k] = output.toFloat();
            output = "";
//            qDebug() << tempDist[k] << customList[k];
        }

//        return;

        qDebug() << "hi";
        smallest.push(tempDist[0]);
        for(int k = 0; k < cityNum-1; k++)
        {
            if(smallest.top() >= tempDist[k])
            {
                smallest.push(tempDist[k]);
                temp = customList[k];
                tempDest.push(customList[k]);
                qDebug() << tempDest.top();
            }
        }

        closestCity = tempDest.top();

        qDebug() << "The next closest city is: " << closestCity;

       /************************************************************************
        * PROCESS: checks if the the city in idValue is in the
        *          sortedDestinations array and selects the next closest city
        *          if they are the same. Checks every city in the array
        ***********************************************************************/
        for(int k = 0; k < i; k++)
        {
            qDebug() << k;
            if(closestCity==sortedDest[k])
            {
                qDebug() << closestCity << sortedDest[k];
                tempDest.pop();
                smallest.pop();
                closestCity = tempDest.top();
                k = -1;
            }
        }
        qDebug() << i;

        sortedDest[i] = closestCity;
        sortedDist[i] = smallest.top();
        startCity = closestCity;
//        customList.removeOne(closestCity);

        qDebug() << sortedDest[i];

//        if(i == 10)
//        {
//            qDebug() << sortedDest[0] << ' ' << sortedDest[1] << ' ' << sortedDest[2] << ' ' << sortedDest[3] << ' ' << sortedDest[4] << ' ' << sortedDest[5] << ' ' << endl
//                     << sortedDest[6] << ' ' << sortedDest[7] << ' ' << sortedDest[8] << ' ' << sortedDest[9] << ' ' << sortedDest[10];
//        }
    }

//    closestCity = sortedDest[cityNum-1];

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

/*!
 ****************************************************************************
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
    ui->confirm->setEnabled(false);
}

/*!
 ****************************************************************************
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
void ConfirmDetroit::on_confirm_clicked()
{

}

/*! close window */
void ConfirmDetroit::on_exitButton_clicked()
{
    close();
}
