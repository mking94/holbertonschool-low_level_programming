#include "holberton.h"
/**
 * _isalpha - Checks if a character is letter.
 * @c: The character to be checked.
 *
 * Return: 1 if character is letter. 0 otherwise.
 */
int _isalpha(int c)
{
if (c >= 97 && c <= 122)
{
return (1);
}
else if (c >= 65 && c <= 90)
{
return (1);
}
else
{
return (0);
}
}
