#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: the number
 * Return: void
 */

void print_binary(unsigned long int n)
{
	int sLen = 0, i = 0;
	char *str;

	str = malloc(sizeof(*str));

	if (n == 0)
		str[i] = '0';

	while (n / 2 != 0)
	{
		if (n % 2 == 1)
			str[i] = '1';
		if (n % 2  == 0)
			str[i] = '0';
		i++;
		n /= 2;
	}
	if (n == 1)
		str[i] = '1';
	for (i = 0; str[i] != '\0'; i++)
		sLen++;
	for (i = sLen - 1; i >= 0; i--)
		putchar(str[i]);
	putchar('\n');
}
