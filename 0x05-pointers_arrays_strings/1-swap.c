#include "holberton.h"
#include <stdio.h>
/**
* swap_int - integers swap.
* @a: the first input.
* @b: the second input.
* Return: void.
*/
void swap_int(int *a, int *b)
{
	  int *z = &(int){*a};
    a = &(int){*b};
    z = &(int){*z};
}
