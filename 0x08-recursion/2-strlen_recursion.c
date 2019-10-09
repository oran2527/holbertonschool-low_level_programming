#include "holberton.h"
/**
 * _strlen_recursion - prints
 * @s: The character to print
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 **/
int _strlen_recursion(char *s)
{
	int i;

	if (*s != '\0')
	{			
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
