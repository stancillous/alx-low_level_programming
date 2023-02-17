#include <stdio.h>
/**
 * main - main block
 * Description: print alphabets in lowercase and in reverse order.
 * Return: 0 (Success)
 */
int main(void)
{
	char i = 'z';

	while (i >= 'a')
	{
		putchar(i);
		i--;
	}
	putchar('\n');

	return (0);
}
