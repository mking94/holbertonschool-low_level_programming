#include "holberton.h"

/**
* puts2 - print other char.
* @str: The string to be print.
*/

void puts2(char *str)
{
while (*str)
{
_putchar(*str++);
str++;
}
_putchar('\n');
}
