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
	int size;
	int sz;
	int *x;
	int *tmp;
	int i,j;
	int mid;
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
	tmp=(int *)malloc(sizeof(int)*size);
	if(tmp==NULL)
	{
		printf("Unable to allocate memory for %d numbers\n",size);
		free(x);
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

	stack<pair<int,int>> stk1,stk2;
	stk1.push(pair<int,int>(lb,ub));
	while(!stk1.empty())
	{
		auto [a,b]=stk1.top();
		stk1.pop();
		stk2.push(pair<int,int>(a,b));
		mid=(a+b)/2;
		if(a<mid)
		{
			stk1.push(pair<int,int>(a,mid));
		}
		if(mid+1<b)
		{
			stk1.push(pair<int,int>(mid+1,b));
		}
	}
	while(!stk2.empty())
	{
		auto [a,b]=stk2.top();
		stk2.pop();
		mid=(a+b)/2;
		sz=(mid-a+1)+(b-(mid+1)+1);
		merge(x,x,tmp,a,mid,mid+1,b,0,sz-1);
		j=0;
		for(i=a;i<=mid && j<sz;i++) x[i]=tmp[j++];
		for(i=mid+1;i<=b && j<sz;i++) x[i]=tmp[j++];
	}
	printf("Elements after sorting ->\n");
	for(i=0;i<size;i++) printf("%d%s ",x[i],(i+1!=size)?",":"\n");
	//Memory management
	free(tmp);
	free(x);
	return 0;
}
