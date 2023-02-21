#include "main.h"
/**
 * times_table - print the 9 times tables, starging from 0
 * Return 0 (Success)
 */
void times_table(void)
{
	int i = 0;
	int j = 0;
	int res;

	while (i < 10)
	{
		while (j < 10)
		{
			res = i * j;

			if (res > 9)
			{
				_putchar(res / 10 + '0');
				_putchar(res % 10 + '0');
			}
			else if (j != 0)
			{
				_putchar(' ');
				_putchar(res + '0');
			}
			else
			{
				_putchar(res + '0');
			}

			if (j != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			j++;
		}
		_putchar('\n');
		i++;
		j = 0;
	}
}
