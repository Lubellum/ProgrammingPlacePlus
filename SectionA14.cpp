#include <stdlib.h>
#include <stdio.h>

int SectionA14()
{
    char* str;
    str = (char*)malloc(100);
    malloc(100); // –{—ˆ‚Ì‘‚«•û



    if (str == NULL)
    {
        printf_s("ƒƒ‚ƒŠ‚ªŠm•Û‚Å‚«‚Ü‚¹‚ñ\n");
        exit(EXIT_FAILURE);
    }

    gets_s(str, 100);

    puts(str);

    free(str);

    return 0;
}