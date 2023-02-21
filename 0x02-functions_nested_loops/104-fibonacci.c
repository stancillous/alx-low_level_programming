#include <stdio.h>
/**
 * main - main block
 * Description: function to print the fib series
 * Return: 0 (success)
 */
int main(void)
{
	unsigned long int res1, res2, res3;
	unsigned long int fr1 = 0, a = 1, fr2 = 0, b = 2;
	int counter;

	printf("%lu, %lu, ", a, b);
	for (counter = 2; counter < 98; counter++)
	{
		if (a + b > 100000000 || fr2 > 0 || fr1 > 0)
		{
			res1 = (a + b) / 100000000;
			res2 = (a + b) % 100000000;
			res3 = fr1 + fr2 + res1;
			fr1 = fr2, fr2 = res3;
			a = b, b = res2;
			printf("%lu%010lu", fr2, b);
		}
		else
		{
			res2 = a + b;
			a = b, b = res2;
			printf("%lu", b);
		}
		if (counter != 97)
			printf(", ");
	}
	printf("\n");
	return (0);
}
