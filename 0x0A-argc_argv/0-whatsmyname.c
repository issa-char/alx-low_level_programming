#include "main.h"


int main(int argc, char *argv[])
{
	if (argc >= 1)
	{
		int i;
		char *j = argv[0];

		for (i = 0; j[i] != '\0'; i++)
		{
			_putchar(j[i]);
		}
	}
	_putchar('\n');
}
