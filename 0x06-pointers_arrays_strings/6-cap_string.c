#include "holberton.h"
#include <stdio.h>
#include <string.h>
#include <ctype.h>
/**
* cap_string- capitalizes all words of a string.
* @str: the input.
* Return: str .
*/

char *cap_string(char *str)
{
int i = 0;
char tmpp[2];
tmpp[1] = '\0';
char separator[11] = ". ,!(){};?\n\"";
while (str[i] != '\0')
{
tmpp[0] = str[i-1];
if (strcspn(separator, tmpp) < 11)
{
if(str[i] >= 'a' && str[i] <= 'z')
str[i] = (char)((int)str[i]-32);
}
i++;
}
return (str);
}
