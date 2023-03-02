#include "main.h"

/**
 * rot13 - function to encodesa string using rot13
 * @str: string passed
 * Return: encoded string
 */

char *rot13(char *str)
{
	char s1[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char s2[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	int i = 0;
	int j;

	while (str[i] != '\0')
	{
		for (j  0; j < 52; j++)
		{
			if (str[i] == s1[j])
			{
				str[i] = s2[j];
				break;
			}
		}
		i++;
	}

	return (str);
}
