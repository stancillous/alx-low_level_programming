#include <stdio.h>
/**
 * main - print the fist 100 fibonacci numbers
 * Return: 0 (Success)
 */
int main(void)
{
	int a = 1;
	int b = 2;
	int counter = 0;
	int sum;

	printf("%d, ", a);
	printf("%d, ", b);

	while (counter < 98)
	{
		sum = a + b;
		a = b;
		b = sum;

		printf("%d, ", sum);
		counter++;
	}
	return (0);
}
