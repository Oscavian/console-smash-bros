//
// Created by Oskar on 26.03.2022.
//

#include "../../header/fighter/Elon.h"
#include "../../header/abilities/Tackle.h"
#include "../../header/abilities/Flamethrower.h"

Elon::Elon() {
    m_name = "Elon Musk";
    m_baseAgility = 4;
    m_baseAttackDamage = 12;
    m_baseDefence = 8;
    m_genericAbility = new Tackle(); //TODO
    m_specialAbility = new Flamethrower(); //TODO
    m_splashArt = R"(
    ⠄⠄⠄⠄⠄⠄⠄⠄⣠⣤⣶⣶⣶⣶⣤⣤⣤⣀
⠄⠄⠄⠄⠄⣠⣾⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣶⣆
⠄⠄⠄⢀⣤⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡄
⠄⠄⢀⣽⣿⣿⡿⠛⠉⠉⠉⠉⠉⠉⠉⠉⠛⠻⢿⣿⣿⣷⡀
⠄⠄⣾⣿⣿⠏⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠘⣿⣿⣷
⠄⠄⠁⠉⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⢻⣿⣿⡇
⠄⢠⣯⡠⠞⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⢹⣿⡇
⠄⢸⣿⠁⠄⠄⣠⡶⠛⠛⠷⣄⠄⠄⠄⠄⣠⣤⣤⠄⠄⠄⣿⡇        Elon Musk
⠄⠘⡏⠄⠄⠰⣿⡿⠿⠖⠶⢿⠇⠄⠄⣤⣤⣤⣀⠄⠄⠄⣿⡇
⢸⢶⡇⠄⠄⠄⠄⠈⠄⠄⠄⠄⠄⠄⠄⠐⠤⠄⠉⠃⠄⠄⣿⠃
⠘⣾⡇⠄⠄⠄⠄⠄⠄⠄⢀⣴⣇⠄⠄⠄⠄⠄⠄⠄⠄⠄⢿⡆
⠄⠋⠁⠄⢀⣤⣄⠄⠄⠄⠸⣿⣿⡷⠶⠄⠄⠄⠄⠄⠄⠰
⠄⠄⠄⠄⢸⡿⠟⠄⠄⡀⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄
⠄⠄⠄⠄⣸⣷⡀⠄⠸⣿⣿⠿⠟⠛⠻⠦⠄⠄⠄⠄⠄
⢀⣀⠄⣼⣿⣿⣿⣦⠄⠈⠻⠿⠶⠖⠄⠄⠄⠄⠄⠄⠄
⣿⣿⡄⢹⣿⣿⣿⣿⣦⡀⠄⠄⠄⠄⠄⠄⠄⠄⢀⠔
⣿⣿⣿⡜⣿⣿⣿⣿⣿⣿⣿⣶⣦⣤⣤⣴⣶⠟⠉
⣿⣿⣿⣿⡌⢿⣿⣿⣿⣿⣿⣿⣿⣿⡿⠟⠁
⣿⣿⣿⣿⣿⣆⠙⣿⣿⣿⣿⣿⣿⠟⠄⠄⢀⣶⡀
⣿⣿⣿⣿⣿⣿⣧⣈⢛⠋⠙⣿⣿⠄⠄⠄⣼⣿⣿⣄
⣿⣿⣿⣿⣿⣿⣿⣿⣿⣷⣆⠄⠄⠄⠄⠄⢸⣿⣿⣿⣆
⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡀⠄⠄⠄⠄⠄⠻⠛⠻⠿
)";
}

Elon::~Elon() {

}