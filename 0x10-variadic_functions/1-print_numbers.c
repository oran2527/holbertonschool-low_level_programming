#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_numbers - print all the numbers
 * @n: amount arguments
 * @...: arguments
 * @separator: symbol that separates the numbers
 * Return: nothing
 **/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	if (separator != NULL && n > 0)
	{
		va_start(args, n);
		for (i = 0; i < n; i++)
			printf("%d%s", va_arg(args, int), separator);
		va_end(args);
		printf("\n");
	}
}
