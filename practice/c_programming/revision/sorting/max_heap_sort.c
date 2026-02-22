#include<stdio.h>
#include<stdlib.h>
int main()
{
	int size;
	int *x;
	int i,j;
	int lb,ub;
	int ci,ri,lci,rci,swi;
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
	lb=0;		//LowerBound
	ub=size-1;	//UpperBound

	j=lb+1;
	while(j<=ub)
	{
		ci=j;
		while(ci>lb)
		{
			ri=(ci-1)/2;
			if(x[ri]<x[ci])
			{
				flag=x[ri];
				x[ri]=x[ci];
				x[ci]=flag;
				ci=ri;
			}
			else
			{
				break;
			}
		}
		j++;
	}
	j=ub;
	while(j>lb)
	{
		flag=x[j];
		x[j]=x[lb];
		x[lb]=flag;
		j--;
		ri=lb;
		while(ri<j)
		{
			ci=(ri*2)+1;
			lci=ci;
			rci=ci+1;
			if(lci>j) break;
			if(rci>j) swi=lci;
			else if(x[lci]>x[rci]) swi=lci;
			else swi=rci;
			if(x[swi]>x[ri])
			{
				flag=x[swi];
				x[swi]=x[ri];
				x[ri]=flag;
				ri=swi;
			}
			else
			{
				break;
			}
		}
	}

	printf("Elements after sorting ->\n");
	for(i=0;i<size;i++) printf("%d%s ",x[i],(i+1!=size)?",":"\n");

	free(x);
	return 0;
}
