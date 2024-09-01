#pragma once

#include "SectionA26_1.h"

class CMewtwo : public IBattleCharacter
{
public:
	CMewtwo();
	~CMewtwo();

	const void Jump() override;
	void Jump(const int aHeight) final;
	void Vocalize();

private:

};
