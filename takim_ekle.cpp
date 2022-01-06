#include "takim_ekle.h"
#include "ui_takim_ekle.h"
#include <iostream>
#include <string>
#include <fstream>
#include <cstring>
#include "QMessageBox"
using namespace std;

Takim_Ekle::Takim_Ekle(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Takim_Ekle)
{
    ui->setupUi(this);
    this->setWindowTitle("Takım Ekle");
}

Takim_Ekle::~Takim_Ekle()
{
    delete ui;
}
int Takim_Ekle::insertNewTeam(string &name,string &coach){
    ofstream MyFile("C:\\Users\\netadim\\Desktop\\untitled2\\NewSuperLeague1.txt", std::ios_base::app);

    for (auto & c: name) c = toupper(c);
    for (auto & c: coach) c = toupper(c);
      // Write to the file
    MyFile << endl;
    MyFile << name;
    MyFile << "-";
    MyFile << coach;
    QString nameSTR = QString::fromStdString(name);
    ui->listWidget->addItem(nameSTR);
    MyFile.flush();
    MyFile.close();
    QMessageBox msgBox;
    msgBox.setText("Takım Eklendi !");
    msgBox.exec();
    return 0 ;
}

void Takim_Ekle::on_pushButton_clicked()
{
   QString name=ui->lineEdit->text();
   QString coach=ui->lineEdit_2->text();

   string nameStr = name.toStdString();
   string coachStr = coach.toStdString();

   insertNewTeam(nameStr,coachStr);
}
void Takim_Ekle::setAllTeams(vector<Takim> &a){
    allTeams = a;
    for(Takim& as: allTeams){
        QString s = QString::fromStdString(as.getName()+" - "+as.getAbbr());
        ui->listWidget->addItem(s);
    }
}

