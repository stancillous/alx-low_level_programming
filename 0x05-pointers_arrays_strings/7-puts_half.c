#include "main.h"

/**
 * puts_half - function to print half of a string
 * @str: string parameter passed
 * Return: void
 */

void puts_half(char *str)
{
	int i = 0, strlen = 0, n;

	while (*(str + i) != '\0')
	{
		strlen++;
		i++;
	}
	if (strlen % 2 == 0)
		start = strlen / 2;
	else
		start = (strlen - 1) / 2;

	while (start < strlen)
	{
		_putchar(*(str + start));
		start++;
	}
}
