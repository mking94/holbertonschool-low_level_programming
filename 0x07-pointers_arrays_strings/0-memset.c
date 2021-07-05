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
	int i;
	char tmp[n];

	for (i = 0; i < strlen(s); i++)
	{
		tmp[i] = b;
	}
	tmp[i] = '\0';
	s = tmp;
	return (s);
}
