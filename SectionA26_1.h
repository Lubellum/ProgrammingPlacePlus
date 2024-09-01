#pragma once

class IBattleCharacter
{
public:
	IBattleCharacter();

	virtual ~IBattleCharacter() = 0;
	const virtual void Jump() = 0;
	virtual void Jump(const int aHeight) = 0;
	
	//virtual void Jab() = 0;
	//void Dash();
	//virtual void Shield() = 0;
	//void ForwardSmash();
	//void UpSmash();
	//void DownSmash();

protected:
	virtual void Vocalize() = 0;

private:
};