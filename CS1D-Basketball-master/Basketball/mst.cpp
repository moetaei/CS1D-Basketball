#include "mst.h"
#include "ui_mst.h"

mst::mst(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::mst)
{
    ui->setupUi(this);
}

mst::~mst()
{
    delete ui;
}
void mst::setLabel()
{
    QString output = "";
    graf.calcMst(output);
    ui->path->setText(output);
}
void mst::on_exit_clicked()
{
    close();
}
