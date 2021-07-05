#include "holberton.h"

/**
* _memset- fills memory with a constant byte.
* @s: first input;
* @b: seconde input.
* @n: third input;
* Return: s.
*/

int lengthstr(char *str)
{
	int i = 0; 
	
	while(str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char *_memset(char *s, char b, unsigned int n)
{
	int i;
	char tmp[lengthstr(s)];

	for (i = 0; i < lengthstr(s); i++)
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
