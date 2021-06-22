#include "holberton.h"
/**
 * print_sign - Checks if the sign of integer.
 * @n: The integer to be checked.
 *
 * Return: 1 if character is great of zero. 0 otherwise.
 */
int print_sign(int n)
{
if (n == 0)
{
_putchar ('0');
return (0);
}
else if (n > 0)
{
_putchar ('+');
return (1);
}
else
{
_putchar ('-');
return (-1);
}
}
