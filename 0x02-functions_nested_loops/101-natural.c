#include <stdio.h>
/**
 * main - Lists all the natural numbers below 1024 (excluded)
 *        that are multiples of 3 or 5.
 *
 * Return: Always 0.
 */
int main(void)
{
int i, k = 0;
for (i = 1; i < 1024; i++)
{
if ((i % 3) == 0 || (i % 5) == 0)
{
k = k + i;
}
}
printf ("%d\n", k);
return (0);
}
