//
// Created by oskar on 24.03.22.
//

#ifndef CONSOLE_SMASH_BROS_FIGHTER_H
#define CONSOLE_SMASH_BROS_FIGHTER_H

#include <string>
#include "Ability.h"
class Ability;

class Fighter {
public:
    Fighter();
    virtual ~Fighter();
    virtual void useGenericAbility(Fighter& opponent);
    virtual void useSpecialAbility(Fighter& opponent);

    int takeDamage(int percentage);
    void restoreDamage(int percentage);

    void setAgilityModifier(int value);
    void setAttackModifier(int value);
    void setDefenceModifier(int value);

    std::string getName() const;
    int getDamage() const;
    int getAgility() const;
    int getBaseAgility() const;
    int getAttackDamage() const;
    int getBaseAttackDamage() const;
    int getDefence() const;
    int getBaseDefence() const;
    std::string getSplashArt() const;
    Ability* getGenericAbility();
    Ability* getSpecialAbility();

protected:
    std::string m_name;
    std::string m_splashArt;
    Ability* m_genericAbility;
    Ability* m_specialAbility;
    int m_damagePercent;
    int m_baseAgility;
    int m_baseAttackDamage;
    int m_baseDefence;

    int m_agilityModifier;
    int m_attackModifier;
    int m_defenceModifier;
};


#endif //CONSOLE_SMASH_BROS_FIGHTER_H
