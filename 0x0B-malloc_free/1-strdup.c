#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: string passed
 * Return: pointer to new duplicated string
 */

char *_strdup(char *str)
{
	int i, len;
	char *s;

	if (str == NULL)
		return (NULL);

	for (len = 0; str[len] != '\0'; len++)
		;
	s = malloc(len * sizeof(*s));

	if (s == NULL)
		return (NULL);

	len = 0;
	for (i = 0; str[len] != '\0'; i++, len++)
	{
		s[i] = str[len];
	}
	s[i] = '\0';
	return (s);
}
