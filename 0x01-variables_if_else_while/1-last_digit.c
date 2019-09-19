#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, l;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	l = n % 10;

	if (n > 5)
	{
		printf("Last digit of %i is %i and is greater than 5\n", n, l);
	}
	if (n == 0)
	{
		printf("Last digit of %i is %i and is 0\n", n, l);
	}
	if (n < 6 && n != 0)
	{
		printf("Last digit of %i is %i and is less than 6 and not 0\n",	n, l);
	}
	return (0);
}
