#include "holberton.h"
#include <string.h>

/**
 * *_strcat - prints
 * @dest: The character to print
 * @src: The character to print
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 **/
char *_strcat(char *dest, char *src)
{
	char *final;

	final = strcat(dest, src);
	return (final);
}
