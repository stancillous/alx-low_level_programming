#include "main.h"

/**
 * print_square - function to print a square
 * @size: size of the square
 * Return: 0 (Success)
 */

void print_square(int size)
{
	int i = 0, j = 0;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	while (i < size)
	{
		while (j < size)
		{
			_putchar('#');
			j++;
		}
		_putchar('\n');
		i++;
		j = 0;
	}
}
