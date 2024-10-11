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
    int age;
    int height;
    int weight;
    string college;

public:
    //constructor
    Player(const string &name, int jerseyNumber, int yearsPro, const string &position, const string &fact, const string &sideOfBall, int age, int height, int weight, const string &college);

    //getters

    string getName() const;
    int getJerseyNumber() const;
    int getYearsPro() const;
    string getPosition() const;
    string getFact() const;
    string getSideOfBall() const;
    int getAge() const;
    int getHeight() const;
    int getWeight() const;
    string getCollege() const;
    
    void displayPlayer() const;
};





#endif //PLAYERS_H