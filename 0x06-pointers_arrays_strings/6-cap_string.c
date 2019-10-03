#include "holberton.h"
#include <ctype.h>

/**
 * cap_string - prints
 * @c: The character to print
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 **/
char *cap_string(char *c)
{
	int i;

	i = 0;

	while (*(c + i) != '\0')
	{

		if ((
			(*(c + i - 1)) == 32 ||
			(*(c + i - 1)) == 10 ||
			(*(c + i - 1)) == 44 ||
			(*(c + i - 1)) == 59 ||
			(*(c + i - 1)) == 46 ||
			(*(c + i - 1)) == 33 ||
			(*(c + i - 1)) == 63 ||
			(*(c + i - 1)) == 34 ||
			(*(c + i - 1)) == 40 ||
			(*(c + i - 1)) == 41 ||
			(*(c + i - 1)) == 123 ||
			(*(c + i - 1)) == 125 ||
			(*(c + i - 1)) == 9
		) && (
			(*(c + i)) >= 97 &&
			(*(c + i)) <= 122
		))
		{
			*(c + i) = toupper(*(c + i));
		}
		i++;
	}
	return (c);
}
