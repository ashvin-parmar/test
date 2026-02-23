#include<stdio.h>
#include<stdlib.h>
int getPartitionPoint(int *ptr,int lb,int ub)
{
	int e,f;
	int pp;
	int tmp;
	e=lb;
	f=ub;
	while(e<f)
	{
		while(e<=ub && ptr[e]<=ptr[lb]) e++;
		while(ptr[f]>ptr[lb]) f--;
		if(e<f)
		{
			tmp=ptr[e];
			ptr[e]=ptr[f];
			ptr[f]=tmp;
		}
		else
		{
			tmp=ptr[f];
			ptr[f]=ptr[lb];
			ptr[lb]=tmp;
			pp=f;
			break;
		}
	}
	return pp;
}
void quickSortRecursive(int *ptr,int lb,int ub)
{
  int pp;
  if(lb>=ub) return;
  pp=getPartitionPoint(ptr,lb,ub);
  if(lb<pp-1)  quickSortRecursive(ptr,lb,pp-1);
  if(pp+1<ub) quickSortRecursive(ptr,pp+1,ub);
}
int main()
{
	int size,sz;
	int *x;	
	int i;
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

	//Main Sorting Algorithm
	lb=0;		//LowerBound	for ranged sorting
	ub=size-1;	//UpperBound
	sz=ub-lb+1;	//Size of range

	quickSortRecursive(x,lb,ub);

  printf("Elements after sorting ->\n");
	for(i=0;i<size;i++) printf("%d%s ",x[i],(i+1!=size)?",":"\n");
	//Memory management
	free(x);
	return 0;
}
