#ifndef TAKIM_EKLE_H
#define TAKIM_EKLE_H
#include "takim.h"
#include <string>
#include "vector"

#include <QDialog>

namespace Ui {
class Takim_Ekle;
}

class Takim_Ekle : public QDialog
{
    Q_OBJECT

public:
    explicit Takim_Ekle(QWidget *parent = nullptr);
    ~Takim_Ekle();
    int insertNewTeam(string&,string&);
    void setAllTeams(vector<Takim>&);

private slots:
    void on_pushButton_clicked();

private:
    Ui::Takim_Ekle *ui;
    vector<Takim> allTeams;
};

#endif // TAKIM_EKLE_H
