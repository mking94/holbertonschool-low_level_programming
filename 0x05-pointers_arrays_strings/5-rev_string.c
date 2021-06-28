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
char str[i+1];
while (i >= 0)
{
str[strlen(s) - (i+1)] = s[i];
i--;
}
s = str;
}
