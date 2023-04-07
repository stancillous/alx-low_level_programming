#include "main.h"

/**
 * clear_bit - sets value of a bit at given index to 0
 * @index: index
 * @n: address of the number
 * Return: 1 (success) or -1(failed)
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int i;
	int new, addNum = 1;

	if (index > 32)
		return (-1);
	if (*n == 0)
		return (1);
	new = *n >> index;

	if ((new & 1) == 1)
	{
		for (i = 0; i < index; i++)
			addNum *= 2;
	}
	*n -= addNum;
	return (1);
}
