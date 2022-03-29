//
// Created by Oskar on 29.03.2022.
//

#ifndef CONSOLE_SMASH_BROS_FLAMETHROWER_H
#define CONSOLE_SMASH_BROS_FLAMETHROWER_H
#include "../Ability.h"

class Flamethrower : public Ability {
public:
    Flamethrower();
    ~Flamethrower();
    void execute(Fighter &performer, Fighter &target);
};


#endif //CONSOLE_SMASH_BROS_FLAMETHROWER_H
