#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid -  function that returns a pointer to a 2D array of ints
 * @width: width of the array
 * @height: height of the array
 * Return: pointer to the 2d array
 */

int **alloc_grid(int width, int height)
{
	int **g, row, col;

	if (width < 1 || height < 1)
		return (NULL);

	/*allocate memory for each row*/
	g = malloc(width * sizeof(*g));
	if (g == NULL)
		return (NULL);

	for (row = 0; row < height; row++)
	{
		/*allocate memory for each element in each row*/
		g[row] = malloc(height * sizeof(*g));
		if (g[row] == NULL)
			return (NULL);
		for (col = 0; col < width; col++)
		{
			g[row][col] = 0;
		}
	}
	return (g);
}
