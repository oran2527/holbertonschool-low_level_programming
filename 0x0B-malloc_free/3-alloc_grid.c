#include "holberton.h"
/**
 * alloc_grid - pointer bidimensional
 * @width: width
 * @height: height
 * Return:  pointer to pointer
 **/
int **alloc_grid(int width, int height)
{
	int **rows, i, j;

	if (width <= 0 || height <= 0)
		return (NULL);
	rows = (int **)malloc(height * sizeof(int *));
	if (rows == NULL)
	{
		free(rows);
		return (NULL);
	}
	if (rows != NULL)
	{
		for (i = 0; i < height; i++)
		{
			rows[i] = (int *)malloc(width * sizeof(int));
			if (rows[i] == NULL)
			{
				free(rows[i]);
				return (NULL);
			}
		}
		for (i = 0; i < height; i++)
		{
			for (j = 0; j < width; j++)
			{
				*(*(rows + i) + j) = 0;
			}
		}
	}
	return (rows);
}
