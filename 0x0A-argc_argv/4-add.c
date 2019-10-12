#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - principal function
 * @argc: Count arguments
 * @argv: arguments strings
 * Return: Print all the arguments strings.
 * On error, -1 is returned, and errno is set appropriately.
 **/
int main(int argc, char *argv[])
{
	int i;
	int resul = 0;

	if (argc == 1)
	{
		printf("%d\n", argc - 1);
		return (0);
	}
	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			if (atoi(argv[i]) == 0 && *argv[i] != '0')
			{
				printf("Error\n");
				return (1);
			}
			else
			{
				resul += atoi(argv[i]);
			}
		}
		printf("%d\n", resul);
		return (0);
	}
	return (0);
}
