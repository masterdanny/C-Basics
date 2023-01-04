#include <stdio.h>
#include <stdlib.h>

int main()
{

    for (int i = 0; i < 4; i++)
    {
        char *str = malloc(4);
        str[0] = 'h';
        str[1] = 'e';
        str[2] = 'y';
        str[3] = '\n';
        free(str);
    }

    return 0;
}