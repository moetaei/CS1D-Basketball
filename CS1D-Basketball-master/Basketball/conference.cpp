#include "conference.h"
#include "ui_conference.h"

conference::conference(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::conference)
{
    ui->setupUi(this);
    myDB = QSqlDatabase::database();
    ui->comboBox->addItem("East");
    ui->comboBox->addItem("West");

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
                    "FROM info ORDER BY TeamName ");

    model->setHeaderData(2, Qt::Horizontal, QObject::tr("Team Name"));
    model->setHeaderData(7, Qt::Horizontal, QObject::tr(""));

    ui->conferenceTable->verticalHeader()->setVisible(false);
    ui->conferenceTable->setModel(model);

    QAbstractItemModel* tableModel= ui->conferenceTable->model();

    int w = ui->conferenceTable->verticalHeader()->width()+23;//change +4 if its too big or small
    for (int i = 0; i < tableModel->columnCount(); i++)
       w += ui->conferenceTable->columnWidth(i); // seems to include gridline

    ui->conferenceTable->setMinimumWidth(w);
    ui->conferenceTable->setMaximumWidth(w);
}
