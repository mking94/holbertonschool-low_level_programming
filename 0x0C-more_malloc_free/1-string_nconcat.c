#include "holberton.h"
#include <stdlib.h>
#include <string.h>
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
unsigned int i;
if (n > strlen(s2))
unsigned int len = strlen(s1)+strlen(s2);
else
unsigned int len = strlen(s1)+n;
char *tmp = malloc(len);
for (i = 0; i < len; i++)
{
if (i < strlen(s1))
{
tmp[i] = s1[i];
}
else {
tmp[i] = s2[i-strlen(s1)];   
}
}
tmp[i] = '\0';
return (tmp);
}
