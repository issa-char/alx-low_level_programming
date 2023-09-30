#include <stdio.h>
#include "main.h"

/**
 * set_bit - set value of bit at 1 at index
 * @n: pointer
 * @index: index of set bit.
 *
 * Return: 1 or -1 if err
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if(index >= sizeof(unsigned long int) * 8)
		return (-1);
	*n = *n | (1UL << index);
	return(1);
}

