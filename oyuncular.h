#ifndef OYUNCULAR_H
#define OYUNCULAR_H

#include <QDialog>
#include "takim.h"
#include <vector>
#include <string>
#include "oyuncu.h"
#include "QTableWidgetItem"

namespace Ui {
class Oyuncular;
}

class Oyuncular : public QDialog
{
    Q_OBJECT

public:
    explicit Oyuncular(QWidget *parent = nullptr);
    ~Oyuncular();
    void setAllTeams(vector<Takim>&);

private:
    Ui::Oyuncular *ui;
    vector<Takim> allTeams;
};

#endif // OYUNCULAR_H
