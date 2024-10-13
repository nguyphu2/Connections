#include "selection.h"

void Selection::addPlayer(const Player &player){
    sortedTraits["college"][player.getCollege()].push_back(player);
    sortedTraits["age"][to_string(player.getAge())].push_back(player);
    sortedTraits["height"][to_string(player.getHeight())].push_back(player);
    sortedTraits["yearsPro"][to_string(player.getYearsPro())].push_back(player);
    sortedTraits["position"][player.getPosition()].push_back(player);
    sortedTraits["sideOfBall"][player.getSideOfBall()].push_back(player);
    sortedTraits["weight"][to_string(player.getWeight())].push_back(player);
    sortedTraits["jerseyNumber"][to_string(player.getJerseyNumber())].push_back(player);
    sortedTraits["fact"][player.getFact()].push_back(player);
}

vector<Player> Selection::getPlayersByTrait (const string &trait, const string &specificTrait){
    if (sortedTraits.find(trait)!=sortedTraits.end() && sortedTraits[trait].find(specificTrait) != sortedTraits[trait].end()){
        return sortedTraits[trait][specificTrait];
    }
    else{
        return {};
    }
}

string Selection::getEasyTrait(const vector<string>& easyTraits){
    
};
string Selection::getIntermediateTrait(const vector<string>& intermediateTraits){}; 
string Selection::getMediumTrait(const vector<string>& mediumTraits){};
string Selection::getHardTrait(const vector<string>& hardTraits){};
