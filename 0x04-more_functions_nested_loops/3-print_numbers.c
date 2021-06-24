#include "holberton.h"
/**
 * print_numbers - numbers, from 0 to 9, followed by a new line.
 *
 * Return: alwase 0.
 */
void print_numbers(void)
{
int i;
for (i = 0; i < 10; i++)
{
_putchar((char)(48+i));
}
_putchar('\n');
return (0);
}
