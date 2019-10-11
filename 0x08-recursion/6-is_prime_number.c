int _getpn(int, int, int);
/**
 * is_prime_number - prints
 * @n: The character to print
 * Return: On success 1.
 **/
int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	if (n >= 2)
	{
		if ((_getpn(n, 2, 0)) == 1)
			return (1);
		else
			return (0);
	}
	return (0);
}
/**
 *_getpn - do operations
 *@n: number
 *@a: divider
 *@resul : counter
 *Return: 1 if n % i is different from 0, otherwise 0
 **/
int _getpn(int n, int a, int resul)
{
	if ((n % a) == 0)
	{
		resul++;
		if (a != n)
			return (_getpn((n / a), a, resul));
		return (resul);
	}
	else if ((n != a) && ((n / a) != 0))
		return (_getpn(n, a + 1, resul));
	return (0);
}
