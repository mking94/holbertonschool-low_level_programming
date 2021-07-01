#include <stdio.h>
#include <string.h>
#include <ctype.h>

/**
* print_number: print an interger.
* @n: the input.
* Return: void.
*/

void print_number(int n)
{
int i = 10, j = 0;
int lastdigit = n%10;
while (i < n)
{
i = i * 10;
j++;
}
i = i / 10;
while (0 < j)
{
_putchar((char)(48+(n/i)));
n = n % i;
i = i / 10;
j--;
}
_putchar((char)48+lastdigit);
}
