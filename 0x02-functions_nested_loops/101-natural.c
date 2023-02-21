#include <stdio.h>
#include "main.h"
/**
 * main - print the sum of multiples of 3 or 5
 * Return: 0 (Success)
 */
int main(void)
{
	int sum = 0;
	int num = 0;

	while (num < 1024)
	{
		if ((num % 3 == 0) || (num % 5 == 0))
		{
			sum += num;
		}
		num++;
	}
	printf("%d", sum);
	return (0);
}

