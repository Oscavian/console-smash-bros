//
// Created by Oskar on 29.03.2022.
//

#ifndef CONSOLE_SMASH_BROS_IDIOTSANDWICH_H
#define CONSOLE_SMASH_BROS_IDIOTSANDWICH_H
#include "../Ability.h"

class IdiotSandwich : public Ability {
public:
    IdiotSandwich();
    ~IdiotSandwich();
    void execute(Fighter &performer, Fighter &target);
};


#endif //CONSOLE_SMASH_BROS_IDIOTSANDWICH_H
