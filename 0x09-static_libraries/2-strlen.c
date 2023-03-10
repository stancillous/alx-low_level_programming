#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: string passed
 * Return: int
 */

int _strlen(char *s)
{
	int i = 0;
	int length = 0;

	while (*(s + i) != '\0')
	{
		length++;
		i++;
	}
	return (length);
}
