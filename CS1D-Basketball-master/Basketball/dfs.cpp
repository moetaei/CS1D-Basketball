#include "dfs.h"
#include "ui_dfs.h"

dfs::dfs(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::dfs)
{
    ui->setupUi(this);
}

dfs::~dfs()
{
    delete ui;
}
void dfs::setText()
{
    //graf.setMST();
   // graf.printMST();
    QString output = "";
    double distance = 0;
    double total = 0;
    graf.setDFSEdges();
    graf.reset();
    graf.DFS(datah.findCityIndex("Orlando Magic"), output, distance, total);
    ui->path->setText(output + '\n' + '\n' + "TOTAL DISTANCE: " + QString::number(total));
}
void dfs::on_exit_clicked()
{
    close();
}
