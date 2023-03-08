#include "main.h"

/**
 * is_palindrome - check if string is palindrome
 * @s: string to be checked
 * Return: 1 if palindrome, 0 otherwise
 */

int is_palindrome(char *s)
{
	int len;

	len = str_len(s) - 1;
	return (check_pal(s, --len));
}

/**
 * str_len - get string length
 * @s: string passed
 * Return: int ( string length)
 */

int str_len(char *s)
{
	if (*s == '\0')
		return (1);
	else
		return (1 + str_len(++s));
}

/**
 * check_pal - check for palindrome strings
 * @s: string to check
 * @len: string length
 * Return: 1 if palindrome, 0 otherwise
 */

int check_pal(char *s, int len)
{
	if (*s == *(s + len))
	{
		if (len <= 0)
			return (1);
		else
			return (check_pal(++s, len - 2));
	}
	else
		return (0);
}
