#include<stdio.h>
#include<stdlib.h>
//return index from which all right elements are larger and left elements are smaller.
int getPartitionPoint(int *ptr,int lb,int ub)
{
int e,f;
int tmp;
int pp;
int sz=ub-lb+1;
e=lb;
f=ub;
while(e<f)
{
while(e<ub && ptr[lb]>=ptr[e]) e++;
while(ptr[lb]<ptr[f]) f--;
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
int main()
{
	int size;
	int *x;
	int i;
	int pp;
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
	pp=getPartitionPoint(x,0,size-1);
	printf("Partition point after : \n");
	for(i=0;i<size;i++) printf("%d%s ",x[i],(i+1)==size?"\n":",");
	printf("%d\n",pp);
	free(x);
	return 0;
}

