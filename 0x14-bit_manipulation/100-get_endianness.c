#include "main.h"

/**
 * get_endianess - check endianness of system
 *
 * Return: 0 if big endian, 1 if ltl endian
 */
int get_endianness(void)
{
	unsigned int tst = 1;
	char *bptr = (char *)&tst;

	if (*bptr)
		return (1);
	else
		return (0);
}

