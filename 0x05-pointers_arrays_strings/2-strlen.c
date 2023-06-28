#include "main.h"

/**
*int _strlen() - get length of string
*@s: first operand
*
*Return: string length
*/

int _strlen(char *s)
{
	int count, inc;
	inc = 0;
	for (count = 0; s[count] != '\0'; count++)
	inc++;

	return (inc);
}