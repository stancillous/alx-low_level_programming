#include "main.h"

/**
 * _strncat - function to concat two strings
 * @dest: string to be concat to
 * @src: string two
 * @n: number of bytes from string src
 * Return: pointer to the concat string (dest)
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	/*get len of string dest*/
	for (i = 0; dest[i] != '\0'; i++)
		;

	for (j = 0; src[j] != '\0' && j < n; j++)
	{
		dest[i] = src[j];
		i++;
	}

	return (dest);
}
