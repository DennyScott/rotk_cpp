//
// Created by Denny Scott on 2017-09-17.
//

#ifndef ROTK_BOARD_H
#define ROTK_BOARD_H

#include "tile.h"

class Board {
public:
    void outputBoard();
private:
    static const int boardSize = 9;
    Tile tiles[boardSize] = {Tile (2), Tile(9), Tile(3),
                             Tile(8), Tile(1), Tile(7),
                             Tile(4), Tile(6), Tile(5)};
};
#endif //ROTK_BOARD_H
