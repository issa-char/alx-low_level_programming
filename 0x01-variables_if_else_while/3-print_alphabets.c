#include <stdio.h>

/**
*main- print the alphabet in lowercase and in uppercase
*Return: zero
*/
int main(void)
{
    char i = 'a';
    char z = 'A';

    while (i <= 'z')
    {
        putchar(i);
        i++;
    }

    while (z <= 'Z')
    {
        putchar(z);
        z++;
    }
    
    putchar('\n');

    return 0;
}