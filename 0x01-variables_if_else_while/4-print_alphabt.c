#include <stdio.h>
/**
 * main - Print Alpha
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int j;
for (j = 97 ; j < 123 ; j++)
{
if (j == 101 || j == 113)
{
  j++;
}
  putchar ((char)j);
}
  putchar ('\n');
  return (0);
}
