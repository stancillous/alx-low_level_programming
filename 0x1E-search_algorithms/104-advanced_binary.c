#include "search_algos.h"

/**
 * binary_recursion - binary search using recursion
 * @array: array passed
 * @low: lower bound
 * @high: upper bound
 * @value: value to be checked
 * Return: index of value if found, else -1
*/

int binary_recursion(int *array, int value, int low, int high)
{
	int middle_index = (low + high) / 2, index, i;

	if (!array || (low > high))
		return (-1);
	printf("Searching in array: ");
	for (i = low; i <= high; i++)
	{
		printf("%d", array[i]);
		if (i + 1 != high + 1)
			printf(", ");
	}
	printf("\n");
	if (array[middle_index] == value)
	{
		/*check if value is at the 0th index*/
		if ((middle_index - 1) < 0)
			return (middle_index);
		/*if el on left != target value*/
		if (array[middle_index - 1] != value)
			return (middle_index);
		/*el on left is also == target*/
		else
		{
			index = binary_recursion(array, value, low, middle_index - 1);
			return (index);
		}
	}
	else if (array[middle_index] > value)
		index = binary_recursion(array, value, low, middle_index - 1);
	else
		index = binary_recursion(array, value, middle_index + 1, high);
	return (index);
}
/**
 * advanced_binary - func to search for el using expo search algo
 * @array: array
 * @size: array size
 * @value: value to search
 * Return: index of value if found, else -1
 */

int advanced_binary(int *array, size_t size, int value)
{
	int low = 0, high = size - 1, index;

	if (!array)
		return (-1);
	index = binary_recursion(array, value, low, high);
	return (index);
}
