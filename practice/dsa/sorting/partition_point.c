#include<stdio.h>
#include<stdlib.h>
int main()
{
int arr[10]={2,22,51,5,236,12,5,3,12,42};
int i,j,k;
int lb=0;
int ub=9;
for(i=0;i<=ub;i++) printf("%d, ",arr[i]);
printf("\n");
i=lb;
j=ub;
while(i<j)
{
while(i<=ub && arr[i]<=arr[lb] ) i++;
while(arr[j]>arr[lb]) j--;
if(i<j)
{
k=arr[j];
arr[j]=arr[i];
arr[i]=k;
printf("swap\n");
}
else
{
k=arr[j];
arr[j]=arr[lb];
arr[lb]=k;
printf("Swap last\n");
}
}
for(i=0;i<=ub;i++) printf("%d, ",arr[i]);
printf("\n");
printf("Partition point: %d\n",j);
return 0;
}
