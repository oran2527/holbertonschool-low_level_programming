#include "holberton.h"

/**
 * cap_string - prints
 * @c: The character to print
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 **/
char *cap_string(char *c)
{
	int i = 0, d = 0, len = 0;
	char list[] = { 32, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125, 9 };

	while (list[len] != '\0')
		len++;

	while (*(c + i) != '\0')
	{
		for (d = 0; d < len; d++)
		{
			if (*(c + i) == list[d])
			{
				if (*(c + i + 1) != list[d])
				{
					if (*(c + i + 1) >= 97 && *(c + i + 1) <= 122)
					{
						*(c + i + 1) += -32;
					}
				}
			}
		}
		i++;
	}
	return (c);
}
