#include "holberton.h"
/**
* print_triangle - print a triangle conformed by #, followed by a new line.
* @size: the size of triangle line;
* Return: void.
*/
void print_triangle(int size)
{
int size =10;
int i, j;
if (!(size <= 0))
{
for (i = 1; i <= size; i++)
{
for (j = 1; j <= size; j++)
{
if ((j + i) <= size)
putchar(' ');
else
putchar('#');
}
putchar('\n');
}
}
else
{
putchar('\n');
}
}
