#include "search_algos.h"

/**
 * binary_search - search for item in an array
 * @array: pointer to the array
 * @size: size of the array
 * @value: value to be searched
 * Return: index of the value if found, else -1
*/
int binary_search(int *array, size_t size, int value)
{
	int low = 0, high = size - 1, middle_index, i;

	if (!array)
		return (-1);
	while (low <= high)
	{
		middle_index = (low + high) / 2;
		printf("Searching in array: ");
		for (i = low; i <= high; i++)
		{
			printf("%d", array[i]);
			if (i + 1 != high + 1)
				printf(", ");
		}
		printf("\n");

		if (array[middle_index] == value)
			return (middle_index);
		if (array[middle_index] > value)
		{
			high = middle_index - 1;
			continue;
		}
		else
		{
			low = middle_index + 1;
			continue;
		}
	}
	return (-1);
}
