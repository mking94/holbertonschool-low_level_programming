#include "holberton.h"
/**
* print_numbers - numbers, from 0 to 9, followed by a new line.
*
* Return: none.
*/
void print_numbers(void)
{
int i;
for (i = 0; i <= 9; i++)
{
_putchar((i % 10) + '0');
}
_putchar('\n');
}
