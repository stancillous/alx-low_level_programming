#include "lists.h"

/**
 * get_nodeint_at_index - returns nth node of a list
 * @head: head pointer
 * @index: index ofthe node
 * Return: address of the node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *trav = head;
	int i;

	for (i = 0; trav != NULL; i++)
	{
		if (i == index)
			return (trav);
		trav = trav->next;
	}
	return (NULL);
}
