#ifndef TAKIMLAR_H
#define TAKIMLAR_H

#include <QDialog>
#include "takim.h"
#include <vector>
#include <string>

namespace Ui {
class Takimlar;
}

class Takimlar : public QDialog
{
    Q_OBJECT

public:
    explicit Takimlar(QWidget *parent = nullptr);
    ~Takimlar();
    void setAllTeams(vector<Takim>&);

private slots:

private:
    Ui::Takimlar *ui;
    vector<Takim> allTeams;
};

#endif // TAKIMLAR_H
