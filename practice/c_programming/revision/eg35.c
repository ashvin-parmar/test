#include<iostream>
#include<stack>
using namespace std;
void merge(int *fromPtr1,int *fromPtr2,int *toPtr,int lb1,int ub1,int lb2,int ub2,int lb,int ub)
{
	int i1,i2,i3;
	i1=lb1;
	i2=lb2;
	i3=lb;
	while(i1<=ub1 && i2<=ub2)
	{
		if(fromPtr1[i1]>fromPtr2[i2])
		{
			toPtr[i3++]=fromPtr2[i2++];
		}
		else
		{
			toPtr[i3++]=fromPtr1[i1++];
		}
	}
	while(i1<=ub1)
	{
		toPtr[i3++]=fromPtr1[i1++];
	}
	while(i2<=ub2)
	{
		toPtr[i3++]=fromPtr2[i2++];
	}
}
int main()
{
	int size1,size2;
	int *x1,*x2;	
	int *x;
	int i;
	char m;
	//Arguments asking: ==>
	printf("Enter size of first sorted array: ");
	scanf("%d",&size1);
	while((m=getchar())!=EOF && m!='\n');
	x1=(int *)malloc(sizeof(int)*size1);
	if(x1==NULL)
	{
		printf("Unable to allocate memory for %d numbers\n",size1);
		return 0;
	}
	for(i=0;i<size1;i++)
	{
		printf("Enter a number: ");
		scanf("%d",&x1[i]);
		while((m=getchar())!=EOF && m!='\n');
	}
	printf("Enter size of second sorted array: ");
	scanf("%d",&size2);
	while((m=getchar())!=EOF && m!='\n');
	x2=(int *)malloc(sizeof(int)*size2);
	if(x2==NULL)
	{
		printf("Unable to allocate memory for %d numbers\n",size2);
		return 0;
	}
	for(i=0;i<size2;i++)
	{
		printf("Enter a number: ");
		scanf("%d",&x2[i]);
		while((m=getchar())!=EOF && m!='\n');
	}
	x=(int *)malloc(sizeof(int *)*(size1+size2));
	merge(x1,x2,x,0,size1-1,0,size2-1,0,size1+size2-1);
	printf("Elements after merge two sorted array ->\n");
	for(i=0;i<size1+size2;i++) printf("%d%s ",x[i],(i+1!=size1+size2)?",":"\n");
	//Memory management
	free(x1);
	free(x2);
	free(x);
	return 0;
}
