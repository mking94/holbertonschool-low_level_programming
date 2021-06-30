#include "holberton.h"
#include <string.h>

/**
* _strncat: contact two string.
* @dest: first input.
* @src: second input.
* @n: number of character will be copyed.
* Return: dest.
*/

char *_strcat(char *dest, char *src, int n)
{
int i = 0, max;
char tmp[strlen(dest)+n];
while (dest[i] != '\0')
{
tmp[i] = dest[i];
i++;
}
i=0;
if(strlen(src) != 0)
{
while (i != n)
{
tmp[i+strlen(dest)] = src[i];
i++;
}
}
tmp[strlen(dest)+strlen(src)] = '\0';
dest=tmp;
return dest;
}
