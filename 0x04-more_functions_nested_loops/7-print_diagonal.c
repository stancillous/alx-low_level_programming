#include "main.h"

/**
 * print_diagonal - print a diagonal line
 * @n: size of diagonal
 * Return: 0 (Success)
 */
void print_diagonal(int n)
{
	int i, spaces;

	for (i = 0; i < n; i++)
	{
		for (spaces = 0; spaces < i; spaces++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
	if (n <= 0)
		_putchar('\n');
}
