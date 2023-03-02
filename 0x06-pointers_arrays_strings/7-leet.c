#include "main.h"

/**
 * leet - a function that encodes a string into 1337
 * @s: string passed
 * Return: pointer to string
 */
char *leet(char *s)
{
	int i = 0, j;
	char lowercase[] = {'a', 'e', 'o', 't', 'l'};
	char uppercase[] = {'A', 'E', 'O', 'T', 'L'};
	int nums[] = {52, 51, 48, 55, 49};

	while (s[i] != '\0')
	{
		for (j = 0; j < 5; j++)
		{
			if (s[i] == lowercase[j] || s[i] == uppercase[j])
			{
				s[i] = nums[j];
				break;
			}
		}
		i++;
	}
	return (s);
}
