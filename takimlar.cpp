#include "takimlar.h"
#include "ui_takimlar.h"
#include <QListWidgetItem>
#include <iostream>
using namespace std;
Takimlar::Takimlar(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Takimlar)
{
    ui->setupUi(this);
    this->setWindowTitle("Takım Listesi");
}

Takimlar::~Takimlar()
{
    delete ui;
}
void Takimlar::setAllTeams(vector<Takim>& a){
    allTeams = a;
    for(Takim& as: allTeams){
        QString s = QString::fromStdString(as.getName());
        ui->listWidget->addItem(s);
    }
}


