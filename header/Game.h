//
// Created by oskar on 28.03.22.
//

#ifndef CONSOLE_SMASH_BROS_GAME_H
#define CONSOLE_SMASH_BROS_GAME_H
#include "Duel.h"
#include "Display.h"
class Duel;

class Game {
public:
    Game();
    ~Game();
    void startGame();
    void mainMenu();
    static int getNumericInput();
private:
    Duel* fight;
};


#endif //CONSOLE_SMASH_BROS_GAME_H
