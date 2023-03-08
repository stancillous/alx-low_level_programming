#inlcude "main.h"

/**
 * _strlen_recursion - find length of string
 * @s: string passed
 * Return: length of string (int)
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}
