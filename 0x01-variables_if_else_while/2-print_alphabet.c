#include <stdio.h>

/**
 * main - print all the letters of the alphabet
 *
 * Return: 0
 */
int main(void)
{
	char n = 'a';

	while (n <= 'z')
	{
		putchar(n);
		n++;
	}
	putchar('\n');

	return (0);
}
