#pragma once

#include "SectionA26_1.h"

class CPikachu : public IBattleCharacter
{
public:
	CPikachu();
	~CPikachu();
	void Appeal();

	const void Jump() override;
	void Jump(const int aHeight) final;
	void Vocalize();

	//void Jump(const char* aText);

	//CBattleCharacter();

	
private:
};