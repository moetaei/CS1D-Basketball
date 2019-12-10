#include "uTeams.h"
#include "ui_uTeams.h"
#include <QSqlQuery>
#include <QSql>
#include <QPixmap>

/*!
 ****************************************************************************
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

    QPixmap pix(":/rec/graph.png");
    ui->label_pic->setPixmap(pix.scaled(561,491,Qt::KeepAspectRatio));


    myDB = QSqlDatabase::database();
    ui->sortBox->addItem("A-Z");
    ui->sortBox->addItem("year");

    defaultReset();
}

/*!
 ****************************************************************************
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

/*!
 ****************************************************************************
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
    model->setQuery("SELECT TeamName,ArenaName,JoinedLeague "
                    "FROM info ORDER BY TeamName ");

    QSqlQuery qry;
    qry.prepare("SELECT * "
                "FROM info ");
    qry.exec();
    qry.next();
    QString t = qry.value(1).toString();
    qDebug() << t;

    model->setHeaderData(2, Qt::Horizontal, QObject::tr("Team Name"));
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("Arena Name"));
    model->setHeaderData(5, Qt::Horizontal, QObject::tr("Stadium Capavity"));
    model->setHeaderData(6, Qt::Horizontal, QObject::tr("Date Joined"));

    ui->uTeamsTable->verticalHeader()->setVisible(false);
    ui->uTeamsTable->setModel(model);

    QAbstractItemModel* tableModel= ui->uTeamsTable->model();

    int w = ui->uTeamsTable->verticalHeader()->width();//change +4 if its too big or small
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

void uTeams::on_sortBox_currentIndexChanged(int index)
{
    QSqlQueryModel * model = new QSqlQueryModel;

    switch (index)
    {
    case 0: model->setQuery("SELECT TeamName,ArenaName,JoinedLeague FROM info ORDER BY TeamName ");
        break;
    case 1: model->setQuery("SELECT TeamName,ArenaName,JoinedLeague FROM info ORDER BY JoinedLeague ASC ");
        break;
    }
    ui->uTeamsTable->setModel(model);
}
