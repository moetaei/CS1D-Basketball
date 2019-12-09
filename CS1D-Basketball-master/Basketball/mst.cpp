#include "mst.h"
#include "ui_mst.h"

mst::mst(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::mst)
{
    ui->setupUi(this);
}

//! destructor
mst::~mst()
{
    delete ui;
}

/*! Displays the results from the MST to ui label */
void mst::setLabel()
{
    QString output = "";
    graf.calcMst(output);
    ui->path->setText(output);
}

/*! Closes the MST window and goes back to user menu */
void mst::on_exit_clicked()
{
    close();
}
