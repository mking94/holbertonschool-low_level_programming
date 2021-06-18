#include <stdio.h>
/**
 * main
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int x=32;
for (int i =0 ; i <2 ; i++)
{
for (int j = 65 ; j < 91 ; j++)
{
	putchar ((char)j+x);
}
  x=0
}
	putchar ('\n');
return (0);
}
