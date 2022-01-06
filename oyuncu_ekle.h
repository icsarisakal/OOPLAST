#ifndef OYUNCU_EKLE_H
#define OYUNCU_EKLE_H

#include <QDialog>

namespace Ui {
class Oyuncu_Ekle;
}

class Oyuncu_Ekle : public QDialog
{
    Q_OBJECT

public:
    explicit Oyuncu_Ekle(QWidget *parent = nullptr);
    ~Oyuncu_Ekle();

private:
    Ui::Oyuncu_Ekle *ui;
};

#endif // OYUNCU_EKLE_H
