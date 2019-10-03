#include "holberton.h"
#include <string.h>

/**
 * _strncpy - prints
 * @dest: The character to print
 * @src: The character to print
 * @n: The character to print
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 **/
char *_strncpy(char *dest, char *src, int n)
{
	char *final;

	final = strncpy(dest, src, n);
	return (final);
}
