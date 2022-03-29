//
// Created by Oskar on 26.03.2022.
//

#include "../header/fighter/Gordon.h"

Gordon::Gordon() {
    m_name = "Gordon Ramsay";
    m_baseAgility = 4;
    m_baseAttackDamage = 12;
    m_baseDefence = 8;
    m_genericAbility = nullptr; //TODO
    m_specialAbility = nullptr; //TODO
}

Gordon::~Gordon() {
    delete m_specialAbility;
    delete m_genericAbility;
}
