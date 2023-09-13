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
    int middle_index = (low + high) / 2;
    int index, i;

    if (!array)
        return (-1);

    if (low > high)
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
    /*check if value is at 0th index*/
    if ((middle_index - 1) < 0)
        return (middle_index);

    /*if el on left != target value*/
    if (array[middle_index - 1] != value)
        return (middle_index);

    else /*el on left is also == to target*/
    {
        high = middle_index - 1;
        index = binary_recursion(array, value, low, high);
        return (index);
    }

    }

    else if (array[middle_index] > value)
    {
        high = middle_index - 1;
        index = binary_recursion(array, value, low, high);

    }
    else
    {
        low  = middle_index + 1;
        index = binary_recursion(array, value, low, high);

    }
    return (index);
  
}

/**
 * exponential_search - func to search for element
 * using expo search algorithm
 * @array: array passed
 * @size: size of array
 * @value: value to be checked
 * Return: index of value if found, else -1
*/

int exponential_search(int *array, size_t size, int value)
{
    int low, high, middle_index; /*to be used for binary search*/
    int power = 2, i = 1;
    int value_index, array_size = size;

    if (!array)
        return (-1);

    if (array[0] == value)
        return (0);

    while (i < array_size && array[i] <= value)
    {
        printf("Value checked array[%d] = [%d]\n", i, array[i]);
        i *= power;
    }


    /*perform binary search*/
    low = i / 2;
    high = (i < size) ? i: size - 1;
    printf("Value found between indexes [%d] and [%d]\n", low, high);
    value_index = binary_recursion(array, value, low, high);
    return (value_index);
}