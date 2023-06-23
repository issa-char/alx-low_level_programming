#include "main.h"
/**
*print_triangle - prints a triangle
*
*Return:returns nothing
*/
void print_triangle(int size)
{
int inct1, inct2;

if (size > 0)
{
for (inct1 = 1; inct1 <= size; inct1++)
{
for ((inct2 = size - inct1); inct2 > 0; inct2--)
_putchar(' ');

for (inct2 = 0; inct2 < inct1; inct2++)
_putchar('#');

if (inct1 == size)
continue;

_putchar('\n');
}
}
_putchar('\n');
}