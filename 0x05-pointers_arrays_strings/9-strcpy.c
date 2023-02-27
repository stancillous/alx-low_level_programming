#include "main.h"

/**
 * _strcpy - copies a string
 * @dest: string one
 * @src: string two
 * Return: pointer
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
