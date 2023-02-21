#include "main.h"
/**
 * print_last_digit - print the last digit of a number
 * @n: number to be checked
 * Return: 0 (Success)
 */
int print_last_digit(int n)
{
	int remainder = n % 10;

	if (remainder < 0)
	{
		int d = -1 * remainder;

		_putchar(d + '0');
		return (d);
	}
	else
	{
		_putchar(remainder + '0');
		return (remainder);
	}
}
