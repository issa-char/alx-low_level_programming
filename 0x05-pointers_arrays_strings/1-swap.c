#include "main.h"

/**
*swap_int - swap two int values
*@a: first operand
*@b: second operand
*
*Return: 0
*/

void swap_int(int *a, int *b)
{
	int  y = *a;
	*a =  *b;
	*b = y;
}
