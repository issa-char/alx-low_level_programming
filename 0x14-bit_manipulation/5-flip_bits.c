#include <stdio.h>

/**
 * flip_bits - count how many to flip
 * @n: the first no.
 * @m: sec no.
 *
 * Return: bits needed to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor_rs = n ^ m;
	unsigned int cn = 0;

	while (xor_rs != 0)
	{
		cn += xor_rs & 1;
		xor_rs >>= 1;
	}

	return (cn);
}

