#include "holberton.h"

/**
* print_rev - print string.
* @s: the input.
*/

void print_rev(char *s)
{
int i = _strlen(s);
while(i > 0)
{
_putchar(s[i]);
i--;
}
}
