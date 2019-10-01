#include "holberton.h"

/**
 * print_rev - prints
 * @s: The character to print
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 **/
void print_rev(char *s)
{
	char *strputs;
	int i;
	int c;

	strputs = s;
	i = 0;
	while (strputs[i] != '\0')
	{
		++i;
	}
	for (c = i; c >= 0; c--)
	{
		_putchar(strputs[c]);
	}
	_putchar('\n');
}
