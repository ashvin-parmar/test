#include<stdio.h>
#include<stdlib.h>
int main()
{
	int size;
	int *x;
	int i,j;
	int lb,ub;
	int num;
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
	lb=0;		//LowerBound
	ub=size-1;	//UpperBound

	j=lb+1;
	while(j<=ub)
	{
		num=x[j];
		i=j-1;
		while(i>=lb && x[i]>num)
		{
			x[i+1]=x[i];
			i--;
		}
		x[i+1]=num;
		j++;
	}

	printf("Elements after sorting ->\n");
	for(i=0;i<size;i++) printf("%d%s ",x[i],(i+1!=size)?",":"\n");

	free(x);
	return 0;
}
