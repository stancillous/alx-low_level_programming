#include "main.h"

/**
 * set_bit - sets value of a bit at given index to 1
 * @index: index
 * @n: address of the number
 * Return: 1 (success) or -1(failed)
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	int new, i, addNum = 1;

	if (index > 32)
		return (-1);
	new = *n >> index;

	if ((new & 1) == 0)
	{
		for (i = 0; i < index; i++)
			addNum *= 2;
	}
	*n += addNum;
	return (1);
}
