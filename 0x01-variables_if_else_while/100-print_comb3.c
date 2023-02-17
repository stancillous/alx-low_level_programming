#include <stdio.h>
/**
 * main - main block
 * DEscription: print all possible combinations of two digits
 * Return: 0 (Success)
 */
int main(void)
{
	int a;
	int b = 0;

	while (b < 10)
	{
		a = 0;

		while (a < 10)
		{
			if (b != a && b < a)
			{
				putchar('0' + b);
				putchar('0' + a);

				if (a + b != 17)
				{
					putchar(',');
					putchar(' ');
				}
			}
			a++;
		}
		b++;
	}
	putchar('\n');

	return (0);
}
