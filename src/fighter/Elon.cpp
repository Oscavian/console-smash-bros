﻿//
// Created by Oskar on 26.03.2022.
//

#include "../../header/fighter/Elon.h"
#include "../../header/abilities/Slap.h"
#include "../../header/abilities/Flamethrower.h"

Elon::Elon() {
    m_name = "Elon Musk";
    m_baseAgility = 4 + rand() % 3;
    m_baseAttackDamage = 15;
    m_baseDefence = 8;
    m_genericAbility = new Slap(); //TODO
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