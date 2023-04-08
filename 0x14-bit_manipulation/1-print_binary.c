#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: the number
 * Return: void
 */

void print_binary(unsigned long int n)
{
	int i;

	for (i = 31; i >= 0; i--)
	{
		if ((n & (1 << i)) != 0)
			break;
	}

	for (; i >= 0; i--)
	{
		if ((n & (1 << i)) != 0)
			_putchar('1' + 0);
		else
			_putchar('0' + 0);
	}
	_putchar('\n');
}
