#include "lists.h"

/**
 * listint_len - returns number of elements in a list
 * @h: head pointer
 * Return: number of nodes
 */

size_t listint_len(const listint_t *h)
{
	size_t i = 0;
	const listint_t *trav;

	trav = h;
	while (trav != NULL)
	{
		i++;
		trav = trav->next;
	}
	return (i);
}
