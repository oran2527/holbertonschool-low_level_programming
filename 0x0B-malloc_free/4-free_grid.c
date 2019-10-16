#include "holberton.h"
/**
 * alloc_grid - pointer bidimensional
 * @width: width
 * @height: height
 * Return:  pointer to pointer
 **/
void free_grid(int **grid, int height)
{
	int i;
	
	for (i = 0; i < height; i++)
		free (grid[i]);
	free(grid);	
}
