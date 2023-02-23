#include "main.h"

/**
 * print_line - function to print line
 * @n: int to determine the length of the line
 * Return: 0 (Success)
 */

void print_line(int n)
{
	int i = 0;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}

	while (i < n)
	{
		_putchar('_');
		i++;
	}
	_putchar('\n');
}
