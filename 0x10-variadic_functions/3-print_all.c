#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_all - print all
 * @format: format
 * @...: arguments
 * Return: nothing
 **/
void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i;
	char *argument;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		argument = va_arg(args, char *);
		if (argument == '\0')
			printf("(nil)");
		else
			printf("%s", argument);
		if (i < (n - 1))
			if (separator != '\0')
				printf("%s", separator);
	}
	va_end(args);
	printf("\n");
}
