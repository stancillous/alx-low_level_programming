#include "main.h"
/*
 * main - main block
 * Description: print '_putchar'
 * Return: 0 ( Success)
 */
int main(void)
{
	char word[] = "_putchar";

	int i = 0;

	while (word[i] != '\0')
	{
		_putchar(word[i]);
		i++;
	}
	_putchar('\n');

	Return (0);
}
