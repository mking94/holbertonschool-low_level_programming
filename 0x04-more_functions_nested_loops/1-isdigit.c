#include "holberton.h"
/**
* _isupper - check if the caracter is digit.
* @c: the input to be checked
* Return: 1 if input is digit. 0 otherwise.
*/
int _isdigit(int c)
{
if ((c > -1) && (c < 10))
{
return (1);
}
else
{
return (0);
}
}
