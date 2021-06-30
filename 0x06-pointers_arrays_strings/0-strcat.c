#include "holberton.h"
#include <string.h>

/**
* _strcat: contact two string.
* @dest: first input.
* @src: second input.
* Return: dest.
*/

char *_strcat(char *dest, char *src)
{
int i=0, max;
char tmp[strlen(dest)+strlen(scr)];
while(dest[i]!='\0')
{
tmp[i]=dest[i];
i++;
}
i=0;
while(src[i]!='\0')
{
tmp[i+strlen(dest)]=src[i];
i++;
}
tmp[strlen(dest)+strlen(src)]='\0';
dest=tmp;
return dest;
}
