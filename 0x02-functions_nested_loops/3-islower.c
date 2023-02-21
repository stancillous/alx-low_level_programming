#include "main.h"
/**
 * _islower - function
 * Description: check for lowercase characer
 * @c: character being tested
 * Return: 0 (Success)
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
		return (0);
}
