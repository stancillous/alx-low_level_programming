#include <stdio.h>
/**
 * main - main block
 * Return: 0 (Success)
 */
int main(void)
{
	long int a = 1, b = 2;
	long int next_num = 0;
	long int even_sum = 0;

	while (next_num < 4000000)
	{
		next_num = a + b;
		a = b;
		b = next_num;

		if (next_num % 2 == 0)
		{
			even_sum += next_num;
		}
	}
	printf("%ld\n", even_sum);
	return (0);
}
