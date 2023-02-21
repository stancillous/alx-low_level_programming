#include "main.h"
/**
 * times_table - print the 9 times tables, starging from 0
 * Return 0 (Success)
 */
void times_table(void)
{
	int i = 0;
	int j = 0;

	while (i < 10)
	{
		while (j < 10)
		{
			int res = i * j;

			_putchar(res + '0');

			if (j != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			j++;
		}
		i++;
		j = 0;
		_putchar('\n');
	}
}
