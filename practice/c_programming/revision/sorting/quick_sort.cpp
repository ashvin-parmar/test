#include<iostream>
#include<stack>
using namespace std;
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
int main()
{
	int size,sz;
	int *x;	
	int i,j,k;
	int pp;
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

	stack<pair<int,int>> stk1;
	stk1.push(pair<int,int>(lb,ub));
	while(!stk1.empty())
	{
		auto [a,b]=stk1.top();
		stk1.pop();
		pp=getPartitionPoint(x,a,b);
		if(pp+1<b)
		{
			stk1.push(pair<int,int>(pp+1,b));
		}
		if(a<pp-1)
		{
			stk1.push(pair<int,int>(a,pp-1));
		}
	}

	printf("Elements after sorting ->\n");
	for(i=0;i<size;i++) printf("%d%s ",x[i],(i+1!=size)?",":"\n");
	//Memory management
	free(x);
	return 0;
}
