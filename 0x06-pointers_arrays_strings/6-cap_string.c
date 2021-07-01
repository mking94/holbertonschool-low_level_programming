#include "holberton.h"
#include <string.h>
#include <ctype.h>
/**
* cap_string: change a string to upper .
* @str: the input.
* Return: str .
*/

char *cap_string(char *str)
{
int i = 0;
char tmp[strlen(str)];
char tmpp[2];
tmpp[1]='\0';
char separator[11] = ". ,!(){};?,\n,\"";
while (str[i] != '\0')
{
tmp[i] = str[i];
i++;
}
tmp[i]='\0';
i = 0;
while (tmp[i] != '\0')
{
tmpp[0]=tmp[i];
if(strcspn(separator,tmpp) < 11)
{
i++;
tmp[i] = toupper(tmp[i]);
}
i++;
}
str = tmp;
return (str);
}
