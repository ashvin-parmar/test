#include<stdio.h>
#include<stdlib.h>
int main()
{
int size;
char m;
int *x;
int i,j,k;
int evenLargestNumber=0;

printf("Enter size: ");
scanf("%d",&size);
while((m=getchar())!=EOF && m!='\n');
x=(int *)malloc(sizeof(int)*size);
if(x==NULL)
{
printf("Unable to allocate memory for size=%d\n",size);
return 0;
}
printf("Asking for inputs: ==>\n");
for(i=0;i<size;i++)
{
printf("Enter a number: ");
scanf("%d",&x[i]);
while((m=getchar())!=EOF && m!='\n');
}

for(i=0;i<size;i++) 
{
if(x[i]%2==0)
{
break;
}
}
if(i==size)
{
printf("There are no even integer present in the array\n");
free(x);
return 0;
}
evenLargestNumber=x[i];
for(;i<size;i++)
{
if(x[i]%2==0 && x[i]>evenLargestNumber)
{
evenLargestNumber=x[i];
}
}
printf("Largest even number in the array is %d\n",evenLargestNumber);
free(x);
return 0;
}

