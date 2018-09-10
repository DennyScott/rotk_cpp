//
// Created by Denny Scott on 2017-09-17.
//

#include <board/board.h>
#include <iostream>

void Board::outputBoard()
{
    for(int i = 0; i < boardSize; i++)
    {
        if (i % 3 == 0 && i != 0)
            std::cout << std::endl;
        std::cout << tiles[i].toString() << ",";
    }
    std::cout << std::endl;
}

