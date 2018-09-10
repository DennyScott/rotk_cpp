//
// Created by Denny Scott on 2017-09-17.
//

#include <players/player_names.h>
#include <actions/action.h>

Action::Action(PlayerNames player)
{
    playedBy = player;
}

PlayerNames Action::getPlayedBy()
{
    return playedBy;
}