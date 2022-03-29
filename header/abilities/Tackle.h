//
// Created by Oskar on 29.03.2022.
//

#ifndef CONSOLE_SMASH_BROS_TACKLE_H
#define CONSOLE_SMASH_BROS_TACKLE_H

#include "../Ability.h"

class Tackle : public Ability {
public:
    Tackle();
    void execute(Fighter &performer, Fighter &target);
};


#endif //CONSOLE_SMASH_BROS_TACKLE_H
