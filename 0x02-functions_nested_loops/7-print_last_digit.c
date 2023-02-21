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
		return (-1 * remainder);
	}
	return (remainder)
}

