#include <stdio.h>
/**
 * main - Print Alpha
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i, j;
for (i = 48 ; i < 57 ; i++)
{
for (j = 48 ; j < 58 ; j++)
{
putchar ((char)i);
putchar ((char)j);
if(i==56){
if(j==57){
break;  
}
}
putchar(',');
putchar(' ');
}
}
putchar ('\n');
return (0);
}
