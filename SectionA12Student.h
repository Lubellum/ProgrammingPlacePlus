#ifndef SECTIONA12STUDENT_INCLUDED

#define SECTIONA12STUDENT_INCLUDED

class CSectionA12Student
{
public:

	explicit CSectionA12Student(const int aScore);
	~CSectionA12Student();

	const int* GetScore() const;


private:

	// 関数→変数　概要→詳細
	//CSectionA12Student();
	int ValidateScore(int aScore) const;

	// 初期化をする際はメンバ変数の順番でなる→メモリの順番
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