#include "main.h"

/**
 * get_endianness - check endianness of system
 *
 * Return: 0 if big endian, 1 if little
 */
int get_endianness(void)
{
		unsigned int n = 1;
		char *p = (char *)&n;

		return (*p == 1) ? 1 : 0; 
}
