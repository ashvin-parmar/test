//Example of star pyramids

#include<stdio.h>
int main()
{
int step=5;
int i,j;
int space=step-1;
int star=1;
for(i=0;i<step;i++)
{
for(j=0;j<space;j++) printf(" ");
for(j=0;j<star;j++) printf("*");
star+=2;
space--;
printf("\n");
}


return 0;
}
