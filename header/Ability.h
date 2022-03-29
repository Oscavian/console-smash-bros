//
// Created by oskar on 24.03.22.
//

#ifndef CONSOLE_SMASH_BROS_ABILITY_H
#define CONSOLE_SMASH_BROS_ABILITY_H


#include <string>
#include "Fighter.h"

class Ability {
public:
    Ability();
    virtual ~Ability();
    virtual void execute(Fighter &performer, Fighter &target) = 0;
protected:
    std::string name;
};


#endif //CONSOLE_SMASH_BROS_ABILITY_H
