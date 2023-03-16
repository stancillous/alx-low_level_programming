#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: min num
 * @max: max num
 * Return: pointer to the created array
 */

int *array_range(int min, int max)
{
	int *arr;
	int i, size;

	if (min > max)
		return (NULL);
	size = (max + 1) - min;

	arr = malloc(size * sizeof(int));

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		arr[i] = min + i;
	return (arr);
}
