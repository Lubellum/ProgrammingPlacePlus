#include <stdlib.h>
#include <stdio.h>

int SectionA14()
{
    char* str;
    str = (char*)malloc(100);
    malloc(100); // 本来の書き方



    if (str == NULL)
    {
        printf_s("メモリが確保できません\n");
        exit(EXIT_FAILURE);
    }

    gets_s(str, 100);

    puts(str);

    free(str);

    return 0;
}