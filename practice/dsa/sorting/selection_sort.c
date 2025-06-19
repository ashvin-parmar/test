//Selection sort

#include<stdio.h>
#include<stdlib.h>

int main()
{
int *arr;
int size;
int i,j,k;
int num;
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

for(i=0;i<size-1;i++)
{
k=i;
for(j=i+1;j<size;j++)
{
if(arr[k]>arr[j]) k=j;
}
num=arr[i];
arr[i]=arr[k];
arr[k]=num;
}
for(i=0;i<size;i++)
{
printf("%d, ",arr[i]);
}
return 0;
}
