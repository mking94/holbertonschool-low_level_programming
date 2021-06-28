#include "holberton.h"
#include <stdio.h>
#include <string.h>

/**
* print_rev - print string.
* @s: the input.
*/

void print_rev(char *s)
{
int i, len = 0;
while (s[len] != '\0')
{
len++;
}
i=(len-1);
char tmp[len];
while (i >= 0)
{
tmp[len-(i+1)] = s[i];
i--;
}
s = tmp;
}
