#include "main.h"
/**
 * print_times_table - print the n times table
 * @n: value passed
 * Return: 0 (Success)
 */
void print_times_table(int n)
{
	int i = 0, j, res;

	if (n > 15 || n < 0)
		return;
	while (i <= n)
	{
		for (j = 0; j <= n; j++)
		{
			res = i * j;
			if (res > 99)
			{
				_putchar(res / 100 + '0');
				_putchar((res / 10 % 10) + '0');
				_putchar(res % 10 + '0');
			}
			else if (res > 9)
			{
				_putchar(' ');
				_putchar(res / 10 + '0');
				_putchar(res % 10 + '0');
			}
			else if (j != 0)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(res + '0');
			}
			else
				_putchar(res + '0');

			if (j != n)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
		i++;
	}
}
