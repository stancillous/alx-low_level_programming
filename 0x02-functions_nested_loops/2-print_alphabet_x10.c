#include "main.h"
/**
 * print_alphabet_x10 - main function
 * Description: print the alphabet ten times
 */
void print_alphabet_x10(void)
{
	int i = 0;
	char letter = 'a';

	while (i < 10)
	{
		while (letter <= 'z')
		{
			_putchar(letter);
			letter++;
		}
		_putchar('\n');
		i++;
		letter = 'a';
	}
}

