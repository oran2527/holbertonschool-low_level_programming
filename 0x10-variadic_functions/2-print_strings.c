#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_string - print all the strings
 * @n: amount arguments
 * @...: arguments
 * @separator: symbol that separates the strings
 * Return: nothing
 **/
void print_strings(const char *separator, const unsigned int n, ...)
{
	if (separator != NULL)
	{
		va_list args;
		unsigned int i;
		char *argument;
		
		va_start(args, n);
		for (i = 0; i < n; i++)
		{
			argument = va_arg(args, char *);
			if (argument == '\0')
				printf("(nil)%s", separator);
			else
				printf("%s%s", argument, separator);

		}
		va_end(args);
		printf("\n");
	}	
}
