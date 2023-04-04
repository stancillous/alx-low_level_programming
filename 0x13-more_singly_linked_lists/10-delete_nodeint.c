#include "lists.h"

/**
 * delete_nodeint_at_index - deletes node at given index
 * @head: double head pointer
 * @index: index of node to be deleted
 * Return: 1 (success) -1 (failed)
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *prev = *head, *current = *head;
	unsigned int i;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = current->next;
		free(current);
		current = NULL;
		return (1);
	}
	for (i = 0; current != NULL; i++)
	{
		if (i == index)
		{
			prev->next = current->next;
			free(current);
			current = NULL;
			return (1);
		}
		prev = current;
		current = current->next;
	}
	return (-1);
}
