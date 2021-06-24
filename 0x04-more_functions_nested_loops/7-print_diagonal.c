#include "holberton.h"
/**
* print_diagonal - Draws a diagonal line using the \ character.
* @n: The number of \ characters to be printed.
*/
void print_diagonal(int n)
{
if (n > 0)
{
int j, k;
for (k = 0; k < n; k++)
{
for (j = 0; j < k; j++)
{
_putchar(' ');
}
_putchar((char)92);
_putchar('\n');
}
}
_putchar('\n');
}
