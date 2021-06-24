#include <stdio.h>
/**
* main - rints the numbers from 1 to 100, followed by a new line.
* Return: alwase 0;
*/
int main(void)
{
int i;
for (i = 1; i < 101; i++)
{
if (((i % 3) == 0) && ((i % 5) == 0))
{
printf("FizzBuzz");
}
else if (((i % 5) == 0) && ((i % 3) != 0))
{
printf("Buzz");
}
if (((i % 3) == 0) && ((i % 5) != 0))
{
printf("Fizz");
}
else
{
printf("%d", i);
}
}
putchar('\n');
return (0);
}
