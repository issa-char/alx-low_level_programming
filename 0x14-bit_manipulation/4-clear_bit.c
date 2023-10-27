#include "main.h"

/**
 * clear_bit - set value of bit to 0.
 * @n: Pointer to the number
 * @index: bit to clear
 *
 * Return: 1 0r -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
		unsigned long int mask = 1UL << index;
		*n = *n & ~mask;

		if (index >= sizeof(unsigned long int) * 8)
		{
			return (-1);
		}

		return (1);
}

