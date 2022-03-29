//
// Created by Oskar on 29.03.2022.
//

#ifndef CONSOLE_SMASH_BROS_CREWMATE_H
#define CONSOLE_SMASH_BROS_CREWMATE_H

#include "../Fighter.h"

class Crewmate : public Fighter{
public:
    Crewmate(Ability* generic, Ability* special);
    ~Crewmate();
};


#endif //CONSOLE_SMASH_BROS_CREWMATE_H
