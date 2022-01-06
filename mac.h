#ifndef MAC_H
#define MAC_H

#include <string>
#include <iostream>
#include "oyuncu.h"
#include "takim.h"
#include "time.h"


using namespace std;

class Mac
{
public:
    Mac(Takim&,Takim&,int,int,int);
    Takim getEvSahibi();
    Takim getRakip();
    int getEvSahibiSkor();
    int getRakipSkor();
    int getMacID();
    void setEvSahibi(Takim&);
    void setRakip(Takim&);
    void setEvSahibiSkor(int);
    void setRakipSkor(int);
    void setskorHesaplama();
    void setMacID(int);

    void setMacId(int macId);


private:
    Takim evSahibi;
    Takim rakip;
    int evSahibiSkor;
    int rakipSkor;
    int macID;

    // validation daha yapýlmadý bakýlacak.
};

#endif // MAC_H
