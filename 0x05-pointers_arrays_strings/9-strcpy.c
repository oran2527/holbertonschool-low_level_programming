#include "holberton.h"
#include <string.h>

/**
 * _strcpy - prints
 * @dest: The character to print
 * @src: The character to print
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 **/
char *_strcpy(char *dest, char *src)
{
	int i;
	int large;

	if (dest == NULL && src != NULL)
	{
		i = 0;
		while (src != '\0')
			i++;
		large = i;
		for (i = 0; i <= large - 1; i++)
			if (i != large)
				*(dest + i) = *(src + i);
			else
				*(dest + large) = '\0';
	}
	return dest;
}
