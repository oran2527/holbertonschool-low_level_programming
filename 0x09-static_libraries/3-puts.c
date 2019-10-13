#include<stdio.h>
#include<string.h>
#include "holberton.h"

/**
 * _puts - prints
 * @str: The character to print
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 **/
void _puts(char *s)
{
	char *strputs;
	int i;

	strputs = s;
	i = 0;
	while (strputs[i] != '\0')
	{
		_putchar(strputs[i]);
		++i;
	}
	_putchar('\n');
}
