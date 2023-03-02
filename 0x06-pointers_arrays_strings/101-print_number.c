#include "main.h"

/**
 * print_number - function to print an int
 * @n: int passed
 * Return: void
 */

void print_number(int n)
{
	int number, hold, tens = 1;

	/*check if number is +ve or -ve*/
	if (n < 0)
	{
		_putchar('-');
		number = n * -1; /*make number positive*/
	}
	else
		number = n;

	hold = number;

	while (hold > 9)
	{
		hold /= 10;
		tens *= 10; /*count the number of tens every time hold is divisible by 10*/
	}
	for (; tens >= 1; tens /= 10)
	{
		/*print the left most number for each loop*/
		_putchar(((number / tens) % 10) + '0');
	}
}
