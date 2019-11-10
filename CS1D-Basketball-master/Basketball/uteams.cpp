#include "uTeams.h"
#include "ui_uTeams.h"


/****************************************************************************
 * METHOD - uTeams
 * --------------------------------------------------------------------------
 * This method is the constructor.
 * --------------------------------------------------------------------------
 * PRE-CONDITIONS
 *      Database must exist and be open.
 *
 * POST-CONDITIONS
 *      ==> Returns nothing.
 ***************************************************************************/
uTeams::uTeams(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::uTeams)
{
    ui->setupUi(this);
    myDB = QSqlDatabase::database();
    defaultReset();
}

uTeams::~uTeams()
{
    delete ui;
}

void uTeams::uTeams::defaultReset()
{
    QSqlQueryModel * model = new QSqlQueryModel;
}
