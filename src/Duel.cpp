//
// Created by oskar on 28.03.22.
//

#include "../header/Duel.h"
#include "../header/fighter/Crewmate.h"
#include "../header/abilities/Tackle.h"

Duel::Duel() {
    this->fighter1 = nullptr;
    this-> fighter2 = nullptr;
}

void Duel::chooseCharacter() {
    Display::drawChooseCharacter();
    //std::string choice = Game::getStringInput();
    int option;
    option = Game::getNumericInput();
    /*if (choice == "Elon" || choice == "Elon Musk"){
        option = 1;
    } else if (choice == "Rick" || choice == "Rick Astley"){
        option = 2;
    } else if (choice == "Gordon" || choice == "Gordon Ramsay") {
        option = 3;
    } else {
        option = 4;
    }*/

    switch (option) {
        case 1:
            fighter1 = new Elon();
            Display::printStatusMessage("You chose Elon Musk!");
            break;
        case 2:
            fighter1 = new Rick();
            Display::printStatusMessage("You chose Rick Astley!");
            break;
        case 3:
            fighter1 = new Gordon();
            Display::printStatusMessage("You chose Gordon Ramsay!");
            break;
        case 4:
            Display::printStatusMessage("You chose the Crewmate, proceeding with ability selection...");
            Display::printStatusMessage("What generic Ability do you want?\n[1] Tackle\n[2] Slap");
            Display::printStatusMessage("You chose Tackle twice!"); //TODO remove and enhance
            fighter1 = new Crewmate(new Tackle(), new Tackle());
            break;
        default:
            break;
    }
    Display::wait();
}

Duel::~Duel() {
    delete fighter1;
    delete fighter2;
}

void Duel::initFight() {
    chooseCharacter();

    fighter2 = new Crewmate(new Tackle(), new Tackle()); //TODO remove
    Display::clearScreen();
    std::string statusMsg;

    while (fighter1->getDamage() < 300 && fighter2->getDamage() < 300){
        Display::drawFight(*fighter1, *fighter2, statusMsg);
        Display::printStatusMessage("Choose your next action: \n[1] " + fighter1->getGenericAbility()->getName() + "\n[2] " + fighter1->getSpecialAbility()->getName() + "\n[3] Give up");
        int option = Game::getNumericInput();
        switch (option) {
            case 1:
                fighter1->useGenericAbility(*fighter2);
                break;
            case 2:
                fighter1->useSpecialAbility(*fighter2);
                break;
            case 3:
                Display::printStatusMessage(fighter1->getName() + "gave up!");
                Display::wait();
                return;
            default:
                break;
        }
        Display::clearScreen();
        Display::drawFight(*fighter1, *fighter2, statusMsg);
        Display::printStatusMessage("Choose your next action: \n[1] " + fighter2->getGenericAbility()->getName() + "\n[2] " + fighter2->getSpecialAbility()->getName() + "\n[3] Give up");
        option = Game::getNumericInput();
        switch (option) {
            case 1:
                fighter2->useGenericAbility(*fighter1);
                break;
            case 2:
                fighter2->useSpecialAbility(*fighter1);
                break;
            case 3:
                Display::printStatusMessage(fighter2->getName() + "gave up!");
                Display::wait();
                return;
            default:
                break;
        }
    }

}

/*void Duel::chooseAction(Fighter &performer, Fighter &target) {
    Display::printStatusMessage("Choose your next action: \n[1] " + performer.getGenericAbility()->getName() + "\n[2] " + performer.getSpecialAbility()->getName() + "\n[3] Give up");
    int option = Game::getNumericInput();
    switch (option) {
        case 1:
            performer.useGenericAbility(target);
            break;
        case 2:
            performer.useSpecialAbility(target);
            break;
        case 3:
            Display::printStatusMessage(performer.getName() + "gave up!");
            Display::wait();
            return;
        default:
            break;
    }
}*/