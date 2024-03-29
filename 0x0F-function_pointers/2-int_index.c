#include "function_pointers.h"

/**
 * int_index - searches for an int
 * @size: size of array
 * @array: array
 * @cmp: pointer to function
 * Return: index of the int if found, else -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
		return (-1);

	if (size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		cmp(array[i]);
		if (cmp(array[i]) == 1)
			return (i);
	}
	return (-1);
}
