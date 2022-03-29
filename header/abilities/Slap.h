//
// Created by Oskar on 29.03.2022.
//

#ifndef CONSOLE_SMASH_BROS_SLAP_H
#define CONSOLE_SMASH_BROS_SLAP_H

#include "../Ability.h"

class Slap : public Ability {
public:
    Slap();
    void execute(Fighter &performer, Fighter &target);
};


#endif //CONSOLE_SMASH_BROS_SLAP_H
