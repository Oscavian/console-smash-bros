//
// Created by Oskar on 26.03.2022.
//

#include "../../header/abilities/RickRoll.h"
#include "../../header/Display.h"
void RickRoll::execute(Fighter &performer, Fighter &target) {
#if defined(__linux__)
    system("firefox https://youtu.be/dQw4w9WgXcQ");
#elif defined(_WIN32)
    ShellExecuteW(nullptr, nullptr, L"https://youtu.be/dQw4w9WgXcQ", nullptr, nullptr , SW_SHOW );
#endif
    Display::printStatusMessage(target.getName() + " got Rick-rolled!");
    sleep(5);
    target.takeDamage(performer.getAttackDamage() / 2);
    Display::printStatusMessage(target.getName() + "is so ashamed, his defense was lowered by 2!");
    target.setDefenceModifier(-2);
    sleep(4);
}

RickRoll::RickRoll() {
    name = "Rick-Roll";
}
