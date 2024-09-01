#include "SectionA26_2_1.h"
#include <iostream>

CPikachu::CPikachu()
{
    std::cout << "ピカチュウのコンストラクタ" << std::endl;
}

CPikachu::~CPikachu()
{
    std::cout << "ピカチュウのデストラクタ" << std::endl;
}

void CPikachu::Vocalize()
{
    std::cout << "びがぁ" << std::endl;
}

void CPikachu::Appeal()
{
    std::cout << "Appeal" << std::endl;
    Jump();
    Vocalize();
}

const void CPikachu::Jump()
{
    std::cout << "ピカチュウのJump" << std::endl;
    Vocalize();
}

void CPikachu::Jump(const int aHeight)
{

}

//void CPikachu::Jump(const char* aText)
//{
//    std::cout << "ピカチュウのJump(引数あり) 引数：" << aText << std::endl;
//}