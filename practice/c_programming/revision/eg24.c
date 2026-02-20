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

printf("Before reversing the array\n");
for(i=0;i<size;i++) printf("%d\n",x[i]);
i=0;
j=size-1;
while(i<j)
{
k=x[i];
x[i]=x[j];
x[j]=k;
i++;
j--;
}
printf("After reversing the array: \n");
for(i=0;i<size;i++) printf("%d\n",x[i]);

free(x);
return 0;
}

