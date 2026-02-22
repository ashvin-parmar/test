//Pattern 4: Random pattern [+1,-2,+3,-4,+5,-6]

#include<stdio.h>
int main()
{
	int step=10;
	int x,y;
	x=1;
	y=1;
	while(x<=10)
	{
		if(x%2==0)
		{
			y+=x;
		}
		else
		{
			y-=x;
		}
		printf("%d\n",y);
		x++;
	}
	return 0;
}

