#include<stdio.h>
int main()
{
	int step=5;
	int i,j;
	for(i=1;i<=step;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%3d",j);
		}
		printf("\n");
	}

	return 0;
}
