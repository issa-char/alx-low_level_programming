#include "main.h"

/**
 * flip_bits - count bits to flip
 * @n: first number
 * @m: second number
 *
 * Return: no. of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
		unsigned long int bit = n ^ m;
		unsigned int count = 0;

		while (bit > 0)
		{
			count += bit & 1;
			bit = bit >> 1;
		}

		return (count);
}

