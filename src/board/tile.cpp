//
// Created by Denny Scott on 2017-09-17.
//

#include "board/tile.h"

Tile::Tile(int num)
{
    number = num;
    owner = PlayerNames::Unassigned;
}

int Tile::getNumber() const
{
    return number;
}

TileColor Tile::getColor() const
{
    return color;
}

bool Tile::changeColor(TileColor newColor)
{
    if(color == newColor)
        return false;

    color = newColor;
    return true;
}

PlayerNames Tile::getOwner() const
{
    return owner;
}

bool Tile::changeOwner(PlayerNames newOwner)
{
    if(owner == newOwner)
        return false;

    owner = newOwner;
    return true;
}

std::string Tile::toString()
{
    return std::to_string(number);
}
