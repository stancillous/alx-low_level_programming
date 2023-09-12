#include "search_algos.h"

/**
 * linear_search - search for item in an array
 * @array: pointer to the array
 * @size: size of the array
 * @value: value to be searched
 * Return: index of the value if found, else -1
*/

int linear_search(int *array, size_t size, int value)
{
    int new_size = size, index;

    if (array == NULL)
        return (NULL);

    for (index = 0; index < new_size; index++)
    {
        printf("Value checked array[%d] = [%d]\n", index, array[index]);
        
        if (array[index] == value)
        {
            return (index);
        }
    }
    return (-1);
}