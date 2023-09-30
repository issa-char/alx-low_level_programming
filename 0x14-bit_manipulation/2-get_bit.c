#include "main.h"

/**
 * get_bit - return value of bit at index
 * @n: number to extract bit from
 * @index: index to get from 0
 *
 * Return: value at index or -1 if err
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	return ((n >> index) & 1);
}

