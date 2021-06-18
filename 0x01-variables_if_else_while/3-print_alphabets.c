#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
int x=32;

for(int i=0;i<2){
for(j=65;j<91;j++){
putchar((char)(j+x));
}
x=0;
}
return (0);
}
