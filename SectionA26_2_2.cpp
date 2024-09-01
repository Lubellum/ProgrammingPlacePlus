#include "SectionA26_2_2.h"
#include <iostream>

CMewtwo::CMewtwo()
{
    std::cout << "ミュウツーのコンストラクタ" << std::endl;
}

CMewtwo::~CMewtwo()
{
    std::cout << "ミュウツーのデストラクタ" << std::endl;
}

const void CMewtwo::Jump()
{
    std::cout << "ミュウツーのJump" << std::endl;

    Vocalize();
}

void CMewtwo::Jump(const int aHeight)
{

}

void CMewtwo::Vocalize()
{
    std::cout << "ヴぁっ" << std::endl;
}