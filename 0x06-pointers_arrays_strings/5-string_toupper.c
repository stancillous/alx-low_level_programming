#include "main.h"

/**
 * string_toupper - change lowercase letters to uppercase
 * @str: string passed
 * Return: pointer to string
 */

char *string_toupper(char *str)
{
	int i, j;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 97 && str[i] <= 122)
			str[i] -= 32;

	}
}
