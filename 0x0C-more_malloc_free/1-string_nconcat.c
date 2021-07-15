#include "holberton.h"
#include <stdlib.h>
/**
 * string_nconcat - concat n bytes from s2 onto s1 in a new memory space
 * @s1: string one
 * @s2: string two
 * @n: number of bytes from s2 to concat onto s1
 *
 * Return: pointer to new string, NULL on fail
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0, j = 0, k = 0;
	char *T, *Tstart;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (*(s1 + i))
		i++;
	while (*(s2 + j))
		j++;
	if (n >= j)
	{
		n = j;
		T = malloc(sizeof(char) * (i + n + 1));
	}
	else
		T = malloc(sizeof(char) * (i + j + 1));
	if (T == NULL)
		return (NULL);
	Tstart = T;
	while (*s1)
		*T++ = *s1++;
	while (k < n)
	{
		*T++ = *s2++;
		k++;
	}
	*T = '\0';
	return (Tstart);
}
