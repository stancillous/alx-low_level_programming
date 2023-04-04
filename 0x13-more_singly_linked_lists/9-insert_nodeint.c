#include "lists.h"

/**
 * insert_nodeint_at_index - insert node at given position
 * @head: double head pointer
 * @idx: position
 * @n: data of new node
 * Return: address of new node, or NUll if failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp = *head, *current = NULL;
	unsigned int i;
	listint_t *newnode = malloc(sizeof(listint_t));

	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	newnode->next = NULL;
	if (*head == NULL)
	{
		*head = newnode;
		return (*head);
	}
	for (i = 0; temp != NULL; i++)
	{
		current = temp;
		temp = temp->next;
		if (i == idx)
		{
			newnode->next = temp;
			current->next = newnode;
			return (*head);
		}
	}
	return (NULL);
}
