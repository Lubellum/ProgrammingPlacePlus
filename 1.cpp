int a = 10;
int d = a;

void SetNumber(int aA)
{
    a = aA;
}

int GetNumber()
{
    int b = 20;
    static int c = 100;
    //return a;
    return b;
}