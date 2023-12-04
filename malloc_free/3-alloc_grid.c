#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - returns a pointer to a 2d array of integers
 * @width: width of 2d array
 * @height: height of 2d array
 *
 * Return: NULL if width or heigh is 0, NULL if failure
 * else return pointer to 2d array
 */

int **alloc_grid(int width, int height)
{
	int **grid, i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = (int **)malloc(sizeof(int *) * height);
	if (grid == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		grid[i] = (int *)malloc(sizeof(int) * width);
		if (grid[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(grid[j]);
			free(grid);
			return (NULL);
		}
		for (j = 0; j < width; j++)
			grid[i][j] = 0;
	}
	return (grid);
}
