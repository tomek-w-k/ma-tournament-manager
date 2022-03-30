#include "matournamentmanager.h"
#include "ui_matournamentmanager.h"

MATournamentManager::MATournamentManager(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MATournamentManager)
{
    ui->setupUi(this);
}

MATournamentManager::~MATournamentManager()
{
    delete ui;
}
