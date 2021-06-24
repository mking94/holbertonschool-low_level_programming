#include "holberton.h"
/**
* _isupper - check if the caracter is uppercase.
* @c: the caracter to be checked.
* Return: 1 if character is uppercase. 0 otherwise.
*/
int _isupper(int c)
{
if ((c >= 65) && (c < 91))
{
return (1);
}
else
{
return (0);
}
}
