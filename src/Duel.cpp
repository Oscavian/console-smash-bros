//
// Created by oskar on 28.03.22.
//

#include "../header/Duel.h"
#include "../header/fighter/Crewmate.h"
#include "../header/abilities/Tackle.h"
#include "../header/abilities/Slap.h"
#include "../header/abilities/Flamethrower.h"
#include "../header/abilities/IdiotSandwich.h"
#include "../header/abilities/RickRoll.h"

Duel::Duel() {
    this->fighter1 = nullptr;
    this-> fighter2 = nullptr;
}

void Duel::chooseCharacter() {
    Display::drawChooseCharacter();
    int option;
    option = Game::getNumericInput();

    Display::printStatusMessage("Player 1");
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
            fighter1 = createCustomCharacter();
            break;
        default:
            break;
    }
    Display::wait();
    Display::drawChooseCharacter();

    option = Game::getNumericInput();

    Display::printStatusMessage("Player 2");
    switch (option) {
        case 1:
            fighter2 = new Elon();
            Display::printStatusMessage("You chose Elon Musk!");
            break;
        case 2:
            fighter2 = new Rick();
            Display::printStatusMessage("You chose Rick Astley!");
            break;
        case 3:
            fighter2 = new Gordon();
            Display::printStatusMessage("You chose Gordon Ramsay!");
            break;
        case 4:
            Display::printStatusMessage("You chose the Crewmate, proceeding with ability selection...");
            fighter2 = createCustomCharacter();
            break;
        default:
            break;
    }
    Display::wait();
}

Fighter* Duel::createCustomCharacter() {
    Display::printStatusMessage("What generic Ability do you want?\n[1] Tackle\n[2] Slap");
    int option = Game::getNumericInput();
    Ability* generic = nullptr;
    switch (option) {
        case 1:
            generic = new Tackle();
            break;
        case 2:
            generic = new Slap();
            break;
        default:
            break;
    }
    Display::printStatusMessage("What special Ability do you want?\n[1] Flamethrower\n[2] IdiotSandwich\n[3] Rick Roll");
    option = Game::getNumericInput();
    Ability* special = nullptr;
    switch (option) {
        case 1:
            special = new Flamethrower();
            break;
        case 2:
            special = new IdiotSandwich();
            break;
        case 3:
            special = new RickRoll();
            break;
        default:
            break;
    }

    Display::printStatusMessage("Custom character created!");
    sleep(1);
    return new Crewmate(generic, special);
}

Duel::~Duel() {
    delete fighter1;
    delete fighter2;
}

void Duel::initFight() {
    chooseCharacter();

    std::string statusMsg;

    while (fighter1->getDamage() < 300 && fighter2->getDamage() < 300){
        Display::clearScreen();
        Display::drawFight(*fighter1, *fighter2, statusMsg);
        Display::printStatusMessage("\b" + fighter1->getName() + "!");
        Display::printStatusMessage("Choose your next action: \n[1] " + fighter1->getGenericAbility()->getName() + "\n[2] " + fighter1->getSpecialAbility()->getName() + "\n[3] Give up");
        int optionF1 = Game::getNumericInput();
        Display::clearScreen();
        Display::drawFight(*fighter1, *fighter2, statusMsg);
        Display::printStatusMessage(fighter2->getName() + "!");
        Display::printStatusMessage("Choose your next action: \n[1] " + fighter2->getGenericAbility()->getName() + "\n[2] " + fighter2->getSpecialAbility()->getName() + "\n[3] Give up");
        int optionF2 = Game::getNumericInput();
        int random = (rand() % 250) + 50;

        if (fighter1->getAgility() + rand() % 3 > fighter2->getAgility() + rand() % 3){
            switch (optionF1) {
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

            if (random < fighter2->getDamage()){
                Display::printStatusMessage(fighter2->getName() + "got eliminated!\n" + fighter1->getName() + " wins!");
                Display::wait();
                return;
            }

            switch (optionF2) {
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

            if (random < fighter1->getDamage()){
                Display::printStatusMessage(fighter1->getName() + "got eliminated!\n" + fighter2->getName() + " wins!");
                Display::wait();
                return;
            }

            sleep(1);

        } else {
            switch (optionF2) {
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

            if (random < fighter1->getDamage()){
                Display::printStatusMessage(fighter1->getName() + "got eliminated!\n" + fighter2->getName() + " wins!");
                Display::wait();
                return;
            }

            sleep(1);

            switch (optionF1) {
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

            if (random < fighter2->getDamage()){
                Display::printStatusMessage(fighter2->getName() + "got eliminated!\n" + fighter1->getName() + " wins!");
                Display::wait();
                return;
            }
        }


    }
}