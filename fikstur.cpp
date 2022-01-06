#include "fikstur.h"
#include "ui_fikstur.h"
#include <iostream>
#include <mac_bilgi_ekrani.h>
#include <QListWidgetItem>
#include "QMessageBox"
using namespace std;

int Fikstur::extractIntegerWords(string str)
{
    stringstream ss;

    /* Storing the whole string into string stream */
    ss << str;

    /* Running loop till the end of the stream */
    string temp;
    int found;
    while (!ss.eof()) {

        /* extracting word by word from stream */
        ss >> temp;

        /* Checking the given word is integer or not */
        if (stringstream(temp) >> found)
            return found;

        /* To save from space at the end of string */
        temp = "";
    }
}

Fikstur::Fikstur(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Fikstur)
{
    ui->setupUi(this);
    this->setWindowTitle("Fikstür");
}

Fikstur::~Fikstur()
{
    delete ui;
}

void Fikstur::on_listWidget_itemClicked(QListWidgetItem *item)
{
//    mac_bilgi_ekrani ekrani;
//    ekrani.setModal(true);
//    ekrani.exec();
}

void Fikstur::setAllTeams(vector<Takim>& a){
    allTeams = a;
    for(int i = 0 ; i < allTeams.size()-1 ; i++){
        QString haftaName = QString::number(i+1)+".Hafta";
        ui->listWidget->addItem(haftaName);
    }
}


void Fikstur::on_listWidget_currentItemChanged(QListWidgetItem *current, QListWidgetItem *previous)
{
    int weekNum;
    weekNum = extractIntegerWords(current->text().toStdString());

    int macInt=0;
    ui->tableWidget->setRowCount(allMatchs[weekNum].size());
    for (auto& mac :allMatchs[weekNum-1]) {
        QTableWidgetItem *b;
        for (int j=0; j<5; j++) {
            b = new QTableWidgetItem;
            switch (j) {
            case 0:
                b->setText(QString::number(mac.getMacID()));
                break;
            case 1:
                b->setText(QString::fromStdString(mac.getEvSahibi().getName()));
                break;
            case 2:
                b->setText(QString::number(mac.getEvSahibiSkor()));
                break;
            case 3:
                b->setText(QString::number(mac.getRakipSkor()));
                break;
            case 4:
                b->setText(QString::fromStdString(mac.getRakip().getName()));
                break;
            }
            ui->tableWidget->setItem(macInt,j,b);
        }
        macInt++;
    }

}

void Fikstur::setAllMatchs(vector<vector<Mac>> &a){
    allMatchs = a;
}


void Fikstur::on_tableWidget_itemClicked(QTableWidgetItem *item)
{
    mac_bilgi_ekrani ekrani;
    ekrani.setModal(true);
    ekrani.exec();
}

