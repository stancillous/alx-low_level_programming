#include "main.h"

/**
 * leet - a function that encodes a string into 1337
 * @str: string passed
 * Return: pointer to string
 */

char *leet(char *str)
{
	int i, j;

	for (i = 0; str[i] != '\0'; i++)
		;

	for (j = 0; j < i; j++)
	{
		if (str[j] == 'a' || str[j] == 'A')
			str[j] = '4';
		else if (str[j] == 'e' || str[j] == 'E')
			str[j] = '3';
		else if (str[j] == 'o' || str[j] == 'O')
			str[j] = '0';
		else if (str[j] == 't' || str[j] == 'T')
			str[j] = '7';
		else if (str[j] == 'l' || str[j] == 'L')
			str[j] = '1';
		else
			str[j] = str[j];
	}
	return (str);
}
