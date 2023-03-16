#include "main.h"
#include <stdlib.h>

/**
 * _realloc - reallocates a memory block
 * @ptr: pointer to prev memory
 * @old_size: size of ptr
 * @new_size: new size, for new memory block
 * Return: pointer to new memory
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);
	if ((new_size == 0) && (ptr != NULL))
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		new = malloc(new_size);
		if (new == NULL)
			return (NULL);
	}
	if (new_size > old_size && (ptr != NULL))
	{
		new = malloc(new_size);
		if (new == NULL)
			return (new);
		for (i = 0; i < old_size; i++)
			new[i] = *((char *)ptr + 1);
		free(ptr);
	}

	return (new);
}
