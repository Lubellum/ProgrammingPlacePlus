#pragma once

class CStudent
{
public:
    CStudent();
    ~CStudent();

    std::string mName;   // 名前
    int         mGrade;  // 学年
    int         mScore;  // 得点

    void SetData( std::string aName, int aGrade, int aScore );

private:

};