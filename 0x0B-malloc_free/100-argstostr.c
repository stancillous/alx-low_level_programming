#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * argstostr - concats all args of a program
 * @ac: arg count
 * @av: array with the arguments
 * Return: concat string
 */

char *argstostr(int ac, char **av)
{
	char *str;
	int argLen = 0, index = 0, i;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
		argLen += strlen(av[i] + 1);
	str = malloc(argLen * sizeof(char) + 19);

	if (str == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		strcpy((str + index), av[i]);
		index += strlen(av[i]);
		str[index] = '\n';
		index++;
	}
	str[index] = '\0';
	return (str);
}
