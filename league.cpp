#include "league.h"
#include "./ui_league.h"
#include "iostream"
League::League(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::League)
{
    ui->setupUi(this);
}

League::~League()
{
    delete ui;
}


void League::on_pushButton_clicked() // Puan Durumu
{
    Dialog dialog;
    dialog.setAllTeams(allTeams);
    dialog.setModal(true);
    dialog.exec();
}


void League::on_pushButton_2_clicked()  //Fikstür
{
    Fikstur fikstur;
    fikstur.setAllTeams(allTeams);
    fikstur.setAllMatchs(allMatchs);
    fikstur.setModal(true);
    fikstur.exec();
}


void League::on_pushButton_6_clicked() // Takımlar
{
    Takimlar takimlar;
    takimlar.setAllTeams(allTeams);
    takimlar.setModal(true);
    takimlar.exec();
}


void League::on_pushButton_3_clicked() // Oyuncular
{
    Oyuncular oyuncular;
    oyuncular.setAllTeams(allTeams);
    oyuncular.setModal(true);
    oyuncular.exec();
}


void League::on_pushButton_5_clicked() // Takım Ekle
{
    Takim_Ekle takim_ekle;
    takim_ekle.setAllTeams(allTeams);
    takim_ekle.setModal(true);
    takim_ekle.exec();

}


void League::on_pushButton_4_clicked() // Oyuncu Ekle
{
    Oyuncu_Ekle oyuncu_ekle;
    oyuncu_ekle.setModal(true);
    oyuncu_ekle.exec();
}
void League::setAllTeams(vector<Takim> &a){

    allTeams = a;

}
void League::setAllMatchs(vector<vector<Mac>> &a){

    allMatchs = a;

}

