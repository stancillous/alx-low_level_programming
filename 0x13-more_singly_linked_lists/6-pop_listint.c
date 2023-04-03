#include "lists.h"

/**
 * pop_listint - deletes head node
 * @head: double head pointer
 * Return: data of the head node
 */

int pop_listint(listint_t **head)
{
	listint_t *trav = NULL, *temp = NULL;
	int data;

	if (*head == NULL)
		return (0);
	trav = *head;
	data = trav->n;
	temp = trav->next;
	free(*head);
	*head = temp;

	return (data);
}
