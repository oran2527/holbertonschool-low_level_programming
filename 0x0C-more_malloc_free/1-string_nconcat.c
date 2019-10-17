#include "holberton.h"
/**
 * string_nconcat - concatenates two pointers by n src chars
 * @s1: pointer dest
 * @s2: pointer src
 * @n: number of src chars
 * Return: pointer
 **/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *pointer;
	unsigned int i, j, k;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; *(s1 + i) != '\0'; )
		i++;
	for (j = 0; *(s1 + j) != '\0'; )
		j++;
	if (n >= j)
		n = j;
	pointer = malloc((i + n + 1) * sizeof(char));
	if (pointer != NULL)
	{
		for (i = 0; *(s1 + i) != '\0'; i++)
		{
			*(pointer + i) = *(s1 + i);
		}
		for (k = 0; k < n; k++)
		{
			*(pointer + i + k) = *(s2 + k);
		}
		*(pointer + k + i) = '\0';
		return (pointer);
	}
	return (NULL);
}
