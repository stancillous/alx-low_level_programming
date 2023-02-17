#include <stdio.h>
/**
 * main - main block
 * Description: print all single digit numbers using putchar.
 * Return: 0 (Success)
 */
int main(void)
{
	int i = 0;

	while (i < 10)
	{
		putchar(i + '0');
		i++;
	}
	putchar('\n');

	return (0);
}

