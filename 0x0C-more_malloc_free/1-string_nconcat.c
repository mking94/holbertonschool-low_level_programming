#include "holberton.h"
#include <stdlib.h>
/**
 * string_nconcat - concat n bytes from s2 onto s1 in a new memory space
 * @s1: string one
 * @s2: string two
 * @n: number of bytes from s2 to concat onto s1
 *
 * Return: pointer to new string, NULL on fail
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *s;
unsigned int i, lens1 = 0, lens2 = 0;
while(s1[lens1] != '\0')
lens1++;
while(s2[lens2] != '\0')
lens2++;
if (n > lens2)
len = lens1 + lens2;
else
len = lens1 + n;
char *tmp = malloc(len);
for (i = 0; i < len; i++)
{
if(i < longstr(s1))
{
tmp[i] = s1[i];
}
else {
tmp[i] = s2[i - lens2];   
}
}
tmp[i] = '\0';
return (tmp);
}
