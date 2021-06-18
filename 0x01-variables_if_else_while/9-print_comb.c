#include <stdio.h>
/**
 * main - Print comb
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int j;
for (j = 48 ; j < 58 ; j++)
{
putchar ((char)j);
if (j != 57)
{
putchar (',');
putchar (' ');
}
}
putchar ('\n');
return (0);
}
