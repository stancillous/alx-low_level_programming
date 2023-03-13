#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concat two strings
 * @s1: string one
 * @s2: string two
 * Return: pointer to the address of the concat string
 */

char *str_concat(char *s1, char *s2)
{
	int len1, len2, i;
	char *s3;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (len1 = 0; s1[len1] != '\0'; len1++)
		;
	for (len2 = 0; s2[len2] != '\0'; len2++)
		;
	s3 = malloc((len1 + len2 + 1) * sizeof(*s3));
	len1 = 0;
	len2 = 0;

	if (s3 == NULL)
		return (NULL);
	for (i = 0; s1[len1] != '\0'; i++, len1++)
	{
		s3[i] = s1[len1];
	}
	for (; s2[len2] != '\0'; i++, len2++)
	{
		s3[i] = s2[len2];
	}
	s3[i] = '\0';
	return (s3);
}
