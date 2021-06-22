 #include "holberton.h"
/**
 * print_last_digit - print the value of last digit.
 * @n: The integer .
 *
 * Return: the last digit of integer.
 */
int print_last_digit(int n)
{
if ((n % 10) < 0)
{
_putchar ((-1*(n % 10)) + '0');
return (-1*(n % 10));
}
else
{
_putchar ((n % 10) + '0');
return (n % 10);
}
}
