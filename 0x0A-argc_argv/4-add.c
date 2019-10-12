#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - principal function
 * @argc: Count arguments
 * @argv: arguments strings
 * Return: Print all the arguments strings.
 * On error, -1 is returned, and errno is set appropriately.
 **/
int main(int argc, char *argv[])
{
	int i = 1;
	int resul = 0;

	if (argc == 1)
	{
		printf("%d\n", argc - 1);
		return (0);
	}
	if (argc > 1)
	{
		for ( ; i < argc; i++)
		{
			if (argv[i] != 0)
			{
				resul += atoi(argv[i]);
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}
		printf("%d\n", resul);
		return (0);
	}
	return (0);
}
