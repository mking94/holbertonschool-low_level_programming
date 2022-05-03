#include "search_algos.h"

/**
 * binary_search - Binary search algorithm.
 * @array: Input array.
 * @size: The array length.
 * @value: The value that be find its index.
 * Return: Index of value in array or -1.
*/

int binary_search(int *array, size_t size, int value)
{
if (array == NULL)
{
return (-1);
}

int mil;
int start = 0;
int end = size;
int test = 0; 

while (test == 0 && start <= end)
{
mil = (start + end) / 2;
if (array[mil] == value)
{
return (mil);
}
else if (value > array[mil])
{
start = mil + 1;
}
else
{
end = mil - 1;
}
}
return (-1);
}
