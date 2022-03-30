//
// Created by Oskar on 29.03.2022.
//

#include "../../header/abilities/Flamethrower.h"
#include "../../header/Display.h"

Flamethrower::Flamethrower() {
    name = "Flamethrower";
}

Flamethrower::~Flamethrower() {

}

void Flamethrower::execute(Fighter &performer, Fighter &target) {
    Display::printStatusMessage(performer.getName() + " sets " + target.getName() + " on fire!");
    sleep(2);
    Display::printStatusMessage("BRSCHHHHHHHHHHHHHHHHHH");
    target.takeDamage(performer.getAttackDamage());
    sleep(2);

    int randDmg = 0;
    while (randDmg != 4){
        randDmg = rand() % 10;
        Display::printStatusMessage("BURN! " + target.getName() + " took " + std::to_string(target.takeDamage(randDmg)) + " damage!");
        sleep(1);
    }
    Display::printStatusMessage("The fire went out.");
    sleep(2);
}
