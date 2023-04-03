#include "lists.h"

/**
 * add_nodeint - add node at beginning of list
 * @n: data for that node
 * @head: double head pointer
 * Return: address of head
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode = NULL, *newnodeAddress = NULL;

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);
	newnodeAddress = newnode;
	newnode->next = NULL;
	newnode->n = n;
	newnode->next = *head;
	*head = newnodeAddress;
	return (*head);
}
