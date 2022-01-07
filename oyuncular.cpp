#include "oyuncular.h"
#include "ui_oyuncular.h"
#include "iostream"
Oyuncular::Oyuncular(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Oyuncular)
{
    ui->setupUi(this);
    this->setWindowTitle("Oyuncu Listesi");

}

Oyuncular::~Oyuncular()
{
    delete ui;
}
void Oyuncular::setAllTeams(vector<Takim>& a){
    allTeams = a;
    int countPlayer=0;
    for(Takim& as: allTeams){
        for (Oyuncu& os: as.getPlayers()) {
            countPlayer++;
        }
    }

    ui->tableWidget->setRowCount(countPlayer);
    ui->tableWidget->setSortingEnabled(true);
    for(Takim& as: allTeams){
        for (int i = 0; i < as.getPlayers().size() ; i++) {
            QTableWidgetItem *b;
            for (int j=0; j<7; j++) {
                b = new QTableWidgetItem;
                switch (j) {
                case 0:
                    b->setText(QString::fromStdString(as.getPlayers()[i].getName()));
                    break;
                case 1:
                    b->setText(QString::fromStdString(as.getName()));
                    break;
                case 2:
                    b->setText(QString::number(as.getPlayers()[i].getAge()));
                    break;
                case 3:
                    b->setText(QString::fromStdString(as.getPlayers()[i].getPosition()));
                    break;
                case 4:
                    b->setText(QString::number(as.getPlayers()[i].getFormaNumber()));
                    break;
                case 5:
                    b->setText(QString::number(as.getPlayers()[i].getPerformanceNumber()));
                    break;
                case 6:
                    b->setText(QString::fromStdString(as.getAbbr()));
                    break;
                }
                ui->tableWidget->setItem(countPlayer,j,b);
            }
            countPlayer--;
        }
    }
}
