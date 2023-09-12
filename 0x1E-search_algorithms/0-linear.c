#include "search_algos.h"

/**
 * linear_search - uses linear search algo
 * @array: array
 * @size: array size
 * @value: value to be searched
 * Return: index of value if found, else -1
*/

int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (!array)
		return (-1);
	while (i < size)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
		i++;
	}
	return (-1);
}