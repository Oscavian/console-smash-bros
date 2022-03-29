//
// Created by Oskar on 26.03.2022.
//

#ifndef CONSOLE_SMASH_BROS_RICKROLL_H
#define CONSOLE_SMASH_BROS_RICKROLL_H

#include "../Ability.h"

class RickRoll : public Ability {
public:
    RickRoll();
    void execute(Fighter &performer, Fighter &target);
};


#endif //CONSOLE_SMASH_BROS_RICKROLL_H
