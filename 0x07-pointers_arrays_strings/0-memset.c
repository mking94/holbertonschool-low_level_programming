#include "holberton.h"
#include <string.h>

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
	char tmp[strlen(s)];

	for (i = 0; i < strlen(s); i++)
	{
		if (i < n)
			tmp[i] = b;
		else
			tmp[i] = s[i];
	}
	tmp[i] = '\0';
	s = tmp;
	return (s);
}
