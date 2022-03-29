//
// Created by oskar on 28.03.22.
//

#include <string>
#include <iostream>
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

        Display::clearScreen();
    }
}

int Game::getNumericInput() {
    int input;

    bool valid = false;

    do {
        std::cin >> input;
        if(input >= 0 && input <= 9){
            valid = true;
        }
    } while (!valid);
    return input;
}



Game::Game() {
    fight = nullptr;
}

Game::~Game() {
    delete fight;
}

std::string Game::getStringInput() {
    std::string input;
    std::cin.clear();
    std::getline(std::cin, input);
    return input;
}

