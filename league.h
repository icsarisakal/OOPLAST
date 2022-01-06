#ifndef LEAGUE_H
#define LEAGUE_H

#include <QMainWindow>
#include "dialog.h"
#include "fikstur.h"
#include "takim_ekle.h"
#include "takimlar.h"
#include "oyuncu_ekle.h"
#include "oyuncular.h"
#include <takim.h>
#include "vector"
#include "mac.h"

QT_BEGIN_NAMESPACE
namespace Ui { class League; }
QT_END_NAMESPACE

class League : public QMainWindow
{
    Q_OBJECT

public:
    League(QWidget *parent = nullptr);
    ~League();
    void setAllTeams(vector<Takim>&);
    void setAllMatchs(vector<vector<Mac>>&);

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_4_clicked();

private:
    Ui::League *ui;
    vector<Takim> allTeams;
    vector<vector<Mac>> allMatchs;
};
#endif // LEAGUE_H
