#include <iostream>

const int& func()
{
    static int n = 100;

    std::cout << n << std::endl;

    return n;
}

void SectionA16()
{
    const int& a = func();
    //a = 200;
}