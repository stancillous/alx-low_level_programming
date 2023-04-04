#include "lists.h"

/**
 * find_listint_loop - finds loop in linked list
 * @head: head pointer
 * Return: address of node where loop starts, or NULL if there isn't
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *prev = head, *temp = head;

	while (temp && temp->next)
	{
		prev = prev->next;
		temp = temp->next->next;
		if (prev == temp)
		{
			prev = head;
			while (prev != head)
			{
				prev = prev->next;
				temp = temp->next;
			}
			return (prev);
		}
	}
	return (NULL);
}

