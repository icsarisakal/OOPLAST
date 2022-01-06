#include "mac_bilgi_ekrani.h"
#include "ui_mac_bilgi_ekrani.h"

mac_bilgi_ekrani::mac_bilgi_ekrani(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::mac_bilgi_ekrani)
{
    ui->setupUi(this);
}

mac_bilgi_ekrani::~mac_bilgi_ekrani()
{
    delete ui;
}
