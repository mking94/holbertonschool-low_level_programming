#include "holberton.h"
#include <stdio.h>

/**
* _strlen - string length.
* @s: the input.
* Return: length.
*/

int _strlen(char *s)
{
	  int length = 0;

	  while (s[length] != '\0')
	  {
	  length ++;
	  }
	  return (length);
}
