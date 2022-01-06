//
// Created by netadim on 18.12.2021.
//

#include "takim.h"
using namespace std;
Takim::Takim(string a, string b, string c)
        :name(a),abbr(b),coach(c)
{
}

//SET FUNCS
void Takim::setName(string & a) {
    name = a;
}

void Takim::setAbbr(string &a) {
    abbr = a;
}

void Takim::setCoach(string &a) {
    coach = a;
}
void Takim::setPlayers(vector<Oyuncu>& a){
    players= a;
    calcAvgD();
    calcAvgO();
    calcAvgF();
}
void Takim::setLeaguePoint(int &a){
    leaguePoint=a;
}
void Takim::setCountWin(int &a){
    countWin=a;
}
void Takim::setCountDraw(int &a){
    countDraw=a;
}
void Takim::setCountLose(int &a){
    countLose=a;
}
void Takim::setCountGoal(int &a){
    countGoal=a;
}

//GET FUNCS
string Takim::getName() {
    return name;
}
int Takim::getLeaguePoint() const{
    return leaguePoint;
}
int Takim::getCountWin() const{
    return countWin;
}
int Takim::getCountLose() const{
    return countLose;
}
int Takim::getCountDraw() const{
    return countDraw;
}
int Takim::getCountGoal() const{
    return countGoal;
}
string Takim::getAbbr() {
    return abbr;
}
string Takim::getCoach() {
    return coach;
}
int Takim::getPerformanceAvgTeam() const {
    return avgPerformanceK+avgPerformanceD+avgPerformanceO+avgPerformanceF;
}
int Takim::getPerformanceAvgK() const {
    return avgPerformanceK;
}
int Takim::getPerformanceAvgD() const {
    return avgPerformanceD;
}
int Takim::getPerformanceAvgO() const {
    return avgPerformanceO;
}
int Takim::getPerformanceAvgF() const {
    return avgPerformanceF;
}
void Takim::calcAvgK() {
    for(int i = 0; i<1; i++){
        avgPerformanceK+=this->players[i].getPerformanceNumber();
    }

}
void Takim::calcAvgD() {
    for (int i = 1; i <= 4; i++) {
        avgPerformanceD+=this->players[i].getPerformanceNumber();
    }
    avgPerformanceD=avgPerformanceD/4;
}
void Takim::calcAvgO() {
    for(int i = 5; i<=8; i++){
        avgPerformanceO+=this->players[i].getPerformanceNumber();
    }
    avgPerformanceO=avgPerformanceO/4;
}
void Takim::calcAvgF() {
    for(int i =9; i<=10;i++){
        avgPerformanceF+=this->players[i].getPerformanceNumber();
    }
    avgPerformanceF=avgPerformanceF/2;
}

vector<Oyuncu> Takim::getPlayers(){
    return players;
}
