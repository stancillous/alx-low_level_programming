#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: string passed
 * @c: character to be checked
 * Return: pointer to first occurrence of character c
 */

char *_strchr(char *s, char c)
{
	int i, strlen;

	for (strlen = 0; s[strlen] != '\0'; strlen++)
		;
	for (i = 0; i < strlen; i++)
	{
		if (*(s + i) == c)
		{
			return (s + i);
		}
	}
	return ('\0');
}
