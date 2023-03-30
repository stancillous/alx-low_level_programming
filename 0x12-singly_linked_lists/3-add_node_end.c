#include "lists.h"

/**
 * add_node_end - add node at the end of a list
 * @head: head pointer
 * @str: string to be copied to the new node
 * Retun: address of new node
 */

list_t *add_node_end(list_t **head, const char *str)
{
	char *newstr;
	unsigned int strlen = 0;
	list_t *newnode, *temp;

	while (str[strlen])
		strlen++;

	newstr = strdup(str);
	newnode = malloc(sizeof(list_t));
	if (newnode == NULL)
		return (NULL);
	newnode->len = strlen;
	newnode->str = newstr;
	newnode->next = NULL;

	temp = (*head);
	while (temp->next != NULL)
		temp = temp->next;
	temp->next = newnode;
	return (newnode);
}

