#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if(n<0){
	printf("%d is negative",n);
	}else if(0==0){
	printf("%d is zero",n);
	}else{
	printf("%d is positive",n);
	}
	return (0);
}

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Print last digit
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n < 0)
{
printf("%d is negative\n", n);
}
else 
{
printf("%d is positive\n", n);
}
return (0);
}
