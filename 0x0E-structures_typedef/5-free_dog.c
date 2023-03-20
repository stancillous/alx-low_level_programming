#include "dog.h"

/**
 * free_dog - frees dog
 * @d: dog pointer
 * Return: void
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
		free(d);
}
