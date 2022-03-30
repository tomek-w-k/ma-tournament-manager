#include "matournamentmanager.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MATournamentManager w;
    w.show();

    return a.exec();
}
