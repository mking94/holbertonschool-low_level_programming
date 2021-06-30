#include "holberton.h"
#include <string.h>

/**
* reverse_array: reverses the content of an array of integers.
* @a: the array input.
* @n: the length of array.
* Return: void.
*/

void reverse_array(int *a, int n)
{
n--;
int i = 0;
while (n / 2 != i)
{
a[i] = a[n-i] + a[i];
a[n-i] = a[i] - a[a-i];
a[i] = a[i] - a[a-i]; 
i++;
}
}
