#include "main.h"

/**
 * clear_bit - set value of bit to 0
 * @n: pointer
 * @index: index of bit to clear
 *
 * Return: 1 or -1 if err
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	*n = *n &  ~(1UL << index);
	return (1);
}

