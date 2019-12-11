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
//            ui->detroitList->addItem(cityName);
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
    sortedDist = new double[cityNum];
    sortedDest[0] = startCity;
    sortedDist[0] = 0;

    qDebug() << "size: " << cityNum;

    sortCities();

    for (int i = 0; i < cityNum ; i++)
    {
        qDebug() << sortedDest[i];
        ui->detroitList->addItem(sortedDest[i]);
    }
}

//! sorts array of teams
void ConfirmDetroit::sortCities()
{
    queue<double> smallest;
    QString output = "";
    queue<QString> tempDest;

    qDebug() << "size: " << cityNum;

    /************************************************************************
     * PROCESS: Sort array from index 1 to n (max index) -1.
     *          Index 0 is the start destination.
     *          Index n (max index for array) is last element, which does
     *              not require sorting.  It is the end.
     ***********************************************************************/
    int src = datah.findCityIndex(startCity);
    int d = src;
    int i = 0;
    while(i < datah.getSizeC())
    {
        //graf.shortestPath1(d, output, d);
//        qDebug() << output;
        smallest.push(output.toDouble());
        tempDest.push(datah.findCityName(d));
//        qDebug() << smallest.back() << tempDest.back();

        output = "";
        i++;
    }

    double f;
    QString s;
    for(int j = 1; j < datah.getSizeC(); j++)
    {
        s = tempDest.front();
        f = smallest.front();

        sortedDest[j] = s;
        sortedDist[j] = f;
        tempDest.pop();
        smallest.pop();
//        qDebug() << sortedDest[i] << sortedDist[i];
        qDebug() << f << s << j;
    }
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
    this->close();
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
    checkoutWindow = new checkout(sortedDest,sortedDist, cityNum);
    checkoutWindow->show();
    this->close();
}

