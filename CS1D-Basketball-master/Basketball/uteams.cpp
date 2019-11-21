#include "uTeams.h"
#include "ui_uTeams.h"
#include <QSqlQuery>
#include <QSql>


/****************************************************************************
 * METHOD - uTeams
 * --------------------------------------------------------------------------
 * This method is the constructor.
 * --------------------------------------------------------------------------
 * PRE-CONDITIONS
 *      Database must exist and be open.
 *
 * POST-CONDITIONS
 *      ==> Returns nothing.
 ***************************************************************************/
uTeams::uTeams(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::uTeams)
{
    ui->setupUi(this);

    myDB = QSqlDatabase::database();

    defaultReset();
}

/****************************************************************************
 * METHOD - ~uTeams
 * --------------------------------------------------------------------------
 * This method is the destructor.
 * --------------------------------------------------------------------------
 * PRE-CONDITIONS
 *      None
 *
 * POST-CONDITIONS
 *      ==> Returns nothing.
 ***************************************************************************/
uTeams::~uTeams()
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
void uTeams::uTeams::defaultReset()
{
    QSqlQueryModel * model = new QSqlQueryModel;
    model->setQuery("SELECT * FROM info ");

    QSqlQuery qry;
    qry.prepare("SELECT * "
                "FROM info ");
    qry.exec();
    qry.next();
    QString t = qry.value(1).toString();
    qDebug() << t;

    ui->uTeamsTable->verticalHeader()->setVisible(false);
    ui->uTeamsTable->setModel(model);

    QAbstractItemModel* tableModel= ui->uTeamsTable->model();

    int w = ui->uTeamsTable->verticalHeader()->width()+23;//change +4 if its too big or small
    for (int i = 0; i < tableModel->columnCount(); i++)
       w += ui->uTeamsTable->columnWidth(i); // seems to include gridline

//    int h = ui->uTeamsTable->horizontalHeader()->height()+4;//change +4 if its too big or small
//    for (int i = 0; i < tableModel->rowCount(); i++)
//       h += ui->uTeamsTable->rowHeight(i);

    ui->uTeamsTable->setMinimumWidth(w);
    ui->uTeamsTable->setMaximumWidth(w);

//    ui->uTeamsTable->setMinimumHeight(h);
//    ui->uTeamsTable->setMaximumHeight(h);
}
