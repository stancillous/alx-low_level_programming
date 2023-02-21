#include "main.h"
/**
 * print_alphabet - print function
 * Description: function to print the alphabet
 */
void print_alphabet(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		_putchar(letter);
		letter++;
	}
	_putchar('\n');

}
