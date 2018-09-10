//
// Created by Denny Scott on 2017-09-17.
//

#ifndef ROTK_TILE_H
#define ROTK_TILE_H

#include <players/player_names.h>
#include <string>
#include <functional>
#include "tile_color.h"

class Tile {
public:
    Tile(int num);
    void runEffect();
    int getNumber() const;
    TileColor getColor() const;
    bool changeColor(TileColor color);
    PlayerNames getOwner() const;
    bool changeOwner(PlayerNames newOwner);
    std::string toString();
private:
    int number;
    TileColor color;
    PlayerNames owner;
};
#endif //ROTK_TILE_H
