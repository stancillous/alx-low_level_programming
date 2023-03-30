#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list_t list
 * @h: pointer arg
 * Return: number of elements
 */

size_t list_len(const list_t *h)
{
	size_t i;

	while (h != NULL)
	{
		i++;
		h = h->next;
	}
	return (i);
}
