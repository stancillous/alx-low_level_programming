#include "main.h"

/**
 * puts2 - print even characters of a string
 * @str: string passed
 * Return: void
 */

void puts2(char *str)
{
	int i = 0;

	while (*(str + i) != '\0')
	{
		if (*(str + i) % 2 == 0)
			_putchar(*(str + i));
		i++;
	}
}
