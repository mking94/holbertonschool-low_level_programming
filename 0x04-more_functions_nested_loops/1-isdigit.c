#include "holberton.h"
#include <stdio.h>
/**
* _isdigit - check for a digit.
* @c: the input to be checked
* Return: 1 if input is digit. 0 otherwise.
*/
int _isdigit(int c)
{
if (c >= '0' && c <= '9')
{
return (1);
}
else
{
return (0);
}
}
