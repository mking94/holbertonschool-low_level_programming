#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
int i=0;

for(i=48;i<58;i++){
putchar((char)i);
if(i!=57){
putchar(',');
putchar(' ');
}
}
/* your code goes there */
return (0);
}
