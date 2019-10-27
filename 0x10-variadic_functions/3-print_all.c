#include "variadic_functions.h"
#include <stdio.h>
#include <string.h>
/**
 * print_all - print all
 * @format: format
 * @...: arguments
 * Return: nothing
 **/
void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0, len, flag = 0;
	char *argument;

	len = strlen(format);
	va_start(args, format);
	while (len != '\0' && i < len)
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(args, int));
				   flag = 0;
				break;
			case 'i':
				printf("%i", va_arg(args, int));
				   flag = 0;
				break;
			case 'f':
				printf("%f", va_arg(args, double));
				   flag = 0;
				break;
			case 's':
				argument = va_arg(args, char *);
				if (argument == '\0')
					printf("(nil)");
				printf("%s", argument);
				flag = 0;
				break;
			default:
				flag = 1;
				break;
		}
		if (i < (len - 1) && flag == 0)
			printf(", ");
		i++;
	}
	va_end(args);
	printf("\n");
}
