#include "lists.h"

/**
 * free_listint2 - frees a list
 * @head: double head pointer
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *trav = *head;

	while (trav != NULL)
	{
		*head = trav->next;
		free(trav);
		trav = *head;
	}
	*head = NULL;
}
