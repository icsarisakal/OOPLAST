#ifndef DIALOG_H
#define DIALOG_H
#include <vector>
#include "takim.h"
#include <QDialog>
#include "string"
#include "iostream"
#include "QTableWidgetItem"

namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog(QWidget *parent = nullptr);
    ~Dialog();
    void setAllTeams(vector<Takim>&);

private:
    Ui::Dialog *ui;
    vector<Takim> allTeams;
};

#endif // DIALOG_H
