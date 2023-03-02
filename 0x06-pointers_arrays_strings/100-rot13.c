#include "main.h"

/**
 * rot13 - encode a string using rot13
 * @str: string passed
 * Return: string (encoded)
 */

char *rot13(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if ((str[i] >= 'a' && str[i] <= 'z') ||
				(str[i] >= 'A' && str[i] <= 'Z'))
		{
			if ((str[i] >= 'a' && str[i] <= 'm') ||
					(str[i] >= 'A' && str[i] <= 'M'))
			{
				str[i] += 13;
			}
			else
				str[i] -= 13;
		}
	}
	return (str);
}
