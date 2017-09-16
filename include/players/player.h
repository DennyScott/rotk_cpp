//
// Created by Denny Scott on 2017-09-16.
//

#ifndef ROTK_PLAYER_H
#define ROTK_PLAYER_H


#include <string>
#include <vector>
#include "commands/command.h"

class Player {
public:
    Player(std::string name);
    void clearCards();
    std::string getName();

private:
    std::string name;
    int health;
    std::vector<Command> hand;
    std::vector<Command> deck;
    bool hasChoosenCards;
    void doClearCards();
};


#endif //ROTK_PLAYER_H
