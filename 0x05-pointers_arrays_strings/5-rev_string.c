#include "holberton.h"
#include <stdio.h>
#include <string.h>

/**
* print_rev - print string.
* @s: the input.
*/

void print_rev(char *s)
{
int i = strlen(s) -1;
char str[strlen(s)];
while (i >= 0)
{
str[strlen(s) - i] = s[i];
i--;
}
s = str;
}
