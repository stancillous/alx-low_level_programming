#include "search_algos.h"
/**
 * advanced_binary - advanced binary search
 * @array: array passed
 * @size: array size
 * @value: value to be checked
 * Return: index of value if found, else -1
*/

int advanced_binary(int *array, size_t size, int value)
{
    int low = 0, high = size - 1, middle_index, i;

    if (!array)
        return (-1);

    while (low <= high) {
        middle_index = (low + high)/2;

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
            /*check if middle index is 0*/
            if (middle_index - 1 < 0)
                return (middle_index);

            /* if el on left != value*/
            if (array[middle_index - 1] != value)
                return (middle_index);
            
            else
            {
                high = middle_index - 1;
                continue;
            }
        }

        if (array[middle_index] > value)
        {
            high = middle_index - 1;
            continue;
        }

        else {
            low = middle_index + 1;
            continue;
        }

    }

    return (-1);
}