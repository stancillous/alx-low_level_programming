#include "lists.h"

/**
 * free_list - frees a list_t list
 * @head: head pointer
 * Return: void
 */

void free_list(list_t *head)
{
	list_t *current, *next;

	current = head;
	next = NULL;

	while (current != NULL)
	{
		next = current->next;
		free(current);
		free(current->str);
		free(current->len);
		free(current->next);
		current = next;
	}
}
