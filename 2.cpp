void SetNumber(int aaaa);

int GetNumber();

//extern int a;

void Sample()
{
    static int c = 100;
    SetNumber(100);
    //a = 10;
}