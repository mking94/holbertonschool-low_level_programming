#include "holberton.h"
#include <string.h>
#include <ctype.h>
/**
* string_toupper: encodes a string .
* @str: the input.
* Return: str after encode.
*/

char *leet(char *str)
{
int i = 0;
char tmp[strlen(str)];
while (str[i] != '\0')
{
if(toupper(str[i]) == 'A')
tmp[i] = '4';
else if(toupper(str[i]) == 'E')
tmp[i] = '3';
else if(toupper(str[i]) == 'O')
tmp[i] = '0';
else if(toupper(str[i]) == 'T')
tmp[i] = '7';
else if(toupper(str[i]) == 'L')
tmp[i] = '1';
else
tmp[i] = str[i];
i++;
}
str = tmp;
return (str);
}
