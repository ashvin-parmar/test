//Positive number only radix sort
//Here are some problem arrived -> now its complex to manage the data in array , We have to create queue for radix sort [Let's take a move towards c++]
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int size,sz;
	int *x;
	int **y;
	int i,j,k;
	int lb,ub;
	int largest;
	int dc;
	char m;
	//Arguments asking: ==>
	printf("Enter size: ");
	scanf("%d",&size);
	while((m=getchar())!=EOF && m!='\n');
	x=(int *)malloc(sizeof(int)*size);
	if(x==NULL)
	{
		printf("Unable to allocate memory for %d numbers\n",size);
		return 0;
	}
	for(i=0;i<size;i++)
	{
		printf("Enter a number: ");
		scanf("%d",&x[i]);
		while((m=getchar())!=EOF && m!='\n');
	}
	printf("Elements before sorting ->\n");
	for(i=0;i<size;i++) printf("%d%s ",x[i],(i+1!=size)?",":"\n");

	//Main Sorting Algorithm
	lb=0;		//LowerBound	for ranged sorting
	ub=size-1;	//UpperBound
	sz=ub-lb+1;	//Size of range

	y=(int **)malloc(sizeof(int*)*(10));
	for(i=0;i<10;i++) y[i]=(int *)calloc(10,sizeof(int));
	if(y==NULL)
	{
		printf("Unable to allocate memory for %d numbers\n",largest);
		free(x);
		return 0;
	}
	//Intialize the y[i][j] not required, because we have called calloc 
//	for(i=0;i<10;i++)		
//	{
//		for(j=0;j<10;j++)
//		{
//			printf("%d,",y[i][j]);
//		}
//		printf("\n");
//	}
largest=x[lb];
for(i=lb;i<=ub;i++)
{
if(largest<x[i]) largest=x[i];
}
dc=1;
while(largest>9)
{
dc++;
largest/=10;
}
e=1;
f=10;
while(dc>0)
{
for(i=lb;i<=ub;i++)
{
y[(x[i]/e)%f];
}
e*=10;
f*=10;
dc--;
}
	
	//Memory management
	for(i=0;i<10;i++) free(y[i]);
	free(y);

	printf("Elements after sorting ->\n");
	for(i=0;i<size;i++) printf("%d%s ",x[i],(i+1!=size)?",":"\n");

	free(x);
	return 0;
}
