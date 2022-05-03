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

size_t mil;
size_t start = 0;
size_t end = size - 1;
size_t i = 0;

while (start <= end)
{
mil = (end + start) / 2;
i = start;
printf("Searching in array: ");
for (; i <= end; ++i)
{
if (i != start)
printf(", %d", array[i]);
else
printf("%d", array[i]);
}
printf("\n");
if (array[mil] < value)
start = mil + 1;
else if (array[mil] > value)
end = mil - 1;
else
return ((int) mil);
}
return (-1);
}
