#include "holberton.h"
#include <stdio.h>
#include <string.h>

/**
* print_rev - print string.
* @s: the input.
*/

void print_rev(char *s)
{
int len = 0;
while (s[len] != '\0')
{
len++;
}
int i = (len-1);
while (i >= 0)
{
str[len-(i+1)] = s[i];
i--;
}
s = str;
}
