#include "main.h"
/**
 * _abs - print the absolute value of an int
 * @n: int to be tested
 * Return: 0 (Success)
 */
int _abs(int n)
{
	if (n < 0)
	{
		return (n * -1);
	}
	return (n);
}
