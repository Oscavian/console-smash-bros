//
// Created by Oskar on 29.03.2022.
//

#include "../../header/abilities/IdiotSandwich.h"
#include "../../header/Display.h"
IdiotSandwich::IdiotSandwich() {
    name = "Idiot Sandwich";
}

IdiotSandwich::~IdiotSandwich() {

}

void IdiotSandwich::execute(Fighter &performer, Fighter &target) {
    Display::printStatusMessage(performer.getName() + " holds two Toast slices onto " + target.getName() + "'s ears and yells:");
    sleep(1);
    Display::printStatusMessage(performer.getName() + ": WHAT ARE YOU?");
    sleep(2);
    Display::printStatusMessage(target.getName() + ": An Idiot Sandwich");
    sleep(2);
    Display::printStatusMessage(performer.getName() + ": AN IDIOT SANDWICH WHAT!?");
    sleep(2);
    Display::printStatusMessage(target.getName() + ": An Idiot Sandwich Chef Ramsay..");
    sleep(2);
    Display::printStatusMessage("The humiliation lowered " + target.getName() + "'s defense!");
    target.setDefenceModifier(-4);
    sleep(5);
}
