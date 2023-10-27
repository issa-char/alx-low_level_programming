#include "main.h"

/**
 * set_bit - Set value of bit 1 at given index.
 * @n: pointer to bit set
 * @index: index of bit to get set
 *
 * Return: 1 or -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
		unsigned long int mask = 1UL << index;

		if (index >= sizeof(unsigned long int) * 8)
		{
			return (-1);
		}

		*n = *n | mask;

		return (1);
}

