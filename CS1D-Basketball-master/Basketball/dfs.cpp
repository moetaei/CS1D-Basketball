#include "dfs.h"
#include "ui_dfs.h"

dfs::dfs(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::dfs)
{
    ui->setupUi(this);
}

//! destructor
dfs::~dfs()
{
    delete ui;
}

/*! Displays the results from the DFSMST to ui text */
void dfs::setText()
{
    QString output = "";
    double distance = 0;
    double total = 0;
    graf.reset();
    graf.DFS(datah.findCityIndex("Orlando Magic"), output, distance, total);
    ui->path->setText(output + '\n' + '\n' + "TOTAL DISTANCE: " + QString::number(total));
}

/*! Closes the DFS window and goes back to user menu */
void dfs::on_exit_clicked()
{
    close();
}
