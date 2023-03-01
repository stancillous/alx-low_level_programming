#include "main.h"

/**
 * reverse_array - reverses the contents of an array
 * @a: array passed
 * @n: size of array
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i = 0;
	int j ;

	while (i < n)
	{
		n--;
		j = a[i];
		a[i] = a[n];
		a[n] = j;
		i++;
	}
	
}
