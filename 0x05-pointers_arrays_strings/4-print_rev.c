#include "holberton.h"
#include <stdio.h>
#include <string.h>

/**
* print_rev - print string.
* @s: the input.
*/

void print_rev(char *s)
{
int i = strlen(s);
while (i >= 0)
{
_putchar(s[i]);
i--;
}
_putchar('\n');
}
