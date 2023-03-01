#include "main.h"

/**
 * reverse_array - reverses the contents of an array
 * @a: array passed
 * @n: size of array
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int temp[200];
	int i = 0;
	int j = n - 1;

	while (i < n)
	{
		temp[i] = a[j];
		j--;
		i++;
	}
	for (int i = 0; i < n; i++)
	{
		a[i] = temp[i];
	}
}
