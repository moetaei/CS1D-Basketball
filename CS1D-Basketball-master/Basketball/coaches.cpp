#include "coaches.h"
#include "ui_coaches.h"

/****************************************************************************
 * METHOD - coaches
 * --------------------------------------------------------------------------
 * This method is the constructor.
 * --------------------------------------------------------------------------
 * PRE-CONDITIONS
 *      Database must exist and be open.
 *
 * POST-CONDITIONS
 *      ==> Returns nothing.
 ***************************************************************************/
coaches::coaches(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::coaches)
{
    ui->setupUi(this);
    myDB = QSqlDatabase::database();

    defaultReset();
}

coaches::~coaches()
{
    delete ui;
}

/****************************************************************************
 * METHOD - defaltReset
 * --------------------------------------------------------------------------
 * This method accesses the database and queries... It also dynamicly sets the size of the table to fit the data.
 * --------------------------------------------------------------------------
 * PRE-CONDITIONS
 *      No parameters are required.
 *
 * POST-CONDITIONS
 *      ==> Returns nothing.
 *      ==> Populates the destination table view with ...
 ***************************************************************************/
void coaches::coaches::defaultReset()
{
    QSqlQueryModel * model = new QSqlQueryModel;
    model->setQuery("SELECT TeamName,Coach "
                    "FROM info ORDER BY TeamName ");

    model->setHeaderData(2, Qt::Horizontal, QObject::tr("Team Name"));
    model->setHeaderData(7, Qt::Horizontal, QObject::tr("Coach"));

    ui->coachTable->verticalHeader()->setVisible(false);
    ui->coachTable->setModel(model);

    QAbstractItemModel* tableModel= ui->coachTable->model();

    int w = ui->coachTable->verticalHeader()->width()+23;//change +4 if its too big or small
    for (int i = 0; i < tableModel->columnCount(); i++)
       w += ui->coachTable->columnWidth(i); // seems to include gridline

//    int h = ui->uTeamsTable->horizontalHeader()->height()+4;//change +4 if its too big or small
//    for (int i = 0; i < tableModel->rowCount(); i++)
//       h += ui->uTeamsTable->rowHeight(i);

    ui->coachTable->setMinimumWidth(w);
    ui->coachTable->setMaximumWidth(w);

//    ui->uTeamsTable->setMinimumHeight(h);
//    ui->uTeamsTable->setMaximumHeight(h);
}
