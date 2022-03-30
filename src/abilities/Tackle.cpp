//
// Created by Oskar on 29.03.2022.
//

#include "../../header/abilities/Tackle.h"
#include "../../header/Display.h"

void Tackle::execute(Fighter &performer, Fighter &target) {
    Display::printStatusMessage(performer.getName() + " uses Tackle!");
    int random = rand() % 100;
    int damage = target.takeDamage(performer.getAttackDamage());
    Display::printStatusMessage(target.getName() + " took " + std::to_string(damage) + " percent damage");
    if (random > 80){
        performer.setAttackModifier(10);
        Display::printStatusMessage(performer.getName() + " is in a blood rush! Attack Damage increased.");
    }
    sleep(3);
}

Tackle::Tackle() {
    name = "Tackle";
}
