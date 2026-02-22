// Forward-backward travers at the same time and compare

#include<stdio.h>
int main()
{
	int e=0;
	int f;
	int size=10;


	f=size-1;
	while(e<f)
	{
		printf("%d, %d\n",e,f);
		e++;
		f--;
	}
	printf("---------------------\n");

	e=0;
	f=size-1;
	while(e<5)
	{
		printf("%d, %d\n",e,f-e);
		e++;
	}

	return 0;
}
