#include "conference.h"
#include "ui_conference.h"
#include <QPixmap>

conference::conference(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::conference)
{
    ui->setupUi(this);
    myDB = QSqlDatabase::database();
    ui->comboBox->addItem("East");
    ui->comboBox->addItem("West");

    QPixmap pix(":/rec/graph.png");
    ui->label_pic->setPixmap(pix.scaled(561,491,Qt::KeepAspectRatio));
    defaultReset();
}

conference::~conference()
{
    delete ui;
}

void conference::conference::defaultReset()
{
    QSqlQueryModel * model = new QSqlQueryModel;
    model->setQuery("SELECT TeamName "
                    "FROM info WHERE NOT Conference = 'Western' "
                    "ORDER BY TeamName ");

    model->setHeaderData(2, Qt::Horizontal, QObject::tr("Team Name"));
    model->setHeaderData(7, Qt::Horizontal, QObject::tr(""));

    ui->conferenceTable->verticalHeader()->setVisible(false);
    ui->conferenceTable->setModel(model);

    QAbstractItemModel* tableModel= ui->conferenceTable->model();
    ui->conferenceTable->setColumnWidth(0,200);

    int w = ui->conferenceTable->verticalHeader()->width()+0;//change +4 if its too big or small
    for (int i = 0; i < tableModel->columnCount(); i++)
       w += ui->conferenceTable->columnWidth(i); // seems to include gridline

    ui->conferenceTable->setMinimumWidth(w);
    ui->conferenceTable->setMaximumWidth(w);
}

void conference::on_comboBox_currentIndexChanged(int index)
{
    QSqlQueryModel * model = new QSqlQueryModel;
    ui->conferenceTable->setColumnWidth(0,200);

    switch (index)
    {
    case 0: model->setQuery("SELECT TeamName FROM info WHERE NOT Conference = 'Western' ORDER BY TeamName ");
        break;
    case 1: model->setQuery("SELECT TeamName FROM info WHERE NOT Conference = 'Eastern' ORDER BY TeamName ");
        break;
    }
    ui->conferenceTable->setModel(model);
}
