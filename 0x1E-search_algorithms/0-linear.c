#include "search_algos.h"

/**
 * linear_search - uses linear search algo
 * @array: array
 * @size: array size
 * @value: value to be searched
 * Return: index of value if found, else -1
*/

int linear_search(int *array, size_t size, int value)
{
    int array_size = size;
    int i;

    if (array == NULL)
    {
        return (-1);
    }

    for (i = 0; i < size; i++)
    {
        printf("Value checked array[%d] = [%d]\n", i, array[i]);
        if (array[i] == value)
        {
            return (i);
        }
    }
    return (-1);

}