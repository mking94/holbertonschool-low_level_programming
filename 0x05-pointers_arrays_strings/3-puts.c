#include "holberton.h"
#include <stdio.h>

/**
* _puts - print string.
* @str: the input.
* Return: length.
*/

int _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	_putchar(str[i]);
	_putchar('\n');
}
