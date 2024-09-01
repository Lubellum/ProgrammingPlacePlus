#ifndef SECTIONA12STUDENT_INCLUDED

#define SECTIONA12STUDENT_INCLUDED

class CSectionA12Student
{
public:

	explicit CSectionA12Student(const int aScore);
	~CSectionA12Student();

	const int* GetScore() const;


private:

	// ŠÖ”¨•Ï”@ŠT—v¨Ú×
	//CSectionA12Student();
	int ValidateScore(int aScore) const;

	// ‰Šú‰»‚ğ‚·‚éÛ‚Íƒƒ“ƒo•Ï”‚Ì‡”Ô‚Å‚È‚é¨ƒƒ‚ƒŠ‚Ì‡”Ô
	const int mScore2;
	const int mScore;

};

class CStore
{
public:
	CStore(int aValue);
	~CStore();
	

private:
	int mValue = 0;
};

class CEnemy
{
public:
	CEnemy();
	~CEnemy();

private:

};


class CField
{
public:
	CField();
	~CField();
	//CEnemy* mpEnemy;
	CEnemy mEnemy;
	void Initialize();

private:

};

#endif // !SECTIONA12STUDENT_INCLUDED