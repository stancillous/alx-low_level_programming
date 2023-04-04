#include "lists.h"

/**
 * free_listint_safe -frees a list
 * @h: double head pointer
 * Return: size of free'd list
 */

size_t free_listint_safe(listint_t **h)
{
	size_t i = 0;
	listint_t *temp = *h;

	while (temp != NULL)
	{
		*h = temp->next;
		free(temp);
		temp = *h;
		i++;
	}
	temp = NULL;
	*h = NULL;
	return (i);
}
