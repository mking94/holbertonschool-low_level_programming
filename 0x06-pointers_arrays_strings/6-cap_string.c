#include "holberton.h"
#include <stdio.h>
/**
* cap_string- capitalizes all words of a string.
* @str: the input.
* Return: str .
*/

char *cap_string(char *str)
{
int i;
for (i = 0; x[i] != '\0'; i++)
{
if ((x[i] == ',') || (x[i] == ';') || (x[i] == '.') || (x[i] == '!')
|| (x[i] == '?') || (x[i] == '"') || (x[i] == '(') || (x[i] == ')')
|| (x[i] == '{') || (x[i] == '}') || (x[i] == ' ') || (x[i] == '\t')
|| (x[i] == '\n'))
{
if ((x[i + 1] >= 'a') && (x[i + 1] <= 'z'))
x[i + 1] = x[i + 1] - 32;
}
if ((x[0] >= 'a') && (x[0] <= 'z'))
x[0] = x[0] - 32;
}
return (x);
}
