# include<stdio.h>

/**
*main - print all the alphabet except q and e
*Return: zero
*/
int main(void)
{
    char i = 'a';

    while (i <= 'z')
    {
        if (i != 'q' && i != 'e');
        {
            putchar(i);
        }
        i++;
    }
    
    putchar ('\n');

    return 0;
}
