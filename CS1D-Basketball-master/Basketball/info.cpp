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
    QSqlQueryModel * list = new QSqlQueryModel();

    // Gets the teams in the database
    list->setQuery("SELECT DISTINCT TeamName "
                          "FROM info ");
    ui->teamOptions->setModel(list);

    QString start = ui->teamOptions->currentText();

    QSqlQueryModel * model = new QSqlQueryModel();
    model->setQuery("SELECT * FROM info WHERE TeamName = '"+start+"'");

    model->setHeaderData(2, Qt::Horizontal, QObject::tr("Team Name"));
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("Arena Name"));
    model->setHeaderData(5, Qt::Horizontal, QObject::tr("Stadium Capacity"));
    model->setHeaderData(6, Qt::Horizontal, QObject::tr("Date Joined"));

    ui->tableView->setColumnWidth(0, 150);

    ui->tableView->verticalHeader()->setVisible(false);
    ui->tableView->setModel(model);


    QAbstractItemModel* tableModel= ui->tableView->model();

    int w = ui->tableView->verticalHeader()->width()+2;//change +4 if its too big or small
    for (int i = 0; i < tableModel->columnCount(); i++)
       w += ui->tableView->columnWidth(i); // seems to include gridline

    int h = ui->tableView->horizontalHeader()->height()+3;//change +4 if its too big or small
    for (int i = 0; i < tableModel->rowCount(); i++)
       h += ui->tableView->rowHeight(i);

    ui->tableView->setMinimumWidth(w);
    ui->tableView->setMaximumWidth(w);

    ui->tableView->setMinimumHeight(h);
    ui->tableView->setMaximumHeight(h);
}

void info::on_teamOptions_currentIndexChanged(const QString &arg1)
{
    QSqlQueryModel * model = new QSqlQueryModel();
    model->setQuery("SELECT * FROM info WHERE TeamName = '"+arg1+"'");
    ui->tableView->setModel(model);
}
