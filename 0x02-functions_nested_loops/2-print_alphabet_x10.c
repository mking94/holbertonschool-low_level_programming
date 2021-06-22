#include "holberton.h"
/**
 * print_alphabet_x10 - Prints 10 times the alphabet, in lowercase.
 */
void print_alphabet_x10(void)
{
int i, j;
for (j = 0; j < 10; j++)
{
for (i = 97; i < 123; i++)
{
_putchar ((char)i);
}
_putchar ('\n');
}
}
