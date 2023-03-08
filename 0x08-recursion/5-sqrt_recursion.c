#include "main.h"

/**
 * sqrt_helper - helps find square root
 * @n: int
 * @i: int
 * Return: int
 */

int sqrt_helper(int n, int i)
{
	if (n < 0 || (i * i) > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (sqrt_helper(n, i + 1));
}
/**
 * _sqrt_recursion - returns natural sqrt of a number
 * @n: number passed
 * Return: integer
 */

int _sqrt_recursion(int n)
{
	sqrt_helper(n, 1);
}
