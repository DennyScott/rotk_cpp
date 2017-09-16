#include "players/player.h"
#include <iostream>

int main()
{
    Player player("Denny");

    std::cout << player.getName() << std::endl;

    return 0;
}