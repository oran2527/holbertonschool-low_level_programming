#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	printf("Size of a char: %d byte( s )"            ,(int) sizeof(char*));
	printf("Size of an int: %d byte( s )"            ,(int) sizeof(int*));
        printf("Size of a long int: %d byte ( s )"       ,(int) sizeof(long int*));
	printf("Size of a long long int: %d byte( s )"   ,(int) sizeof(double*));
	printf("Size of a float: %d byte( s )"           ,(int) sizeof(float*));
	return (0);
}
