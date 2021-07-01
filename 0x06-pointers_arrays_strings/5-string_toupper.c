#include "holberton.h"
#include <string.h>

/**
* string_toupper: changes all lowercase letters of a string to uppercase.
* @str: the input.
* Return: str.
*/

char *string_toupper(char *str)
{
int i = 0;
char tmp[strlen(str)];
while (str[i] != '\0')
{
if(str[i] >= 'a' && str[i] <= 'z')
tmp[i] = (char)((int)str[i] - 32);
else
tmp[i]=str[i];
i++;
}
tmp[i+1]='\0';
str=tmp;
return str;
}
