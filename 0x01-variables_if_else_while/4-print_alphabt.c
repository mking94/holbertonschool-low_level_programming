#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
int i=0;

for(int i=97;i<123;i++){
if(i==101 || i==113)
{
i++;
}
putchar((char)i);
}
return (0);
}
