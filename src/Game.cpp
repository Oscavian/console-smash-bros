//
// Created by oskar on 28.03.22.
//

#include "../header/Game.h"
#include "../header/Duel.h"

void Game::startGame() {
    Display::drawTitleScreen();
    mainMenu();
}

void Game::mainMenu() {
    while (true) {
        Display::drawMenu();
        int option = Game::getNumericInput();
        switch (option) {
            case 1:
                //Single Player Duel
                fight = new Duel();
                fight->initFight();
                break;
            case 2:
                // Multiplayer Fihgt
                std::cout << "Not yet implemented";
                sleep(1);
                break;
            case 3:
                //Character Statistics
                std::cout << "Not yet implemented";
                sleep(1);
                break;
            case 4:
                //Guide
                std::cout << "Nothing here";
                sleep(1);
                break;
            case 5:
                std::cout << "Exiting Game...";
                Display::wait();
                return;
            default:
                break;
        }

        Display::clearScreen();
    }
}

int Game::getNumericInput() {
    int input;

    while(!(std::cin >> input)){
        std::cout << "Invalid. Enter a number.\n";
        std::cin.clear();
        std::cin.ignore(123, '\n');
    }

    return input;
}



Game::Game() {
    fight = nullptr;
}

Game::~Game() {
    delete fight;
}