#include "holberton.h"

/**
* _memcpy- function copies n bytes from memory area src to memory area dest.
* @dest: destination ;
* @src: source .
* @n: byte number;
* Return: string destination.
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;
	char tmp[n];

	for (i = 0; i < n; i++)
	{
		tmp[i] = src[i];
	}
	tmp[i] = '\0';
	dest = tmp;
	return (dest);
}
