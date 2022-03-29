//
// Created by Oskar on 29.03.2022.
//

#include "../../header/abilities/Tackle.h"
#include "../../header/Display.h"

void Tackle::execute(Fighter &performer, Fighter &target) {
    Display::printStatusMessage(performer.getName() + " uses Tackle!");
    int damage = target.takeDamage(performer.getAttackDamage());
    Display::printStatusMessage(target.getName() + " took " + std::to_string(damage) + " percent damage");
}

Tackle::Tackle() {
    name = "Tackle";
}
