#include "main.h"

/**
 * binary_to_uint - converts a binary to an unsigned
 * @b: points to a string of 0 and 1
 *
 * Return: converted number or 1
 */

unsigned int binary_to_uint(const char *b)
{
	if (b == NULL)
		return (0);

	unsigned int rs = 0;

	int i = 0;

	while (b[i] != '\0')
	{
		if (b[i] != '0' && b[i]  != '1')
		{
			return (0);
		}

		rs = rs << 1;
		rs += (b[i] - '0');
		i++;
	}

	return (rs);
}

