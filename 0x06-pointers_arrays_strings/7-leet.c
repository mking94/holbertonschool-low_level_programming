#include "holberton.h"
/**
* leet: encodes a string .
* @str: the input.
* Return: str after encode.
*/

char upper(char c)
{
if(c >= 'a' && c<= 'z')
c = (char)(int)c-32;
else 
c = c;
return (c);
}
char *leet(char *str)
{
int i = 0;
char tmp[strlen(str)];
while (str[i] != '\0')
{
if(upper(str[i]) == 'A')
tmp[i] = '4';
else if(upper(str[i]) == 'E')
tmp[i] = '3';
else if(upper(str[i]) == 'O')
tmp[i] = '0';
else if(upper(str[i]) == 'T')
tmp[i] = '7';
else if(upper(str[i]) == 'L')
tmp[i] = '1';
else
tmp[i] = str[i];
i++;
}
str = tmp;
return (str);
}
