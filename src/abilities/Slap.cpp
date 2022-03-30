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
    int random = rand() % 100;
    int damage = 0;
    if (random > 90){
        damage = target.takeDamage(performer.getAttackDamage() * 2);
        Display::printStatusMessage(performer.getName() + " hit the super Slap!");
    } else if (random <= 90) {
        damage = target.takeDamage(performer.getAttackDamage());
    }

    Display::printStatusMessage(target.getName() + " took " + std::to_string(damage) + " percent damage");
    sleep(3);
}
