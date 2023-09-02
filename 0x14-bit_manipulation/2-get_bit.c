#include "main.h"

/**
 * get_bit - return value of bit at index
 * @n: unsigned long int
 * @index: bit to retrieve
 * 
 * Return: value at index or -1 if error
 */
int get_bit(unsigned long int n, unsigned int index)
{
		if (index >= 32)
		{
				return (-1);
		}

		return (n >> index) & 1;
}

