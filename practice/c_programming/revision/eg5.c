//patterns1: increament the y value by increamented element x;
//Addition perform

#include<stdio.h>
int main()
{
	int x,y,i;
	int step;
	x=1;
	y=1;
	printf("Number of setps: ");
	scanf("%d",&step);

	for(i=0;i<step;i++)
	{
		printf("%d\n",y);
		//y=y+x;
		y+=x;
		x++;
	}


	return 0;
}
