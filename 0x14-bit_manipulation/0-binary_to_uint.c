#include "main.h"

unsigned int binary_to_uint(const char *b)
{
		unsigned int v = 0;
		int t = 0;

		if (b == NULL)
		{
				return (0);
		}

		while (b[t] != '\0')
		{
				if (b[t] != '0' && b[t] != '1')
				{
						return (0);
				}
				v = v << 1;
				v = v | (b[t] - '0');
				t++;
		}

		return (v);
}

