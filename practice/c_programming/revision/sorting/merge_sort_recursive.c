#include<stdio.h>
#include<stdlib.h>
void merge(int *ptr,int lb1,int ub1,int lb2,int ub2)
{
	int i1,i2,i3;
  int *tmp;
  int size1,size2,tmpSize;
  size1=(ub1-lb1+1);
  size2=(ub2-lb2+1);
  tmpSize=size1+size2;
  tmp=(int *)malloc(sizeof(int)*(tmpSize));
	i1=lb1;
	i2=lb2;
	i3=0;
	while(i1<=ub1 && i2<=ub2)
	{
		if(ptr[i1]>ptr[i2])
		{
			tmp[i3++]=ptr[i2++];
		}
		else
		{
			tmp[i3++]=ptr[i1++];
		}
	}
	while(i1<=ub1)
	{
		tmp[i3++]=ptr[i1++];
	}
	while(i2<=ub2)
	{
		tmp[i3++]=ptr[i2++];
	}
  i3=0;
  for(i1=lb1;i1<=ub1;i1++)
  {
    ptr[i1]=tmp[i3++];
  }
  for(i2=lb2;i2<=ub2;i2++)
  {
    ptr[i2]=tmp[i3++];
  }
  free(tmp);
}
void mergeSortRecursive(int *ptr,int lb,int ub)
{
  int mid=(ub+lb)/2;
  if(ub<=lb) return;

  if(lb<mid) mergeSortRecursive(ptr,lb,mid);
  if(mid+1<ub) mergeSortRecursive(ptr,mid+1,ub);
  merge(ptr,lb,mid,mid+1,ub);
}
int main()
{
	int size;
	int sz;
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

  mergeSortRecursive(x,lb,ub);
	
  printf("Elements after sorting ->\n");
	for(i=0;i<size;i++) printf("%d%s ",x[i],(i+1!=size)?",":"\n");
	//Memory management
	free(x);
	return 0;
}
