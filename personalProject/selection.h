#ifndef SELECTION_H
#define SELECTION_H
#include "players.h"
#include<string>
#include<unordered_map>
#include<iostream>
#include<vector>
#include <algorithm>

using namespace std;


class Selection {
    private:
    
    unordered_map<string, unordered_map<string, vector<Player>>>sortedTraits;
    vector<string> easyTraits = {"position", "age", "sideOfBall"};
    vector<string> intermediateTraits = {"jerseyNumber", "yearsPro"};
    vector<string> mediumTraits = {"height", "college"};
    vector<string> hardTraits = {"weight", "fact"};
    
    public: 

    void addPlayer(const Player &player);

    vector<Player> getPlayersByTrait (const string &trait, const string &specificTrait);

    string getEasyTrait(const vector<string>& easyTraits);
    string getIntermediateTrait(const vector<string>& intermediateTraits); 
    string getMediumTrait(const vector<string>& mediumTraits);
    string getHardTrait(const vector<string>& hardTraits);
};



#endif //SELECTION_H