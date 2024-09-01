#include "SectionA12Student.h"
#include <iostream>
#include <vector>

int value = 10;

void func()
{
    CStore store(10);

    value = 50;
}

CStore::CStore(int aVlue)
    : mValue(aVlue)
{

}

CStore::~CStore()
{
    value = mValue;
}



CEnemy::CEnemy()
{
}

CEnemy::~CEnemy()
{
}



CField::CField()
    //:mpEnemy(nullptr)
    :mEnemy()
{
}

CField::~CField()
{
}

void CField::Initialize()
{
    //mpEnemy = new CEnemy;
}


void SectionA12()
{
    //CSectionA12Student student1(150);
    //CSectionA12Student student1 = 150;
    CSectionA12Student student2(50);
    //CSectionA12Student student3(-10);
    //CSectionA12Student student4();

    const int* score = student2.GetScore();

    //(*score)++;
    //score = nullptr;

    //printf_s("%d点", *score);
    //printf_s("%d点", *student1.GetScore());
    //printf_s("%d点", *student2.GetScore());
    //printf_s("%d点", *student3.GetScore());
    //printf_s("%d点", *student4.GetScore());

    //const std::vector<int> sample = {1, 2, 3};

    printf_s("%d\n", value);
    func();
    printf_s("%d\n", value);

    CField field;
    field.Initialize();
}