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
	unsigned int i = 0, j = 0, k = 0;

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
	printf("%u %u %u", i, j, n);
	pointer = malloc((i + n + 1) * sizeof(char));
	if (pointer != NULL)
	{
		for (i = 0; *(s1 + i) != '\0' && s1 != NULL && s2 != NULL; i++)
			*(pointer + i) = *(s1 + i);
		for (k = 0; k < n && s1 != NULL && s2 != NULL; k++)
			*(pointer + i + k) = *(s2 + k);
		for (k = 0; k != '\0' && s1 == NULL && s2 != NULL; k++)
			*(pointer + k) = *(s2 + k);
		*(pointer + (i + n + 1)) = '\0';
		return (pointer);
	}
	return (pointer);
}
