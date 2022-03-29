//
// Created by oskar on 24.03.22.
//

#ifndef CONSOLE_SMASH_BROS_DISPLAY_H
#define CONSOLE_SMASH_BROS_DISPLAY_H


#include <string>
#include "Fighter.h"

class Display {
public:
    Display();
    static void drawTitleScreen();
    static void drawChooseCharacter();
    static void wait();
    static void clearScreen();
    static void drawFight(Fighter &fighter1, Fighter &fighter2, std::string &statusMsg);
    static void drawMenu();
    static void printStatusMessage(const std::string& message);

};


#endif //CONSOLE_SMASH_BROS_DISPLAY_H
