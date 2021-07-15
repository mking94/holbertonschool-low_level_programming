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
unsigned int i;
unsigned int len ;
if (n > longstr(s2))
len = longstr(s1) + longstr(s2);
else
len = strlen(s1)+n;
char *tmp = malloc(len);
for (i = 0; i < len; i++)
{
if(i < longstr(s1))
{
tmp[i] = s1[i];
}
else {
tmp[i] = s2[i-longstr(s1)];   
}
}
tmp[i] = '\0';
return (tmp);
}
/**
* longstr - Function count string length
* @str: input
* Return: str length
*/
int longstr(char *str)
{
int i = 0;
while(str[i] != '\0')
i++;
return (i);
}
