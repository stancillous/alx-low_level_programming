#include "main.h"

/**
 * puts_half - function to print half of a string
 * @str: string parameter passed
 * Return: void
 */

void puts_half(char *str)
{
	int i = 0, strlen = 0, start;

	while (*(str + i) != '\0')
	{
		strlen++;
		i++;
	}
	
	for (strlen /= 2; str[strlen] != '\0'; strlen++)
	{
		_putchar(str[strlen]);
	}
	_putchar('\n');
}
