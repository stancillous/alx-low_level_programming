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
	long int holder;

	printf("%ld, ", a);

	while (counter <= 50)
	{
		if (counter == 50)
		{
			printf("%ld", b);
		}
		else
			printf("%ld, ", b);


		holder =  b;
		b += a;
		a = holder;
		counter++;
	}
	printf("\n");
	return (0);
}
