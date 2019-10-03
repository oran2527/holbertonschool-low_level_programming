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
	int resultado, totals1, totals2;

	for (totals1 = 0; *(s1 + totals1) != '\0'; totals1++)
	for (totals2 = 0; *(s2 + totals2) != '\0'; totals2++)
	if (totals1 < totals2)
		resultado = -15;
	else if (totals1 > totals2)
		resultado = 15;
	else
		resultado = 0;
	return (resultado);
}


