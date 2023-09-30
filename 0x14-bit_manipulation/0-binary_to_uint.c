#include "main.h"

/**
 * binary_to_uint - converts a binary to an unsigned
 * @b: points to a string of 0 and 1
 *
 * Return: converted number or 1
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int rs = 0;

	if (b == NULL)
		return (0);

	while (*b != '0')
	{
		if (*b != '0' && *b != '1')
			return (0);

		rs = (rs << 1) | (*b - '0');
		b++;
	}

	return (rs);
}

