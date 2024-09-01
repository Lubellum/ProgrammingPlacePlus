#include <iostream>

void print_value(int v)
{
    std::cout << "int: " << v << std::endl;
}

namespace n {
    void print_value(double v)
    {
        std::cout << "double: " << v << std::endl;
    }

    void func()
    {
        print_value(10);    // �������� int �����An::print_value(double) ���Ă΂��
        print_value(10.5);  // n::print_value(double) ���Ă΂��
    }
}

void Section08Sample()
{
    n::func();
}