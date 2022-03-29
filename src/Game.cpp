//
// Created by oskar on 28.03.22.
//

#include <string>
#include "iostream"
#include "../header/Game.h"
#include "../header/Duel.h"

void Game::startGame() {
    Display::printTitleScreen();
    mainMenu();
}

void Game::mainMenu() {
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
            break;
        case 3:
            //Character Gallery
            std::cout << "Not yet implemented";
        case 4:
            //options
            std::cout << "Nothing here";
            break;
        case 5:
            std::cout << "Exiting Game...";
            Display::wait();
            return;
        default:
            break;
    }
}

int Game::getNumericInput() {
    std::string input;
    int option;

    do {
        std::getline(std::cin, input);
    } while (input.length() != 1 && std::isdigit(input[0]));
    option = std::stoi(input);
    return option;
}

Game::Game() {
    fight = nullptr;
}

Game::~Game() {
    delete fight;
}

