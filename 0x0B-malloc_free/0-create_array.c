#include "main.h"
#include <stdlib.h>


/**
 * create_array - creates an array of chars
 * @size: size of array
 * @c: char to be initialized
 * Return: pointer to the array,or NULL if fails
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *arr;

	if (size == 0)
		return (NULL);
	arr = malloc(size * sizeof(*arr));

	if (arr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		arr[i] = 'H';
	}
	return (arr);
}
