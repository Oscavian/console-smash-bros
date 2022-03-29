//
// Created by oskar on 24.03.22.
//

#include "../header/Fighter.h"

Fighter::Fighter() : m_agilityModifier(0), m_damagePercent(0), m_baseAgility(0), m_baseDefence(0), m_defenceModifier(0), m_attackModifier(0), m_baseAttackDamage(0), m_genericAbility(
        nullptr), m_specialAbility(nullptr) {}

Fighter::~Fighter() {

}

void Fighter::takeDamage(int percentage) {
    m_damagePercent += percentage - getDefence();
    if (m_damagePercent < 0) {
        m_damagePercent = 0;
    }
}

void Fighter::restoreDamage(int percentage) {
    m_damagePercent -= percentage;
    if (m_damagePercent < 0) {
        m_damagePercent = 0;
    }
}

int Fighter::getDefence() const {
    return m_baseDefence + m_defenceModifier;
}

int Fighter::getBaseDefence() const {
    return m_baseDefence;
}

int Fighter::getAttackDamage() const {
    return m_baseAttackDamage + m_attackModifier;
}

int Fighter::getBaseAttackDamage() const {
    return m_baseAttackDamage;
}

int Fighter::getBaseAgility() const {
    return m_baseAgility;
}

int Fighter::getAgility() const {
    return m_baseAgility + m_agilityModifier;
}

int Fighter::getDamage() const {
    return m_damagePercent;
}

void Fighter::setAgilityModifier(int value) {
    m_agilityModifier = value;
}

void Fighter::setAttackModifier(int value) {
    m_attackModifier = value;
}

void Fighter::setDefenceModifier(int value) {
    m_defenceModifier = value;
}

void Fighter::useGenericAbility(Fighter &opponent) {
    m_genericAbility->execute(this, opponent);
}

void Fighter::useSpecialAbility(Fighter &opponent) {
    m_specialAbility->execute(this, opponent);
}
