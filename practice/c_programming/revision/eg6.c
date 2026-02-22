//Pattern 2: Factorial series
//Multiplication performed

#include<stdio.h>
#include<stdio_ext.h>
int main()
{
	int x,y,i;
	int step;
	printf("Enter number of steps: ");
	scanf("%d",&step);
	__fpurge(stdin);

	x=1;
	y=1;
	printf("Factorial series\n");
	for(i=0;i<step;i++)
	{
		y*=x;
		printf("%d\n",y);
		x++;
	}



	return 0;
}
