#ifndef OYUNCU_H
#define OYUNCU_H

#include "string"
using namespace std;

class Oyuncu {
public:
    Oyuncu(string ,string ,int ,int ,int);

//    SET FUNCS
    void setName(string&);
    void setPosition(string&);
    void setPerformanceNumber(int&);
    void setFormaNumber(int&);
    void setAge(int&);

//    GET FUNCS
    string getName();
    string getPosition();
    int getPerformanceNumber();
    int getFormaNumber();
    int getAge();

private:
    string name;
    string position;
    string team;
    int age;
    int performance;
    int number;
};

#endif // OYUNCU_H
