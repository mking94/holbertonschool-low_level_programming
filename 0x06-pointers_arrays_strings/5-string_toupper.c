#include "holberton.h"

/**
  * string_toupper - Change string to uppercase.
  * @str: The input string
  *
  * Return: str
  */
char *string_toupper(char *str)
{
int i = 0;
while (str[i] != '\0')
{
if (str[i] >= 'a' && str[i] <= 'z')
{
str[i] = (char)((int)str[i] - 32);
}
i++;
}
return (str);
}
