#include "holberton.h"

/**
* puts2 - print other char.
* @str: The string to be print.
*/

void puts2(char *str)
{
int i = 0;

while (str[i] != '\0')
{
_putchar(str[i]);
i = i + 2;
}
_putchar('\n');
}
