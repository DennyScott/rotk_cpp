//
// Created by Denny Scott on 2017-09-17.
//

#ifndef ROTK_ACTION_H
#define ROTK_ACTION_H

#include <players/player_names.h>

class Action {
public:
    Action(PlayerNames player);
    PlayerNames getPlayedBy();
private:
    PlayerNames playedBy;
};
#endif //ROTK_ACTION_H
