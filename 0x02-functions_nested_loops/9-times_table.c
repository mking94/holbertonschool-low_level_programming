#include "holberton.h"
/**
 *  Prints "Holberton" followed by a new line.
 *
 * Return: Always 0.
 */
void times_table(void)
{
int i,j;
for (i = 0; i < 10; i++)
{
for (j = 0; j < 10; j++)
{
_putchar ((j * i) + '0')
if (j != 9)
{
_putchar (',');
_putchar (' ');
}
} 
_putchar ('\n');
}
}
