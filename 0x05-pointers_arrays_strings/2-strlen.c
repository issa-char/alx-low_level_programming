#include "main.h"

/**
*_strlen() - get length of string
*@s: first operand
*
*Description: works out  and gets us the length of string
*Return: return length
*/

int _strlen(char *s)
{
	int count, inc;

	inc = 0;
	for (count = 0; s[count] != '\0'; count++)
	inc++;

	return (inc);
}
