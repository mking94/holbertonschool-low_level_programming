#include "search_algos.h"

/**
 * linear_search - Linear search algorithm
 * @array: Input array.
 * @size: The array length.
 * @value: The value that be find its index.
 * Return: Index of value in array.
 */

int linear_search(int *array, size_t size, int value)
{
int i = 0;
if (array == NULL)
{
return (-1);
}
while (i < size && array[i] != value)
{
printf("Value checked array[%li] = [%i]\n", i, array[i]);
i++;
}
if (array[i] == value)
{
printf("Value checked array[%li] = [%i]\n", i, array[i]);
return (i);
}
return (-1);
}
