#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	int n;
	char Fizz[] = "Fizz";
	char Buzz[] = "Buzz";

	for (n = 1; n <= 100; n++)
	{
		if (n % 3 != 0 && n % 5 != 0)
		{
			if (n > 9)
				putchar(n / 10 + 48);
			putchar(n % 10 + 48);
		}
		else
		{
			if (n % 3 == 0)
				printf("%s", Fizz);
			if (n % 5 == 0)
				printf("%s", Buzz);
		}
		
		if (n != 100)
			putchar(' ');
			
	}
	putchar('\n');
	return (0);
}
