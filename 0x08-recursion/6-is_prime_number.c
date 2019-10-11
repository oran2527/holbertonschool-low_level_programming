#include "holberton.h"
/**
 * is_prime_number - prints
 * @n: The character to print
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 **/
int is_prime_number(int n)
{
	int resul = 0;

	if (n < 2)
	{
		return (0);
	}
	else
	{
		resul = _getpn(n, 2, 0);
		if (resul == 1)
			return (1);
		else
			return (0);
	}
}
int _getpn(int n, int a, int resul)
{
	if ((n % a) == 0)
	{
		resul++;
		if ( a != n)
			return _getpn((n / a), a, resul);
		return (resul);
	}
	else if (n != a && ((n / a) != 0))
	{
		return (_getpn(n, a + 1, resul));
	}
	return (0);
}
