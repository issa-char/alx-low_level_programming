#include "main.h"

/**
 * get_endianness- checks the endianness of the sytem
 *
 * Return: 0 or 1
 */
int get_endianness(void)
{
		unsigned int num = 1;
		char *endian_check = (char *)&num;

		return (*endian_check);
}

