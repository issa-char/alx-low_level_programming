#include "main.h"

/**
*_puts - print to stdout
*@str: first operand
*
*Description: prints string
*On success: return the number of char printed
*/

void _puts(char *str)
{
	while (*str)
	_putchar(*str++);

_	putchar('\n');
}
