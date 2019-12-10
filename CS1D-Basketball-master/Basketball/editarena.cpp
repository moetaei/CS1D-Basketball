#include "editarena.h"
#include "ui_editarena.h"

editarena::editarena(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::editarena)
{
    ui->setupUi(this);
}

editarena::~editarena()
{
    delete ui;
}
