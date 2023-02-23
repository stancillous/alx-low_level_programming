#include "main.h"

/**
 * print_diagonal - draw a diagonal line
 * @n: number of times to print the line
 * Return: 0 (Success)
 */

void print_diagonal(int n)
{
	int i = 0, j = 0;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}

	for (int i = 0; i < n; i++)
	{
		for (j = 0; j <= i; j++)
		{
			if (j != i)
				_putchar(' ');
			else if (j == i)
				_putchar('\\');
		}
		_putchar('\n');
	}
}
