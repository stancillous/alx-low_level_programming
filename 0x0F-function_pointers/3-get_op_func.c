#include "3-calc.h"
#include <string.h>
#include <stdlib.h>
#include <sdio.h>

/**
 * get_op_func - get operation passed
 * @s: operation
 * Return: int
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	return (0);
}
