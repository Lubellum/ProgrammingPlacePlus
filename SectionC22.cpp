#include <iostream>

class CMonster
{
public:
	CMonster();
	~CMonster();

	void Damage();
	void Print();

private:
	int mHP;
};

CMonster::CMonster()
	: mHP(100)
{
}

CMonster::~CMonster()
{
}

void CMonster::Damage()
{
	mHP -= 20;
}

void CMonster::Print()
{
	std::cout << mHP << std::endl;
}


void SectionC22()
{
	
CMonster monster;
CMonster monster2;

	monster.Print();
	monster.Damage();
	monster.Print();

	monster2.Print();
	monster2.Damage();
	monster2.Print();
}

void SectionC22_2()
{
	//monster.Print();
}