#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees 2d grid previously created
 * @grid: memory of the created array
 * @height: height of the array
 * Return: Nothing
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		/*free memory for each row*/
		free(grid[i]);
	}
	/*free mem for the rows*/
	free(grid);
}
