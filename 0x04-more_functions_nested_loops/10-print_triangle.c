#include "holberton.h"
/**
 * print_diagonal - draws a triangle on the terminal, followed by a new line.
 * @size: the size of triangle line;
 */
void print_triangle(int size)
{
int i, j;
if (!(size <= 0))
{
for (i = 1; i <= size; i++)
{
for (j = 1; j <= size; j++)
{
if ((j + i) <= size)
_putchar(' ');
else
_putchar('#');
}
_putchar('\n');
}
}
else
{
putchar('\n');
}
}
