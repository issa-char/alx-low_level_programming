#include <stdio.h>

/**
 * print_name - Prints a name using a provided function.
 * @name: Name to print.
 * @f: Function pointer that takes a char* argument and returns void.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
