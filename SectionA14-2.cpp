#include <iostream>

void Function(const int* apValue)
{
    if (nullptr != apValue)
    {
        printf_s("value is %d \n", *apValue);
    }
}

void Function2(const int& apValue)
{
    printf_s("value is %d \n", apValue);
}

void SectionA14_2()
{
    int* pNumber = new int();

    if (nullptr != pNumber)
    {
        *pNumber = 100;

        //Function(pNumber);
        Function2(*pNumber);
    }
}