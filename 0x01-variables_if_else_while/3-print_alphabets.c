#include <stdio.h>
/**
 * main
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int x=0;
for (int i =0 ; i <2 ; i++)
{
for (int j = 97 ; j < 123 ; j++)
{
	putchar ((char)j-x);
}
  x=32;
}
	putchar ('\n');
return (0);
}
