#include "main.h"

/**
 * get_bit - Returns the value of a bit at a given index
 * @n: The number to extract
 * @index: Index of bit to extract
 *
 * Return:  value/-1
 */
int get_bit(unsigned long int n, unsigned int index)
{

		unsigned long int mask = 1UL << index;
		int bit = (n & mask) ? 1 : 0;

	
		if (index >= (sizeof(unsigned long int) * 8))
		{
			return (-1);
		}


		return (bit);
}

