//
// Created by Oskar on 26.03.2022.
//

#include "../header/fighter/Rick.h"

Rick::Rick() {
    m_name = "Rick Astley";
    m_baseAgility = 8;
    m_baseAttackDamage = 8;
    m_baseDefence = 4;
    m_genericAbility = nullptr; //TODO
    m_specialAbility = nullptr; //TODO
}

Rick::~Rick() {
    delete m_genericAbility;
    delete m_specialAbility;
}