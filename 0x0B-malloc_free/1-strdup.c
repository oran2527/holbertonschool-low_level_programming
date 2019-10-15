#include "holberton.h"
#include <stdlib.h>
/**
 * create_array - create array with malloc
 * @size: Amount of elements
 * @c: Character to print
 * Return:  pointer1
 * On error, NULL is returned
 **/
char *_strdup(char *str)
{
	char *pointer1;
	int i;

	if (str == NULL)
	{
		pointer1 = NULL;
	}
	else
	{
		for (i = 0; i != '\0'; i++)
		pointer1 = (char *)malloc(i * sizeof(*pointer1));
		
	}
	return (pointer1);
}

