#include <unistd.h>

/**
 * _putchar - print a character
 * @c: character to be printed
 * Return: 0
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
