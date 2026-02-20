//Linear sort pattern

#include<stdio.h>
int main()
{
int x,y;

for(y=0;y<4;y++)
{
for(x=y+1;x<5;x++)
{
printf("%d, %d\n",y,x);
}
}
return 0;
}
