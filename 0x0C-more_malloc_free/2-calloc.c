#include "holberton.h"
/**
 * _calloc - calloc
 * @nmemb: members
 * @size: size
 * Return: pointer
 **/
void *_calloc(unsigned int nmemb, unsigned int size)
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
