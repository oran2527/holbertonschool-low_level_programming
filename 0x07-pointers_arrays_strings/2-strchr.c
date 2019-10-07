#include "holberton.h"
#include <stdio.h>

/**
 * _strchr - prints
 * @s: The character to print
 * @c: The character to print
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 **/
char *_strchr(char *s, char c)
{
	int length_s = 0;
	int i = 0;
	int k = 0;
	char *final = NULL;

	while (*(s + length_s) != '\0')
		++length_s;
	if (length_s == 0)
	{
		return (final);
	}
	else
	{
		while ((*(s + i) != c) && (i <= length_s - 1))
		{
			++i;			
		}
		for ( ; i <= length_s - 1; i++, k++)
		{
			*(final + k) = *(s + i + 1);
		}
		return (final);
	}
}
