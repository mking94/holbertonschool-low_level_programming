#include "holberton.h"
#include <stdio.h>
#include <string.h>

/**
* _strcat: contact two string.
* @dest: first input.
* @src: second input.
* Return: dest.
*/

char *_strcat(char *dest, char *src)
{
int x = 0, y = 0;
while (dest[x] != '\0')
x++;
while (src[y] != '\0')
{
dest[x] = src[y];
x++;
y++;
}
return (dest);
}
