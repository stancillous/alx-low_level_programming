#include "lists.h"
/**
 * print_listint_safe - prints a linked list
 * @head: head pointe
 * Return: number of nodes in list
 */

size_t print_listint_safe(const listint_t *head)
{
	const listint_t *current = head, *temp = NULL;
	size_t i = 0;

	if (current == NULL)
		exit(98);

	while (current != NULL)
	{
		temp = current;
		current = current->next;
		i++;
		printf("[%p] %d\n", (void *)temp, temp->n);

		if (temp < current)
		{
			printf("-> [%p] %d\n", (void *)current, current->n);
			break;
		}
	}
	return (i);
}
