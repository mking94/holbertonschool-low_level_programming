#include "holberton.h"

/**
* _memset- fills memory with a constant byte.
* @s: first input;
* @b: seconde input.
* @n: third input;
* Return: s.
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
	char tmp[n];

	for (i = 0; i < n; i++)
	{
		tmp[i] = b;
	}
	tmp[i+1] = '\0';
	s = tmp;
	return (s);
}
