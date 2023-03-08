#include "main.h"

/**
 * _pow_recursion - get power of number
 * @x:integer
 * @y: integer
 * Return: power of x to y
 */

int _pow_recursion(int x, int y)
{
	if (y == 0)
		return (1);
	else if (y < 0)
		return (-1);
	else if (y == 1)
		return (x * 1);
	else
		return (x * _pow_recursion(x, y - 1));
}
