#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - get random no. find last digit  and compare with condition
 *
 * Return: nothing
 */
int main(void)
{
	int l, n;

	srand(time(0));
	n = rand() - RAND_MAX % 2;
	l = n % 2;

	if (l == 0)
		printf("Last digit of %d is %d and is 0\n", n, l);
	else
		if (l > 5)
			printf("Last digit of %d is %d and is greater than 5\n", n, l);
		else if (l < 6)
			printf("Last digit of %d is %d and is less than 6 and not 0\n", n, l);

	return (0);
}
