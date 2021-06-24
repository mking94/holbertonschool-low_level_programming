#include "holberton.h"
/**
 * print_diagonal - draws a diagonal line on the terminal, followed by a new line.
 * @n: the size of diagonal line;
 */
void print_diagonal(int n)
{
int i = 0, j, k;
int n = 5;
for (k = 0; k < n; k++)
{
for (j = 0; j < i; j++)
{
_putchar (' ');
}
_putchar ((char)92);
_putchar ('\n');
i = i + 2;
}
}
