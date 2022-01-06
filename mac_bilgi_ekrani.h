#ifndef MAC_BILGI_EKRANI_H
#define MAC_BILGI_EKRANI_H

#include <QDialog>
#include "takim.h"
#include <vector>
#include "oyuncu.h"
#include <string>
#include "QTableWidgetItem"
#include "mac.h"
namespace Ui {
class mac_bilgi_ekrani;
}

class mac_bilgi_ekrani : public QDialog
{
    Q_OBJECT

public:
    explicit mac_bilgi_ekrani(QWidget *parent = nullptr);
    ~mac_bilgi_ekrani();

private:
    Ui::mac_bilgi_ekrani *ui;
};

#endif // MAC_BILGI_EKRANI_H
