//Min-Heap

#include<stdio.h>
#include<stdlib.h>
int main()
{
	int size;
	int *x;
	int i,j;
	int flag;
	int ci,ri;
	int lb,ub;
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

	lb=0;		//LowerBound	[Used to set the range of sorting.]
	ub=size-1;	//UpperBound

	/*	FORMULA's Used In Heap Sort Algorithm
		ri=0;		//root index
		ci=(ri*2)+1;	//child index
			lci=ci;		//left child node
			rci=ci+1;	//right child node
		or 
		ri=(ci-1)/2;	//floor part
		ci=ub;
	 */

	//Create Min-Heap 	[applied in forward direction]
	for(j=lb+1;j<=ub;j++)
	{
		ci=j;
		while(ci>lb)
		{
			ri=(ci-1)/2;
			if(x[ci]<x[ri])
			{
				flag=x[ci];
				x[ci]=x[ri];
				x[ri]=flag;
				ci=ri;
			}
			else
			{
				break;
			}
		}
	}
	printf("Elements after min-heap ->\n");
	for(i=0;i<size;i++) printf("%d%s ",x[i],(i+1!=size)?",":"\n");


	free(x);
	return 0;
}

