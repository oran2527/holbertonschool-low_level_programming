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
	unsigned int i = 0, j = 0, k, m;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; *(s1 + i) != '\0' && s1 != NULL; )
		i++;
	for (j = 0; *(s2 + j) != '\0' && s2 != NULL; )
		j++;
	if (n >= j)
		n = j;
	if (n <= 0)
		n = 0;
	pointer = malloc((i + n + 1) * sizeof(char));
	if (pointer != NULL)
	{
		for (m = 0; m < i; m++)
			*(pointer + m) = *(s1 + m);
		for (k = 0; k < n; k++)
			*(pointer + m + k) = *(s2 + k);
		*(pointer + (i + n + 1)) = '\0';
		return (pointer);
	}
	return (pointer);
}
