#include<stdio.h>
#include<stdlib.h>
int main()
{
	int size;
	char m;
	int *x;
	int largest;
	int i,j,k;

	printf("Enter size: ");
	scanf("%d",&size);
	while((m=getchar())!=EOF && m!='\n');
	x=(int *)malloc(sizeof(int)*size);
	printf("Asking for inputs: ==>\n");
	for(i=0;i<size;i++)
	{
		printf("Enter a number: ");
		scanf("%d",&x[i]);
		while((m=getchar())!=EOF && m!='\n');
	}
	largest=x[0];
	for(i=1;i<size;i++)
	{
		if(x[i]>largest)
		{
			largest=x[i];
		}
	}
	printf("Largest number: %d\n",largest);

	free(x);
	return 0;
}

