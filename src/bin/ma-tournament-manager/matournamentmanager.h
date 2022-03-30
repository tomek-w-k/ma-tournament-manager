#ifndef MATOURNAMENTMANAGER_H
#define MATOURNAMENTMANAGER_H

#include <QMainWindow>

namespace Ui {
class MATournamentManager;
}

class MATournamentManager : public QMainWindow
{
    Q_OBJECT

public:
    explicit MATournamentManager(QWidget *parent = nullptr);
    ~MATournamentManager();

private:
    Ui::MATournamentManager *ui;
};

#endif // MATOURNAMENTMANAGER_H
