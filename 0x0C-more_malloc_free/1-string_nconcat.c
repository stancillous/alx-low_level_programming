#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concats two strings
 * @s1: string one
 * @s2: string two
 * @n: bytes of s2 to be concat to s1
 * Return: pointer to concat string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int len1, len2, i = 0;
	char *comb;
	unsigned int j;
	int num = n;

	if (s1 == NULL)
		s1 = NULL;
	if (s2 == NULL)
		s2 = NULL;

	for (len1 = 0; s1[len1] != '\0'; len1++)
		;
	for (len2 = 0; s2[len2] != '\0'; len2++)
		;

	if (num < 0)
		return (NULL);

	if (num >= len2)
		num = len2;

	comb = malloc(sizeof(*comb) * (len1 + num) + 1);
	if (comb == NULL) /*check for null */
		return (NULL);

	len1 = 0;
	len2 = 0;
	
	/*concat strings*/
	for (i = 0; s1[len1] != '\0'; i++, len1++)
		comb[i] = s1[len1];

	for (i = i, j = 0; j < n; i++, j++)
		comb[i] = s2[j];
	comb[i] = '\0';

	return (comb);
}
