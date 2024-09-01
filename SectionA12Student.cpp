#include "SectionA12Student.h"

CSectionA12Student::CSectionA12Student(int aScore)
    : mScore2(100), mScore(ValidateScore(aScore))
{

}

CSectionA12Student::~CSectionA12Student()
{

}

    //int a = 5;
const int* CSectionA12Student::GetScore() const
{
    //a += 10;
    //mScore += 10;

    return &mScore;
}
 
// もともとはセッター
int CSectionA12Student::ValidateScore(const int aValue) const
{
    //aValue += 50;
    if (aValue <= 100)
    {
        return aValue;
    }
}



class File {
public:
    File(const char* fileName);
};

File::File(const char* fileName)
{
}

File fire = "test.bin";  // コピー初期化なら OK
File file2("test.bin");   // 直接初期化ではコンパイルエラー