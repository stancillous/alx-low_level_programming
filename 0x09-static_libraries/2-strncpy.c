#include "main.h"

/**
 * _strncpy - function to copy a string
 * @dest: string one
 * @src: string two
 * @n: bytes from the string src
 * Return: pointer to string dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		if (i < n)
			dest[i] = src[i];
	}

	for (; n > i; i++)
	{
		dest[i] = '\0';
	}

	return (dest);
}
