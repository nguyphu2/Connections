#include "players.h"

Player::Player(const string &name, int jerseyNumber, int yearsPro, const string &position, const string &fact, const string &sideOfBall): name(name), jerseyNumber(jerseyNumber), yearsPro(yearsPro), position(position), fact(fact),sideOfBall(sideOfBall) {}

    //getters

    string getName() const;
    int getJerseyNumber() const;
    int getYearsPro() const;
    string getPosition() const;
    string getFact() const;
    string getSideOfBall() const;

    void displayPlayer() const;