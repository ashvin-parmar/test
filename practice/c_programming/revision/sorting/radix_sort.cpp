//Positive number only radix sort
#include<iostream>
#include<queue>
using namespace std;
int main()
{
	int size,sz;
	int *x;	
	int i,j,k;
	int lb,ub;
	int largest;
	int e;
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

	largest=x[lb];		//Largest element logic
	for(i=lb;i<=ub;i++)
	{
		if(largest<x[i]) largest=x[i];
	}

	dc=1;		//Digic Count logic
	while(largest>9)
	{
		dc++;
		largest/=10;
	}

	queue<int> queues[10];
	e=1;
	while(dc>0)
	{
		for(i=lb;i<=ub;i++)
		{
			j=((x[i]/e)%10);
			queues[j].push(x[i]);
		}
		j=lb;
		for(i=0;i<10;i++)
		{
			while(!queues[i].empty())
			{
				x[j++]=queues[i].front();
				queues[i].pop();
			}
		}
		e*=10;
		dc--;
	}

	printf("Elements after sorting ->\n");
	for(i=0;i<size;i++) printf("%d%s ",x[i],(i+1!=size)?",":"\n");
	//Memory management
	free(x);
	return 0;
}
