#include "lists.h"

/**
 * free_listint - free a list
 * @head: head pointer
 * Return: void
 */

void free_listint(listint_t *head)
{
	listint_t *trav = head;

	while (trav != NULL)
	{
		head = trav->next;
		free(trav);
		trav = head;
	}
}
