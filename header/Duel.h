//
// Created by oskar on 28.03.22.
//

#ifndef CONSOLE_SMASH_BROS_DUEL_H
#define CONSOLE_SMASH_BROS_DUEL_H
#include "Fighter.h"
#include "Display.h"
#include "Game.h"

class Duel {
public:
    Duel();
    ~Duel();
    void chooseCharacter();
    void initFight();
private:
    Fighter* fighter1;
    Fighter* fighter2;

};


#endif //CONSOLE_SMASH_BROS_DUEL_H
