#include<stdio.h>
#include<stdlib.h>
int main()
{
int size;
char m;
int *x;
int largest;
int smallest;
int secondLargest;
int i,j,k;

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
largest=x[0];
smallest=x[0];
for(i=1;i<size;i++)
{
if(x[i]>largest)
{
largest=x[i];
}
if(x[i]<smallest)
{
smallest=x[i];
}
}
printf("Largest number: %d\n",largest);
printf("Smallest number: %d\n",smallest);
if(smallest==largest)
{
printf("There are no second largest number\n");
free(x);
return 0;
}
else
{
secondLargest=smallest;
for(i=0;i<size;i++)
{
if(x[i]<largest && x[i]>secondLargest)
{
secondLargest=x[i];
}
}
printf("Second Largest number: %d\n",secondLargest);
}

free(x);
return 0;
}

