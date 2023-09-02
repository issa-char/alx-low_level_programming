#include "main.h"

/**
 * flip_bits - count bits to flip
 * @n: first unsigned long int
 * @m: second unsigned long int
 *
 * Return: number of bits flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
		unsigned long int r = n ^ m;
		unsigned int c = 0;

		while (r > 0)
		{
				c = r & 1;
				r >>=1;
		}

		return (c);
}

