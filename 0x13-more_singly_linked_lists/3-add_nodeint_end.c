#include "lists.h"

/**
 * add_nodeint_end - adds node at end of a list
 * @head: double head pointer
 * @n: data of new node
 * Return: address of head
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *trav = *head, *newnode = NULL;

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	newnode->next = NULL;

	if (*head == NULL)
	{
		*head = newnode;
		return (*head);
	}
	while (trav->next != NULL)
	{
		trav = trav->next;
	}
	trav->next = newnode;
	return (*head);
}
