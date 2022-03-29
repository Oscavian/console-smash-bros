//
// Created by Oskar on 29.03.2022.
//

#include "../../header/abilities/Slap.h"
#include "../../header/Display.h"

Slap::Slap() {
    name = "Slap";
}

void Slap::execute(Fighter &performer, Fighter &target) {
    Display::printStatusMessage(performer.getName() + " uses Slap!");
    int damage = target.takeDamage(performer.getAttackDamage());
    Display::printStatusMessage(target.getName() + " took " + std::to_string(damage) + " percent damage");
    sleep(3);
}
