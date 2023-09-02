#include "main.h"

/**
 * set_bit - sets value to 1 at index
 * @n: pointer to unsigned long int
 * @index: index of bit to set from 0
 *
 * Return: 1 if success or -1 if err0r
 */
int set_bit(unsigned long int *n, unsigned int index)
{
		if (index >= 32)
		{
				return -1;
		}

		*N |= (1 << index);
		return 1;
}

