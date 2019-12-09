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

/*! Displays the results from the BFS search to ui */
void bfs::setText()
{
    QString output = "";
    graf.setBFS();
    graf.setBFSEdges();
    graf.BFS(datah.findCityIndex("Los Angeles Lakers"));
    graf.printBFS(output);
    ui->path->setText(output + '\n' + '\n' + "TOTAL DISTANCE: " + QString::number(graf.getTotalDistance()));
}

/*! Closes the bfs window and goes back to user menu */
void bfs::on_exit_clicked()
{
    close();
}
