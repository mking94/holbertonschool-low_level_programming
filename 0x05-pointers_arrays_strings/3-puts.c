#include "holberton.h"
#include <stdio.h>

/**
* _puts - print string.
* @s: the input.
* Return: length.
*/

int _puts(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	_putchar(s[i]);
	_putchar('\n');
}
