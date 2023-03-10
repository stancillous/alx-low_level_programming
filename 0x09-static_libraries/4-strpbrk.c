#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: string one
 * @accept: string two
 * Return: pointer to the byte in s that matches one of the bytes in accept,
 * or NULL if no such byte is found
 */

char *_strpbrk(char *s, char *accept)
{
	int i = 0, j = 0;
	char *pointer;

	while (s[i] != '\0')
	{
		while (accept[j] != '\0')
		{
			if (accept[j] == s[i])
			{
				pointer = &s[i];
				return (pointer);
			}
			j++;
		}
		i++;
		j = 0;
	}
	return (0);
}
