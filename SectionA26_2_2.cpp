#include "SectionA26_2_2.h"
#include <iostream>

CMewtwo::CMewtwo()
{
    std::cout << "�~���E�c�[�̃R���X�g���N�^" << std::endl;
}

CMewtwo::~CMewtwo()
{
    std::cout << "�~���E�c�[�̃f�X�g���N�^" << std::endl;
}

const void CMewtwo::Jump()
{
    std::cout << "�~���E�c�[��Jump" << std::endl;

    Vocalize();
}

void CMewtwo::Jump(const int aHeight)
{

}

void CMewtwo::Vocalize()
{
    std::cout << "������" << std::endl;
}