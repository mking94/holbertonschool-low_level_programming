#include <stdio.h>
/**
 * main - Print Hex
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char hex[16] = "0123456789abcdef";
int j;
for (j = 0 ; j < 16 ; j++)
{
putchar (hex[j]);
}
putchar ('\n');
return (0);
}
