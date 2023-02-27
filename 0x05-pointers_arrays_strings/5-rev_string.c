#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string to be reversed
 * Return: void
 */

void rev_string(char *s)
{
	int i, c, l;
	char h;

	while (s[i] != '\0')
	{
		i++;
	}

	l = i;

	for (i--, c = 0; c < l / 2; i--; c++)
	{
		h = s[c];
		s[c] = s[i];
		s[i] = h;
	}
}
