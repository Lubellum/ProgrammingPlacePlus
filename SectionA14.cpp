#include <stdlib.h>
#include <stdio.h>

int SectionA14()
{
    char* str;
    str = (char*)malloc(100);
    malloc(100); // �{���̏�����



    if (str == NULL)
    {
        printf_s("���������m�ۂł��܂���\n");
        exit(EXIT_FAILURE);
    }

    gets_s(str, 100);

    puts(str);

    free(str);

    return 0;
}