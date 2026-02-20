#include<stdio.h>
#include<stdlib.h>
#include<stdio_ext.h>
int main()
{
int i,j,k;
int x[15]={100,432,100,5,5,5,23,23,43,53,53,12,5,100,0};
int toFound;
int size=15;
int count;

printf("Elements in the array are: \n");
for(i=0;i<size;i++) printf(" %5d ",x[i]);
printf("\n");

for(j=0;j<size;j++)
{
count=0;
toFound=x[j];
for(i=0;i<size;i++)
{
if(toFound==x[i])
{
count++;
}
}
printf("%d found %d times\n",toFound,count);
}
return 0;
}

