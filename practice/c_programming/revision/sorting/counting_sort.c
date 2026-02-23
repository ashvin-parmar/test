//Applicable only on +ve numbers

#include<stdio.h>
#include<stdlib.h>
int main()
{
	int size,sz;
	int *x;
	int *y;
	int i,j;
	int lb,ub;
	int largest;
	int flag;
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

	largest=x[0];
	for(i=lb;i<=ub;i++)
	{
		if(largest<x[i]) 	largest=x[i];
	}
	y=(int *)malloc(sizeof(int)*(largest+1));
	if(y==NULL)
	{
		printf("Unable to allocate memory for %d numbers\n",largest);
		free(x);
		return 0;
	}
	//Intialize the y[largest] array with '0' values
	for(i=0;i<=largest;i++)		
	{
		y[i]=0;
	}
	//Increment the values of x[] array in yth value
	for(i=0;i<size;i++)		
	{
		y[x[i]]++;
	}
	j=0;
	//traverse on y array and put in x array from starting. sorted data is occured.
	for(i=0;i<=largest && j!=sz;i++)
	{
		while(y[i]>0)
		{
			x[j++]=i;
			y[i]--;
		}
	}
	free(y);

	printf("Elements after sorting ->\n");
	for(i=0;i<size;i++) printf("%d%s ",x[i],(i+1!=size)?",":"\n");

	free(x);
	return 0;
}
