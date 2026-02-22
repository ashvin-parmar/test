//Pattern 3: Fibonacci series		[Normal interation method]

#include<stdio.h>
#include<stdio_ext.h>
int main()
{
	int step;
	int x,y,z,i;
	printf("Enter number of steps: ");
	scanf("%d",&step);
	__fpurge(stdin);

	x=1;
	y=1;
	printf("Fibonacci series\n");
	for(i=0;i<step;i++)
	{
		z=x+y;
		//printf("%d\n",z);		//Forwarded to 2 level ahead
		//printf("%d\n",y);		//Forwarded to 1 level ahead
		printf("%d\n",x);		//At the point where series is counted
		x=y;
		y=z;
	}


	return 0;
}
