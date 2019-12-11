#include "checkout.h"
#include "ui_checkout.h"
#include <QMessageBox>
#include <QSpinBox>
#include <QDebug>

/*!
 ****************************************************************************
 * METHOD - checkout
 * --------------------------------------------------------------------------
 * This method is a default constructor
 * --------------------------------------------------------------------------
 * PRE-CONDITIONS
 *      None.
 *
 * POST-CONDITIONS
 *      ==> Returns nothing.
 ***************************************************************************/
checkout::checkout(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::checkout)
{
    ui->setupUi(this);
}

/*!
 *****************************************************************************
 * METHOD - checkout
 * --------------------------------------------------------------------------
 * This method is a contructor that uses passed parameters.
 * --------------------------------------------------------------------------
 * PRE-CONDITIONS
 *      *cList: the list of selected destinations sorted
 *      *dList: the list of selected destination distances
 *      t:      the number of selected arenas
 *
 * POST-CONDITIONS
 *      ==> Returns nothing.
 ***************************************************************************/
checkout::checkout(QString* cList, double* dList, int t,
                                     QWidget *parent) :
    QWidget(parent), ui(new Ui::checkout), destinations(cList),
    distances(dList), total(t)
{
    ui->setupUi(this);

    // Initialize starting variables
    index         = 0;
    totalCost     = 0;
    totalDistance = 0;
    currCost      = 0;

    ui->totalCostLine->setText(QString::number(totalCost));
    ui->totalDistLine->setText(QString::number(totalDistance));
    ui->currDestCostLine->setText(QString::number(currCost));

    checkout::loadTables();
    ui->endVacationButton->setEnabled(false);
}

 /*!
 ****************************************************************************
 * METHOD - tTravelSimulation
 * --------------------------------------------------------------------------
 * This method is the destructor
 * --------------------------------------------------------------------------
 * PRE-CONDITIONS
 *      None.
 *
 * POST-CONDITIONS
 *      ==> Returns nothing.
 ***************************************************************************/
checkout::~checkout()
{
    delete ui;
}

 /*!
 ****************************************************************************
 * METHOD - loadTables
 * --------------------------------------------------------------------------
 * This method loads the destinations into the list view and sets default
 * starting view.
 * --------------------------------------------------------------------------
 * PRE-CONDITIONS
 *      None.
 *
 * POST-CONDITIONS
 *      ==> Returns nothing.
 ***************************************************************************/
void checkout::loadTables()
{
    for(int i = 0; i < total; i++)
    {
        qDebug() << destinations[i] << ' ' << distances[i];
        qDebug() << "Total: " << total;
        ui->destinationWidget->addItem(destinations[i]);
    }

    // Set colors
    font.setBold(true);
    ui->destinationWidget->item(index)->setFont(font);
    ui->destinationWidget->item(index)->setForeground(Qt::yellow);
    ui->destinationWidget->item(index)->setBackground(Qt::black);

    updateTable();
}
void checkout::setTables(QVector<int> route, QVector<double> distances, int cityNum)
{
    for(int i = 0; i < total; i++)
    {
        qDebug() << route[i] << ' ' << distances[i];
        qDebug() << "Total: " << total;
        ui->destinationWidget->addItem(datah.findCityName(route[i]));
    }

    // Set colors
    font.setBold(true);
    ui->destinationWidget->item(index)->setFont(font);
    ui->destinationWidget->item(index)->setForeground(Qt::yellow);
    ui->destinationWidget->item(index)->setBackground(Qt::black);

    updateTable();
}

 /*!
 ****************************************************************************
 * METHOD - updateTable
 * --------------------------------------------------------------------------
 * This method updates the item table view using values from the database
 * for the active arenas.
 * --------------------------------------------------------------------------
 * PRE-CONDITIONS
 *      Database must exist and be open.
 *
 * POST-CONDITIONS
 *      ==> Returns nothing.
 ***************************************************************************/
void checkout::updateTable()
{
    int row = 0;        // CALC - Used to count rows for displaying to table
    int rowCount = 0;   // CALC - Used for number of rows needed for table

    QString currCity = ui->destinationWidget->item(index)->text();
    ui->currCityLabel->setText(currCity);

    /************************************************************************
     * QUERY qryRows - Used to get the number of rows (rowCount) needed for
     *                 the table (foodTableWidget).
     ***********************************************************************/
    QSqlQuery qryRows;
    qryRows.prepare("SELECT item "
                    "FROM souvenirs ");

    // Count each row from the query
    qryRows.exec();
    while(qryRows.next())
    {
        rowCount++;
    }

    // Sets column and row
    ui->itemTableWidget->setColumnCount(3);
    ui->itemTableWidget->setRowCount(rowCount);
    // Sets name labels
    ui->itemTableWidget->setHorizontalHeaderItem(0, new QTableWidgetItem("Qty"));
    ui->itemTableWidget->setHorizontalHeaderItem(1, new QTableWidgetItem("Item"));
    ui->itemTableWidget->setHorizontalHeaderItem(2, new QTableWidgetItem("Price"));
    // Sets column widths
    ui->itemTableWidget->setColumnWidth(0, 50);
    ui->itemTableWidget->setColumnWidth(1, 200);
    ui->itemTableWidget->setColumnWidth(2, 50);

    /************************************************************************
     * QUERY qry - Used for displaying all food items and price into the
     *             table (foodTableWidget) for the current city (currCity).
     ***********************************************************************/
    QSqlQuery qry;
    qry.prepare("SELECT * "
                "FROM souvenirs ");

    if(qry.exec())
    {
        // Displays each row in foodTableWidget
        while(qry.next())
        {
            QTableWidgetItem *item1 = new QTableWidgetItem;
            item1->setFlags(item1->flags() ^ Qt::ItemIsEnabled);
            item1->setTextColor(Qt::black);

            QTableWidgetItem *item2 = new QTableWidgetItem;
            item2->setTextAlignment(Qt::AlignRight);
            item2->setFlags(item2->flags() ^ Qt::ItemIsEnabled);
            item2->setTextColor(Qt::black);
            item1->setText(qry.value(0).toString());
            item2->setText(QString::number(qry.value(1).toFloat(), 'f', 2));

            ui->itemTableWidget->setCellWidget(row,0, new QSpinBox(ui->itemTableWidget));
            ui->itemTableWidget->setItem(row, 1, item1);
            ui->itemTableWidget->setItem(row, 2, item2);
            row++;
        }
    }
    else
    {
       qDebug() << qry.lastError();
    }

    ui->nextDestButton->setEnabled(false);
}

/*!
 ****************************************************************************
 * METHOD - on_confirmFoodButton_clicked
 * --------------------------------------------------------------------------
 * This method generates the subtotal for the selected items for the
 * current arena.
 * --------------------------------------------------------------------------
 * PRE-CONDITIONS
 *      None.
 *
 * POST-CONDITIONS
 *      ==> Returns nothing.
 ***************************************************************************/
void checkout::on_confirmFoodButton_clicked()
{
    int i = 0;
    int itemQty = 0;
    float itemPrice = 0;
    currCost = 0;

    while(i < ui->itemTableWidget->rowCount())
    {
        itemQty = ui->itemTableWidget->cellWidget(i,0)->property("value").value<int>();
        itemPrice = (ui->itemTableWidget->item(i,2)->text()).toFloat();
        currCost = currCost + (itemQty * itemPrice);
        qDebug() << itemQty << " " << currCost;
    i++;
    }
    ui->currDestCostLine->setText(QString::number(currCost));
    ui->nextDestButton->setEnabled(true);
}

/*!
 ****************************************************************************
 * METHOD - on_nextDestButton_clicked
 * --------------------------------------------------------------------------
 * This method updates view for the next destination in the list.
 * --------------------------------------------------------------------------
 * PRE-CONDITIONS
 *      None.
 *
 * POST-CONDITIONS
 *      ==> Returns nothing.
 ***************************************************************************/
void checkout::on_nextDestButton_clicked()
{
    if(index+1 < total)
    {
        // Reset last dest to default in listWidget
        font.setBold(false);
        ui->destinationWidget->item(index)->setFont(font);
        ui->destinationWidget->item(index)->setForeground(Qt::black);
        ui->destinationWidget->item(index)->setBackground(Qt::white);

        // Update Index
        index++;

        // Set current dest to active in listWidget
        font.setBold(true);
        ui->destinationWidget->item(index)->setFont(font);
        ui->destinationWidget->item(index)->setForeground(Qt::yellow);
        ui->destinationWidget->item(index)->setBackground(Qt::black);

        updateTable();

        // Updates distance lines
        index--;
        totalDistance = totalDistance + distances[index];
        qDebug() << "hi: " << distances[index];
        index++;
        ui->totalDistLine->setText(QString::number(totalDistance));

        // Updates cost lines
        totalCost = totalCost + currCost;
        ui->totalCostLine->setText(QString::number(totalCost));

        // Reset values
        ui->currDestCostLine->clear();
        ui->nextDestButton->setEnabled(false);
        if(index+1 >= total)
        {
            ui->nextDestButton->setText("End Vacation");
        }
    }
    else
    {
        // Updates cost lines
        totalCost = totalCost + currCost;
        ui->totalCostLine->setText(QString::number(totalCost));

        // Reset values
        ui->currDestCostLine->clear();
        ui->nextDestButton->setEnabled(false);

        ui->endVacationButton->setEnabled(true);
        ui->exitSimulationButton->setEnabled(false);
    }

    if(total == 1)
    {
        totalDistance += distances[0];
        qDebug() << "hi" << totalDistance;
        ui->totalDistLine->setText(QString::number(totalDistance));
    }
}

 /*!
 ****************************************************************************
 * METHOD - on_exitVacationButton_clicked
 * --------------------------------------------------------------------------
 * This method allows te traveler to exit the checkout in the middle of the
 * process
 * --------------------------------------------------------------------------
 * PRE-CONDITIONS
 *      None
 *
 * POST-CONDITIONS
 *      ==> Returns nothing.
 ***************************************************************************/
void checkout::on_exitSimulationButton_clicked()
{
    this->close();
}

 /*!
 ****************************************************************************
 * METHOD - on_endVacationButton_clicked
 * --------------------------------------------------------------------------
 * This method ends the checkout upon completion of the process.
 * --------------------------------------------------------------------------
 * PRE-CONDITIONS
 *      None
 *
 * POST-CONDITIONS
 *      ==> Returns nothing.
 ***************************************************************************/
void checkout::on_endVacationButton_clicked()
{
    this->close();
}
