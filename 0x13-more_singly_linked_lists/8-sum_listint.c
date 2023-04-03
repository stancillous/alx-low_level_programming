#include "lists.h"

/**
 * sum_listint - sums data of nodes
 * @head: head pointer
 * Return: sum
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *trav = head;

	while (trav != NULL)
	{
		sum += trav->n;
		trav = trav->next;
	}
	return (sum);
}
