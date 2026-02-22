#include<stdio.h>
#include<stdlib.h>
int main()
{
	int size;
	int *x;
	int i,j,k;
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

	//Main Sorting algorithm
	for(m=size-2;m>=0;m--)
	{
		for(i=0,j=1;i<=m;i++,j++)
		{
			//printf("%d, %d\n",i,j);
			if(x[i]>x[j])
			{
				flag=x[i];
				x[i]=x[j];
				x[j]=flag;
			}
		}
	}
	printf("Elements after sorting ->\n");
	for(i=0;i<size;i++) printf("%d%s ",x[i],(i+1!=size)?",":"\n");


	free(x);
	return 0;
}

