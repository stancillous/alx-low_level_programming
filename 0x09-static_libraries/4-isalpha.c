#include "main.h"
/**
 * _isalpha - check if character is a letter
 * @c:type to check
 * Return: 0 (Success)
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	else
		return (0);
}
