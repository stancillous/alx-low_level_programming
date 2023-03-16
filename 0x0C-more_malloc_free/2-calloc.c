#include "mai.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array
 * @nmemb: no. of elements
 * @size: size of each element
 * Return: pointer to the memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p;

	if (nmemb == 0 || size == 0)
		return (NULL);
	p = calloc(nmemb, size);

	if (p == NULL)
		return (NULL);
	return (p);
}
