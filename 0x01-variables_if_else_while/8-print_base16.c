#include <stdio.h>
/**
 * main - main block
 * Description: print numbers of base 64 using putchar
 * Return: 0 (Success)
 */
int main(void)
{
	int num = 0;
	char letter = 'a';

	while (num < 10)
	{
		putchar(num + '0');
		num++;
	}

	while (letter <= 'f')
	{
		putchar(letter);
		letter++;
	}

	putchar('\n');

	return (0);
}

