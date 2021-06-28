#include "holberton.h"

/**
* _puts - print string.
* @str: the input.
* Return: length.
*/

void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
	_putchar(str[i]);
	}
	_putchar('\n');
}
