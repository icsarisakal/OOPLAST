#include "oyuncu_ekle.h"
#include "ui_oyuncu_ekle.h"

Oyuncu_Ekle::Oyuncu_Ekle(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Oyuncu_Ekle)
{
    ui->setupUi(this);
    this->setWindowTitle("Oyuncu Ekle");
}

Oyuncu_Ekle::~Oyuncu_Ekle()
{
    delete ui;
}
