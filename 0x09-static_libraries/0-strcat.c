#include "main.h"

/**
 * _strcat - function to concatenate two strings
 * @dest: string one
 * @src: string two
 * Return: void
 */

char *_strcat(char *dest, char *src)
{
	int i, j;

	/*get length of the string dest*/
	for (i = 0; dest[i] != '\0'; i++);

	for (j = 0; src[j] != '\0'; j++)
	{
		dest[i] = src[j];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
