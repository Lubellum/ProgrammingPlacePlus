#include "SectionA26_2_1.h"
#include <iostream>

CPikachu::CPikachu()
{
    std::cout << "�s�J�`���E�̃R���X�g���N�^" << std::endl;
}

CPikachu::~CPikachu()
{
    std::cout << "�s�J�`���E�̃f�X�g���N�^" << std::endl;
}

void CPikachu::Vocalize()
{
    std::cout << "�т���" << std::endl;
}

void CPikachu::Appeal()
{
    std::cout << "Appeal" << std::endl;
    Jump();
    Vocalize();
}

const void CPikachu::Jump()
{
    std::cout << "�s�J�`���E��Jump" << std::endl;
    Vocalize();
}

void CPikachu::Jump(const int aHeight)
{

}

//void CPikachu::Jump(const char* aText)
//{
//    std::cout << "�s�J�`���E��Jump(��������) �����F" << aText << std::endl;
//}