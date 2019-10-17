#include "holberton.h"
/**
 * array_range - array
 * @min: minimunm
 * @max: maximum
 * Return: pointer
 **/
int *array_range(int min, int max)
{
	char *pointer;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	pointer = malloc(size * nmemb);
	if (pointer != NULL)
	{
		for (i = 0; i < nmemb; i++)
		{
			*(pointer + i) = 0;
		}
		return (pointer);
	}
	return (NULL);
}
