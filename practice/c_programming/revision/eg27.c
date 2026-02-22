#include<stdio.h>
#include<stdlib.h>
#include<stdio_ext.h>
int main()
{
	int i,j,k;
	int x[10]={10,423,23,234,6,643,43,5,54,43};
	int toFound;
	int size=10;

	printf("Elements in the array are: \n");
	for(i=0;i<size;i++) printf(" %5d ",x[i]);
	printf("\n");
	printf("Enter a number to found: ");
	scanf("%d",&toFound);
	__fpurge(stdin);

	for(i=0;i<size;i++)
	{
		if(toFound==x[i])
		{
			printf("%d found at %d index.\n",toFound,i);
			break;
		}
	}
	if(i==size)
	{
		printf("%d not found\n",toFound);
	}

	return 0;
}

