#include "holberton.h"
#include <string.h>

/**
 * _strcmp - prints
 * @s1: The character to print
 * @s2: The character to print
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 **/
int _strcmp(char *s1, char *s2)
{
	int final;

	final = strcmp(s1, s2);
	return (final);
}
