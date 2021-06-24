#include "holberton.h"
/**
 * print_diagonal - draws a diagonal line on the terminal, followed by a new line.
 */
void print_diagonal(int n)
{
if (n <= 0)
{
_putchar ('\n'); 
}
else
{
int i;
for (i = 0; i < n; i++)
{
_putchar ((char)92);
}
_putchar ('\n');
}
}
