#include <stdio.h>
/**
 * main - main block
 * Description: print alphabets except 'q' and 'e'.
 * Return: 0 ( Success)
 */
int main(void)
{
	char x = 'a';

	while (x <= 'z')
	{
		if (x != 'q' && x != 'e')
		{
			putchar(x);
		}
		x++;
	}
	putchar('\n');

	return (0);
}
