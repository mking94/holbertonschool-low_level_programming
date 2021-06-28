#include "holberton.h"
#include <stdio.h>
#include <string.h>

/**
* puts2 - print other char.
* @str: The string to be print.
*/

void puts_half(char *str)
{
int len;
len = strlen(str);
if (len % 2 == 0)
{
int i;
for (i=0; i < (len / 2); i++)
_putchar(str[i]);
}
else
{
int i;
for (i=0; i < ((len - 1) / 2); i++)
_putchar(str[i]);
}
_putchar('\n');
}
