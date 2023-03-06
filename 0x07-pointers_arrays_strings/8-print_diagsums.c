#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix
 * @a: array
 * @size: size of square matrix
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int i, main = 0, secondary = 0;
	int sSize = size * size;

	for (i = 0; i < sSize; i++)
	{
		if (i % (size + 1) == 0)
			main += a[i];
		if (i % (size - 1) == 0 && i != 0 && i < sSize - 1)
			secondary += a[i];
	}
	printf("%d, %d\n", main, secondary);
}
