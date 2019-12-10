#include "divisions.h"
#include "ui_divisions.h"

divisions::divisions(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::divisions)
{
    ui->setupUi(this);
    myDB = QSqlDatabase::database();

    ui->comboBox->addItem("Northwest");
    ui->comboBox->addItem("Southwest");
    ui->comboBox->addItem("Southeast");
    ui->comboBox->addItem("Pacific");
    ui->comboBox->addItem("Central");
    ui->comboBox->addItem("Atlantic");
    defaultReset();
}

divisions::~divisions()
{
    delete ui;
}

void divisions::divisions::defaultReset()
{
    QSqlQueryModel * model = new QSqlQueryModel;
    model->setQuery("SELECT TeamName "
                    "FROM info WHERE NOT Division = 'Southwest' "
                    "AND NOT Division = 'Pacific' "
                    "AND NOT Division = 'Southeast' "
                    "AND NOT Division = 'Central' "
                    "AND NOT Division = 'Atlantic' "
                    "ORDER BY TeamName ");

    model->setHeaderData(2, Qt::Horizontal, QObject::tr("Team Name"));
    model->setHeaderData(7, Qt::Horizontal, QObject::tr(""));

    ui->tableWidget->verticalHeader()->setVisible(false);
    ui->tableWidget->setModel(model);

    QAbstractItemModel* tableModel= ui->tableWidget->model();
    ui->tableWidget->setColumnWidth(0,150);

    int w = ui->tableWidget->verticalHeader()->width()+0;//change +4 if its too big or small
    for (int i = 0; i < tableModel->columnCount(); i++)
       w += ui->tableWidget->columnWidth(i); // seems to include gridline

    int h = ui->tableWidget->horizontalHeader()->height()+0;//change +4 if its too big or small
    for (int i = 0; i < tableModel->rowCount(); i++)
        h += ui->tableWidget->rowHeight(i);

    ui->tableWidget->setMinimumWidth(w);
    ui->tableWidget->setMaximumWidth(w);

    ui->tableWidget->setMinimumHeight(h);
    ui->tableWidget->setMaximumHeight(h);
}

void divisions::on_comboBox_currentIndexChanged(int index)
{
    QSqlQueryModel * model = new QSqlQueryModel;
    ui->tableWidget->setColumnWidth(0,200);

    switch (index){

    case 0: model->setQuery("SELECT TeamName "
                            "FROM info WHERE NOT Division = 'Southwest' "
                            "AND NOT Division = 'Pacific' "
                            "AND NOT Division = 'Southeast' "
                            "AND NOT Division = 'Central' "
                            "AND NOT Division = 'Atlantic' "
                            "ORDER BY TeamName ");
        break;
    case 1: model->setQuery("SELECT TeamName "
                            "FROM info WHERE NOT Division = 'Northwest' "
                            "AND NOT Division = 'Pacific' "
                            "AND NOT Division = 'Southeast' "
                            "AND NOT Division = 'Central' "
                            "AND NOT Division = 'Atlantic' "
                            "ORDER BY TeamName ");
        break;
    case 2: model->setQuery("SELECT TeamName "
                            "FROM info WHERE NOT Division = 'Southwest' "
                            "AND NOT Division = 'Pacific' "
                            "AND NOT Division = 'Northwest' "
                            "AND NOT Division = 'Central' "
                            "AND NOT Division = 'Atlantic' "
                            "ORDER BY TeamName ");
        break;
    case 3: model->setQuery("SELECT TeamName "
                            "FROM info WHERE NOT Division = 'Southwest' "
                            "AND NOT Division = 'Northwest' "
                            "AND NOT Division = 'Southeast' "
                            "AND NOT Division = 'Central' "
                            "AND NOT Division = 'Atlantic' "
                            "ORDER BY TeamName ");
        break;
    case 4: model->setQuery("SELECT TeamName "
                            "FROM info WHERE NOT Division = 'Southwest' "
                            "AND NOT Division = 'Pacific' "
                            "AND NOT Division = 'Southeast' "
                            "AND NOT Division = 'Northwest' "
                            "AND NOT Division = 'Atlantic' "
                            "ORDER BY TeamName ");
        break;
    case 5: model->setQuery("SELECT TeamName "
                            "FROM info WHERE NOT Division = 'Southwest' "
                            "AND NOT Division = 'Pacific' "
                            "AND NOT Division = 'Southeast' "
                            "AND NOT Division = 'Central' "
                            "AND NOT Division = 'Northwest' "
                            "ORDER BY TeamName ");
        break;
    }
    ui->tableWidget->setModel(model);
}
