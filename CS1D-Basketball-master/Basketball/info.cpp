#include "info.h"
#include "ui_info.h"
#include <QSqlQuery>
#include <QSql>


/*!
 ****************************************************************************
 * METHOD - info
 * --------------------------------------------------------------------------
 * This method is the constructor.
 * --------------------------------------------------------------------------
 * PRE-CONDITIONS
 *      Database must exist and be open.
 *
 * POST-CONDITIONS
 *      ==> Returns nothing.
 ***************************************************************************/
info::info(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::info)
{
    ui->setupUi(this);
    myDB = QSqlDatabase::database();

    defaultReset();
}

info::~info()
{
    delete ui;
}

/*! resets everything to its default values */
void info::info::defaultReset()
{
    QString start = ui->teamOptions->currentText();

    QSqlQueryModel * model = new QSqlQueryModel();
    model->setQuery("SELECT * FROM info WHERE TeamName = '"+start+"'");

    model->setHeaderData(2, Qt::Horizontal, QObject::tr("Team Name"));
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("Arena Name"));
    model->setHeaderData(5, Qt::Horizontal, QObject::tr("Stadium Capavity"));
    model->setHeaderData(6, Qt::Horizontal, QObject::tr("Date Joined"));

    ui->teamTable->verticalHeader()->setVisible(false);
//    ui->teamTable->setModel(model);

    QSqlQueryModel * list = new QSqlQueryModel();

    // Gets the teams in the database
    list->setQuery("SELECT DISTINCT TeamName "
                          "FROM info ");
    ui->teamOptions->setModel(list);

    QAbstractItemModel* tableModel= ui->teamTable->model();

    int w = ui->teamTable->verticalHeader()->width();//change +4 if its too big or small
    for (int i = 0; i < tableModel->columnCount(); i++)
       w += ui->teamTable->columnWidth(i); // seems to include gridline

    int h = ui->teamTable->horizontalHeader()->height()+4;//change +4 if its too big or small
    for (int i = 0; i < tableModel->rowCount(); i++)
       h += ui->teamTable->rowHeight(i);

    ui->teamTable->setMinimumWidth(w);
    ui->teamTable->setMaximumWidth(w);

    ui->teamTable->setMinimumHeight(h);
    ui->teamTable->setMaximumHeight(h);
}
