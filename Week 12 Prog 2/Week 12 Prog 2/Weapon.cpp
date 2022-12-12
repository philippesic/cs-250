//
//  Weapon.cpp
//  Week 12 Prog 2
//
//  Created by Pippo Pesic on 11/3/22.
//

#include "Weapon.h"
#include <iostream>

Weapon::Weapon() {
    m_AtkBonus = 3;
    m_Volatility = 6;
}

double Weapon::getAtkBonus() {
    return m_AtkBonus;
}

double Weapon::getVolatility() {
    return m_Volatility;
}
