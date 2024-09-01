#include "SectionA26_3.h"
#include <iostream>

CBattleCharacterEX* CBattleCharacterEX::GetInstance()
{
    static CBattleCharacterEX* instance;
    if (instance == nullptr)
    {
        instance = new CBattleCharacterEX();
    }
    return instance;
}

CBattleCharacterEX::CBattleCharacterEX()
    : damage(10)
{
    damage = 5;
}

//CBattleCharacterEX::CBattleCharacterEX(int aDamage)
//    : damage(aDamage)
//{
//
//}

CBattleCharacterEX::~CBattleCharacterEX()
{
}

void CBattleCharacterEX::Jump()
{
    std::cout << "Jump" << std::endl;
}

void CBattleCharacterEX::Shield()
{
    std::cout << "Shield" << std::endl;
}

void CBattleCharacterEX::Jab()
{
    std::cout << "Jab" << std::endl;
    Vocalize();
}

void CBattleCharacterEX::Vocalize()
{
    std::cout << "Voice" << std::endl;
}