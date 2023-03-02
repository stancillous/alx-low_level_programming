#include "main.h"

/**
 * reverse_array - reverses the contents of an array
 * @a: array passed
 * @n: size of array
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i, j, hold;

	for (i = 0; i < n - 1; i++)
	{
		for (j = i + 1; j > 0; j--)
		{
			hold = a[j];
			a[j] = a[j - 1];
			a[j - 1] = hold;
		}
	}
}
