#include "lists.h"

/**
 * print_listint - prints elements of a list
 * @h: head pointer
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t i = 0;
	const listint_t trav;

	trav = h;
	while (trav != NULL)
	{
		i++;
		printf("%d\n", trav->n);
		trav = trav->next;
	}
	return (i);
}
