#include<stdio.h>
#include<string.h>
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
	char cadena[strlen(s)];
	
	strputs = s;
	i = 0;
	while (strputs[i] != '\0')
	{
		cadena[i] = strputs[i];
		++i;
	}
	for (i = strlen(cadena); i <= 0; i--)
	{
		_putchar(strputs[i]);
	}
	_putchar('\n');
}
