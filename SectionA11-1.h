#pragma once

class CStudent
{
public:
    CStudent();
    ~CStudent();

    std::string mName;   // ���O
    int         mGrade;  // �w�N
    int         mScore;  // ���_

    void SetData( std::string aName, int aGrade, int aScore );

private:

};