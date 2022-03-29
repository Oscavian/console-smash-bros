//
// Created by oskar on 24.03.22.
//

#ifndef CONSOLE_SMASH_BROS_DISPLAY_H
#define CONSOLE_SMASH_BROS_DISPLAY_H


class Display {
public:
    Display();
    static void drawTitleScreen();
    static void drawChooseCharacter();
    static void wait();
    static void clearScreen();
    void drawFight();



};


#endif //CONSOLE_SMASH_BROS_DISPLAY_H
