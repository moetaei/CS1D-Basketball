#include "arenas.h"
#include "ui_arenas.h"

arenas::arenas(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::arenas)
{
    ui->setupUi(this);

    myDB = QSqlDatabase::database();
    defaultReset();
}

arenas::~arenas()
{
    delete ui;
}

void arenas::arenas::defaultReset()
{
    QSqlQueryModel * model = new QSqlQueryModel;
    model->setQuery("SELECT TeamName,ArenaName,StadiumCapacity "
                    "FROM info ORDER BY StadiumCapacity ");

    model->setHeaderData(0, Qt::Horizontal, QObject::tr("Team Name"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("Arena Name"));

    ui->arenaTable->verticalHeader()->setVisible(false);
    ui->arenaTable->setModel(model);

    QAbstractItemModel* tableModel= ui->arenaTable->model();

    int w = ui->arenaTable->verticalHeader()->width()+23;//change +4 if its too big or small
    for (int i = 0; i < tableModel->columnCount(); i++)
       w += ui->arenaTable->columnWidth(i); // seems to include gridline

    ui->arenaTable->setMinimumWidth(w);
    ui->arenaTable->setMaximumWidth(w);
}
