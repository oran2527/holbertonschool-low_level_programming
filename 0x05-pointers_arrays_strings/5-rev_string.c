#include<stdio.h>
#include<string.h>
#include "holberton.h"

/**
 * rev_string - prints
 * @s: The character to print
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 **/
void rev_string(char *s)
{
	char *strputs;
	int i;
	int c;
	int j;
	char cadena [sizeof(s)];

	strputs = s;
	i = 0;
	while (strputs[i] != '\0')
	{
		++i;
	}
	j = 0;
	for (c = i; c >= 0; c--)
	{
		cadena[j] = (char)strputs[c];
		++j;
		putchar(cadena[j] + 48);
	}
	putchar('\n');
}
