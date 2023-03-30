#include "lists.h"

/**
 * add_node - adds node at the begiining of a list
 * @head: address of head
 * @str: string to be added at that node
 * Return: address of new element
 */

list_t *add_node(list_t **head, const char *str)
{
	char *newstr;
	list_t *newnode;

	newstr = strdup(str);
	newnode = malloc(sizeof(list_t));
	if (newnode == NULL)
		return (NULL);
	newnode->str = newstr;
	newnode->next = (*head);
	(*head) = newnode;
	return (*head);
}
