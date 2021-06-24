#include "holberton.h"

/**
* print_diagonal - draws a triangle on the terminal, followed by a new line.
* @size: the size of triangle line;
* 
* Return: void.
*/

void print_triangle(int size)
{
int i, j;

if (size <= 0)
_putchar('\n');
for (a = 1; a <= size; a++)
{
for (b = 1; b <= size; b++)
{
if (b <= (size - a))
_putchar(' ');
else
_putchar('#');
}
_putchar('\n');
}

}
