#include "main.h"

/**
 * leet - a function that encodes a string into 1337
 * @str: string passed
 * Return: pointer to string
 */

char *leet(char *str)
{
	int j;

	for (j = 0; str[j] != '\0'; j++)
	{
		while (str[j] == 'a' || str[j] == 'A')
			str[j] = '4';
		while (str[j] == 'e' || str[j] == 'E')
			str[j] = '3';
		while (str[j] == 'o' || str[j] == 'O')
			str[j] = '0';
		while (str[j] == 't' || str[j] == 'T')
			str[j] = '7';
		while (str[j] == 'l' || str[j] == 'L')
			str[j] = '1';
		else
			str[j] = str[j];
	}
	return (str);
}
