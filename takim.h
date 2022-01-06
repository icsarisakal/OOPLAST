#ifndef TAKIM_H
#define TAKIM_H


#include "string"
#include "vector"
#include "oyuncu.h"
using namespace std;

class Takim {
public:
    Takim(string , string , string );

//    SET FUNCS
    void setName(string&);
    void setAbbr(string&);
    void setCoach(string&);
    void setPlayers(vector<Oyuncu>&);
    void setLeaguePoint(int&);
    void setCountWin(int&);
    void setCountLose(int&);
    void setCountDraw(int&);
    void setCountGoal(int&);

//    GET FUNCS
    string getName();
    string getAbbr();
    string getCoach();

    int getPerformanceAvgTeam() const;
    int getPerformanceAvgK() const;
    int getPerformanceAvgD() const;
    int getPerformanceAvgO() const;
    int getPerformanceAvgF() const;
    int getLeaguePoint() const;
    int getCountWin() const;
    int getCountLose() const;
    int getCountDraw() const;
    int getCountGoal() const;
    vector<Oyuncu> getPlayers();

private:
//    FUNCS
    void calcAvgK();
    void calcAvgD();
    void calcAvgO();
    void calcAvgF();
//    PROPS
    string name;
    string abbr;
    string coach;
    int avgPerformanceK=0;
    int avgPerformanceD=0;
    int avgPerformanceO=0;
    int avgPerformanceF=0;
    int leaguePoint=0;
    int countWin=0;
    int countLose=0;
    int countDraw=0;
    int countGoal=0;
    vector<Oyuncu> players;
};
#endif // TAKIM_H
