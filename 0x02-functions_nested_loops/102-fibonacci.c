#include <stdio.h>
/**
 * main - print the fist 100 fibonacci numbers
 * Return: 0 (Success)
 */
int main(void)
{
	long int a = 1;
	long int b = 2;
	int counter = 2;
	long int sum;

	printf("%ld, ", a);
	printf("%ld, ", b);

	while (counter <= 50)
	{
		if (counter == 50)
		{
			printf("%ld", sum);
		}
		else
			printf("%ld, ", sum);


		sum = a + b;
		a = b;
		b = sum;
		counter++;
	}
	printf("\n");
	return (0);
}
