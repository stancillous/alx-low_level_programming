#include "function_pointers.h"

/**
 * array_iterator - executes a func given as param  on each element of an array
 * @array: array
 * @size: size of the array
 * @action: pointer to the function to be used
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	for (i = 0; i < size; i++)
		action(array[i]);
}
