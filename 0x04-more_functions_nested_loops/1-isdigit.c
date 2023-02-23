#include "main.h"

/**
 * _isdigit - check for digits 0 through 9
 * @c: character to be checked
 * Return: 0 (Success)
 */

int _isdigit(int c)
{
	if (c >= 0 && c <= 57)
		return (1);
	else
		return (0);
}
