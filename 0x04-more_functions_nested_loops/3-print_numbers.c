#include "main.h"

/**
 * print_numbers - print the numbers 0 through 9
 * Return: 0 (Success)
 */

void print_numbers(void)
{
	int i = 0;

	while (i < 10)
	{
		_putchar(i + '0');
		i++;
	}
}
