#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - main function
 * Return: 0 (Success)
 */

int main(void)
{
	int tRand;
	int total = 2772;
	int i = 0;

	srand(time(NULL));

	while (total > 122)
	{
		tRand = (rand() % 125) + 1;
		printf("%c", tRand);
		i++;
		total -= tRand;
	}
	printf("%c", total);

	return (0);
}
