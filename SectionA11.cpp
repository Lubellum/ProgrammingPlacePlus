#include <iostream>
#include <vector>
#include "SectionA11-1.h"
#include "SectionA11-2.h"

CStudent::CStudent()
{
}

CStudent::~CStudent()
{
}

void CStudent::SetData(std::string aName, int aGrade, int aScore)
{
	mName = aName;
	mGrade = aGrade;
	mScore = aScore;
}

std::string ConpparisonScore(const CStudent &aStudent1, const CStudent &aStudent2)
{
	if (aStudent1.mScore > aStudent2.mScore)
	{
		return aStudent1.mName;
	}
	else if (aStudent1.mScore < aStudent2.mScore)
	{
		return aStudent2.mName;
	}
	else
	{
		// todo: else�̍ۂ̒l��Ԃ��������L�q?
		//std::cout << "�G���[\n";
		return aStudent1.mName;
	}
}

void InquiryStudentsScore(CTeacher aTeacher, int aJ)
{
	for (int i = 0; i < aJ; i++)
	{
		std::cout << "�����F" << aTeacher.mInChargeStudent[i].mName << "\n";
		std::cout << "���_�F" << aTeacher.mInChargeStudent[i].mScore << "�_\n\n";
	}
}

void SectionA11()
{
	CStudent students[5];

	CTeacher teacher1;
	teacher1.mInChargeGrade = 1;

	students[0].SetData("��Y", 1, 30);
	students[1].SetData("���Y", 2, 50);
	students[2].SetData("�O�Y", 3, 60);
	students[3].SetData("�l�Y", 1, 70);
	students[4].SetData("�ܘY", 2, 90);

	int j = 0;

	for (int i = 0; i < 5; i++)
	{
		if (students[i].mGrade == teacher1.mInChargeGrade)
		{
			teacher1.mInChargeStudent[j] = students[i];
			++j;
		}
	}

	InquiryStudentsScore(teacher1, j);

	//std::string name = ConpparisonScore(student1, student2);

	//std::cout << name << "\n";
}