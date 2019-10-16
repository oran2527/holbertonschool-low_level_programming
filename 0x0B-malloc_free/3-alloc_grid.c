#include "holberton.h"
#include <stdlib.h>
/**
 * alloc_grid - pointer bidimensional
 * @width: width
 * @height: height
 * Return:  pointer to pointer
 **/
int **alloc_grid(int width, int height)
{
	int **rows;
	int i, j;

	if (width < 1 || height < 1)
		return (NULL);
	rows = (int **)malloc(height * sizeof(int *));
	if (*rows == NULL)
		return (NULL);
	if (*rows != NULL)
	{
		for (i = 0; i < height; i++)
		{
			rows[i] = (int *)malloc(width * sizeof(int));
			if (rows[i] == NULL)
				return (NULL);
		}
		for (i = 0; i < height; i++)
		{
			for (j = 0; j < width; j++)
			{
				*(*(rows + i) + j) = 0;
			}
		}
		return (rows);
	}
	return (NULL);
}
