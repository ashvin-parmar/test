//Some pattern

#include<stdio.h>
int main()
{
	int x,y;
	int m;

	x=1;
	while(x<=3)
	{
		y=1;
		while(y<=3)
		{
			printf("%d, %d\n",x,y);
			y++;
		}
		x++;
	}

	return 0;
}
