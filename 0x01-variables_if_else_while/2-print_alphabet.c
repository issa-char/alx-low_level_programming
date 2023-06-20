#include <stdio.h>

/**
*main- alphabet game
Return:  zero
*/
int main(void)
{
    char i = 'a';
    
    while (i < 'z')
    {
        putchar (i);
        i++;
    }

    putchar('\n');

    return 0;
}