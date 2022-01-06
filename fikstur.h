#ifndef FIKSTUR_H
#define FIKSTUR_H
#include <string>
#include <QDialog>
#include <QListWidget>
#include <vector>
#include "takim.h"
#include <sstream>
#include "mac.h"
#include "QTableWidgetItem"
namespace Ui {
class Fikstur;
}

class Fikstur : public QDialog
{
    Q_OBJECT

public:
    explicit Fikstur(QWidget *parent = nullptr);
    void setAllTeams(vector<Takim>&);
    void setAllMatchs(vector<vector<Mac>>&);
    int extractIntegerWords(string);
    ~Fikstur();

private slots:

    void on_listWidget_itemClicked(QListWidgetItem *item);

    void on_listWidget_currentItemChanged(QListWidgetItem *current, QListWidgetItem *previous);

    void on_tableWidget_itemClicked(QTableWidgetItem *item);

private:
    Ui::Fikstur *ui;
    vector<Takim> allTeams;
    vector<vector<Mac>> allMatchs;
};

#endif // FIKSTUR_H
