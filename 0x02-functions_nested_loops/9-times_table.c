#include "holberton.h"
/**
 * times_table - prints
 * @n,c: The character to print
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 **/
void times_table(void)
{
int n;
int c;

for (n = 0; n <= 9; n++)
{
for (c = 0; c <= 9; c++)
{
if ((n * c) == 0 && c == 0)
{
_putchar((n * c) + 48);
}
_putchar(',');
_putchar(' ');
if ((n * c) <= 9 && c != 0)
{
_putchar(' ');
_putchar((n * c) + 48);
}
if ((n * c) >= 10 && c != 0)
{
_putchar(((n * c) / 10) + 48);
_putchar(((n * c) % 10) + 48);
}
}
_putchar ('\n');
}
}
