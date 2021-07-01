#include "holberton.h"
#include <stdio.h>
#include <string.h>
#include <ctype.h>

/**
* rot13: encodes a string .
* @str: the input.
* Return: str after encode.
*/

char *rot13(char *str)
{
int i = 0;
char tmp[strlen(str)];
while (str[i] != '\0')
{
tmp[i] = str[i];
i++;
}  
tmp[i]='\0';
i = 0;
while (tmp[i] != '\0')
{
if(toupper(tmp[i]) >= 'A' && toupper(tmp[i]) <= 'Z')
{
if(toupper(tmp[i]) >= 'N')
tmp[i] = (char)tmp[i]-13;
else
tmp[i] = (char)tmp[i]+13;
}
i++;
}
str = tmp;
return str;
}
