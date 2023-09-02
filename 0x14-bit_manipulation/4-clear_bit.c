#include "main.h"

/**
 * clear_bit - clear at index
 * @n - pointer to unsigned long int
 * @index - index to clear
 *
 * Return: 1 if success or -1 if error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
		if( index >= sizeof(unsigned long int) * 8)
		{
				return -1;
		}

		unsigned long int m = 1UL << index;
		m = ~m;
		*n = *n & m;

		return 1;
}

