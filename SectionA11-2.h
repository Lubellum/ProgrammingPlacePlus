#pragma once

class CTeacher
{
public:
	CTeacher();
	~CTeacher();

	std::string mName;
	int mInChargeGrade;
	CStudent mInChargeStudent[40];

	void InquiryStudentsScore();

private:

};

CTeacher::CTeacher()
{
}

CTeacher::~CTeacher()
{
}