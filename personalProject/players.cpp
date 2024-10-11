#include "players.h"

Player::Player(const string &name, int jerseyNumber, int yearsPro, const string &position, const string &fact, const string &sideOfBall, int age, int height, int weight, const string& college): name(name), jerseyNumber(jerseyNumber), yearsPro(yearsPro), position(position), fact(fact),sideOfBall(sideOfBall), age(age), height(height), weight(weight), college(college){};

    //getters

    string Player::getName() const {
        return name;
    }

    int Player::getJerseyNumber() const {
        return jerseyNumber;
    }
    
    int Player::getYearsPro() const {
        return yearsPro;
    }

    string Player::getPosition() const{
        return position;
    }

    string Player::getFact() const{
        return fact;
    }

    string Player::getSideOfBall() const{
        return sideOfBall;
    }

    int Player::getAge() const{
        return age;
    }

    int Player::getHeight() const{
        return height;
    }

    int Player::getWeight() const{
        return weight;
    }

    string Player::getCollege() const{
        return college;
    }


    void Player::displayPlayer() const{
        cout<< name<<endl<<position<<endl<<jerseyNumber<<endl<<sideOfBall<<endl<<fact<<endl;

    }