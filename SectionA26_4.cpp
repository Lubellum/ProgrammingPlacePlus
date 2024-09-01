#include <iostream>

class Base {
public:
    Base();
    virtual void f()
    {
        std::cout << "Base::f()" << std::endl;
    }

private:
    static const int nBaseID = 1;
    int mTableID;
};

Base::Base()
    : mTableID(nBaseID)
{

}

class D1 : public Base {
public:
    D1();
    void f()
    {
        std::cout << "D1::f()" << std::endl;
    }
private:
    static const int nD1ID = 2;
    int mTableID;
};

D1::D1()
    : mTableID(nD1ID)
{

}

class D2 : public Base {
public:
    D2();
    void f()
    {
        std::cout << "D2::f()" << std::endl;
    }
private:
    static const int nD2ID = 3;
    int mTableID;
};

D2::D2()
    : mTableID(nD2ID)
{

}

void call_f(Base* b)
{
    b->f();
}

void SectionA26_4()
{
    D1 d1;
    D2 d2;

    call_f(&d1);
    call_f(&d2);
}