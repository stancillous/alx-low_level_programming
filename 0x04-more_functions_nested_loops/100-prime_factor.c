#include <stdio.h>
#include <math.h>

/**
 * main - find the largest prime factor of a number
 * Return: 0 (Success)
 */

int main(void)
{
	long int num = 612852475143;
	long int highest = -1;
	int i;

	while (num % 2 == 0)
	{
		highest = 2;
		num = num / 2;
	}

	for (i = 3; i <= sqrt(num); i += 2)
	{
		while (num % i == 0)
		{
			highest = i;
			num = num / i;
		}
	}
	if (num > 2)
	{
		highest = num;
	}
	printf("%ld", highest);
	printf("\n");

	return (0);
}
