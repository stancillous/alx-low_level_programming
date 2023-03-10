#include "main.h"

/**
 * _atoi - converts string to int
 * @s: string passed
 * Return: integer
 */

int _atoi(char *s)
{
	int i = 0;
	int mul = 1;
	unsigned int bal = 0;

	while (!(s[i] <= 57 && s[i] >= 48) && s[i] != '\0')
	{
		if (s[i]  == '-')
			mul = mul * -1;
		i++;
	}

	while (s[i] <= 57 && (s[i] >= 48 && s[i] != '\0'))
	{
		bal = (bal * 10) + (s[i] - '0');
		i++;
	}
	bal *= mul;

	return (bal);
}
