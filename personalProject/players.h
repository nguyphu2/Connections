#ifndef PLAYERS_H
#define PLAYERS_H

#include <string>
#include <iostream>

using namespace std;

class Player {
private:
    int jerseyNumber;
    string name;
    int yearsPro;
    string position;
    string fact;
    string sideOfBall;

public:
    //constructor
    Player(const string &name, int jerseyNumber, int yearsPro, const string &position, const string &fact, const string &sideOfBall);

    //getters

    string getName() const;
    int getJerseyNumber() const;
    int getYearsPro() const;
    string getPosition() const;
    string getFact() const;
    string getSideOfBall() const;

    void displayPlayer() const;
};





#endif //PLAYERS_H