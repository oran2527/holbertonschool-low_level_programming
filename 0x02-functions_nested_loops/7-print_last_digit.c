#include "holberton.h"
/**
 * print_last_digit - prints
 * @n: The character to print
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 **/
int print_last_digit(int n)
{
if (n < 0)
{
n = (n * (-1)) - (((n * (-1)) / 10) * 10);
}
if (n > 0)
{
n = n - ((n / 10) * 10);
}
if (n == 0)
{
n = n;
}
_putchar(n + '0');
return (n);
return (0);
}
