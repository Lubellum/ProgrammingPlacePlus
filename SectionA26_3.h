#pragma once

class CBattleCharacterEX
{
public:
	//CBattleCharacter(int aDamage);
	~CBattleCharacterEX();
	static CBattleCharacterEX* GetInstance();
	void Jump();
	void Jab();

protected:
	int damage;
	//void Dash();
	void Vocalize();
	void Shield();

	//void ForwardSmash();
	//void UpSmash();
	//void DownSmash();

private:
	CBattleCharacterEX();
};