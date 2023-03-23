#include "variadic_functions.h"

/**
 * print_strings - prints strings
 * @separator: str to be printed between the strings
 * @n: number of params
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;
	va_list list;

	va_start(list, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(list, char *);
		(str == NULL) ? printf("(nil)") : printf("%s", str);
		if (separator != NULL && i != n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(list);
}
