#include "main.h"

/**
 * leet - a function that encodes a string into 1337
 * @s: string passed
 * Return: pointer to string
 */

char *leet(char *s)
{
	int j;

	for (j = 0; s[j] != '\0'; j++)
	{
		if (s[j] == 'a' || s[j] == 'A')
			s[j] = '4';
		else if (s[j] == 'e' || s[j] == 'E')
			s[j] = '3';
		else if (s[j] == 'o' || s[j] == 'O')
			s[j] = '0';
		else if (s[j] == 't' || s[j] == 'T')
			s[j] = '7';
		else if (s[j] == 'l' || s[j] == 'L')
			s[j] = '1';
		else
			s[j] = s[j];
	}
	return (s);
}
