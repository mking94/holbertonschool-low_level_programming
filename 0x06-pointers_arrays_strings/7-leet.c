#include "holberton.h"
#include <string.h>
/**
* leet: encodes a string .
* @str: the input.
* Return: str after encode.
*/

char *leet(char *s)
{
int i, x, y;
char letters[] = "oOlLeEaAtT";
char integers[] = "0011334477";
for (i = 0; s[i] != '\0'; i++)
{
y = 0;
for (x = 0; letters[x] != '\0'; x++)
{
if (s[i] == letters[x])
{
y = x;
s[i] = integers[y];
}
}
y++;
}
return (s);
}
