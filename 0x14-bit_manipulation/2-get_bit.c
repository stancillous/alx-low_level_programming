#include "main.h"

/**
 * get_bit - gets value of a bit at given index
 * @index: index given
 * @n: number given
 * Return: value of bit at the index given
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int new, val;

	if (index > 32)
		return (-1);
	new = n >> index;
	val = new & 1;
	return (val);
}
