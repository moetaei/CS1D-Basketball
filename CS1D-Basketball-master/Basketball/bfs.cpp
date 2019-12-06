#include "bfs.h"
#include "ui_bfs.h"

bfs::bfs(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::bfs)
{
    ui->setupUi(this);
}

bfs::~bfs()
{
    delete ui;
}

void bfs::setText()
{
    QString output = "";
    double distance = 0;
    double total = 0;
    graf.setDijEdges();
    graf.reset();
    graf.BFS(datah.findCityIndex("Los Angeles Lakers"));
    ui->path->setText(output + '\n' + '\n' + "TOTAL DISTANCE: " + QString::number(total));
}

void bfs::on_exit_clicked()
{
    close();
}
