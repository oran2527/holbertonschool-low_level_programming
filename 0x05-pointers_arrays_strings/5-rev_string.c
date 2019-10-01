#include "holberton.h"
#include <stdio.h>

/**
 * rev_string - prints
 * @s: The character to print
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 **/
void rev_string(char *s)
{

	int i;
	char cadena[sizeof(s) + 1];
	int large;

	large = (int)sizeof(s) + 1;
	for (i = 0; i <= large; i++)
	{
		cadena[i] = (char) *(s + i);
	}
	for (i = 0; i <= large; i++)
	{
		*(s + i) = cadena[large - i - 1];
	}
}
