#include "main.h"

/**
 * print_binary - Pint the binary representation of a number.
 * @n: the number to convert and print
 *
 * Return: zero
 */
void print_binary(unsigned long int n)
{
		if (n > 1)
		{
			print_binary(n >> 1);
		}
		_putchar((n & 1) + '0');
}

