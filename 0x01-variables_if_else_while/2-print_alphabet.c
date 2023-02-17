#include <stdio.h>
#include <string.h>
/**
 * main - main block
 * Description: print the alphabet in lowercase.
 * Return: Always 0 (Success)
 */
int main(void)
{
	char s = 'a';

	while (s <= 'z')
	{
		putchar(s);
		s++;
	}
	putchar('\n');
	return (0);
}
