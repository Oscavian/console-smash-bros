//
// Created by oskar on 28.03.22.
//

#include "../header/Duel.h"

Duel::Duel() {
    this->fighter1 = nullptr;
    this-> fighter2 = nullptr;
}

void Duel::chooseCharacter() {
    Display::printChooseCharacter();
    int choice = Game::getNumericInput();
    switch (choice) {
        case 1:
            fighter1 = new Fighter(); //TODO: change to Elon/Rick/Gordon
            break;
        case 2:
            fighter1 = new Fighter();
        case 3:
            fighter1 = new Fighter();
        default:
            break;

    }
}

Duel::~Duel() {
    delete fighter1;
    delete fighter2;
}

void Duel::initFight() {
    chooseCharacter();

}
