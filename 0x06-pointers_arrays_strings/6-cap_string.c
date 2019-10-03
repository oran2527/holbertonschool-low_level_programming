#include "holberton.h"
#include <ctype.h>
/**
 * cap_string - prints
 * @c: The character to print
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 **/
char *cap_string(char *c)
{
	int i;

	i = 0;
	while (*(c + i) != '\0')
	{
		if ((
			(*(c + i)) == ' ' || 
			(*(c + i)) == 10 ||
			(*(c + i)) == ',' ||
			(*(c + i)) == ';' ||
			(*(c + i)) == '.' ||
			(*(c + i)) == '!' ||
			(*(c + i)) == '?' ||
			(*(c + i)) == '"' ||
			(*(c + i)) == '(' ||
			(*(c + i)) == ')' ||
			(*(c + i)) == '{' ||
			(*(c + i)) == '}' ||
			(*(c + i)) == 9
		)&&(
			(*(c + i + 1)) == [a-zA-z]
		))
		{
			
		}



			





			*(c + i) = toupper(*(c + i));
		i++;
	}
	return (c);
}
