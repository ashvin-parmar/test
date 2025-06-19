#include<stdio.h>
#include<stdlib.h>

int main()
{
int *arr;
int size;
int i;
int x,y,z;
char m;
printf("Enter requirement: ");
scanf("%d",&size);
while((m=getchar())!='\n' && m!=EOF);
arr=(int *)malloc(sizeof(int)*size);
if(arr==NULL)
{
printf("Unable to allocated size amount of memory, Low on memory\n");
return 0;
}
for(i=0;i<size;i++)
{
printf("Enter a number: ");
scanf("%d",&arr[i]);
//fflush(stdin);
while((m=getchar())!='\n' && m!=EOF);
}

for(x=size-1;x>=0;x--)
{
for(y=0;y<x;y++)
{
if(arr[y]>arr[y+1])
{
z=arr[y];
arr[y]=arr[y+1];
arr[y+1]=z;
}
}
}
for(i=0;i<size;i++)
{
printf("%d, ",arr[i]);
}
return 0;
}
