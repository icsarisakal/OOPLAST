#include "dialog.h"
#include "ui_dialog.h"
#include "iostream"
Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
    this->setWindowTitle("Puan Tablosu");
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::setAllTeams(vector<Takim> &a){
    allTeams = a;
    ui->tableWidget->setRowCount(allTeams.size());
    for (int i =0; i<allTeams.size();i++ ) {
        QTableWidgetItem *b;
        for(int j =0 ; j <8;j++){
            b = new QTableWidgetItem;
            switch (j) {
            case 0:
                b->setText(QString::number(allTeams[i].getCountWin()));
                break;
            case 1:
                b->setText(QString::fromStdString(allTeams[i].getName()));
                break;
            case 2:
                b->setText(QString::number(allTeams.size()-1));
                break;
            case 3:
                b->setText(QString::number(allTeams[i].getCountWin()));
                break;
            case 4:
                 b->setText(QString::number(allTeams[i].getCountDraw()));
                break;
            case 5:
                b->setText(QString::number(allTeams[i].getCountLose()));
                break;
            case 6:
                b->setText(QString::number(allTeams[i].getCountGoal()));
                break;
            case 7:
                b->setText(QString::number(allTeams[i].getLeaguePoint()));
                break;
            }
            ui->tableWidget->setItem(i,j,b);
        }

    }

}
