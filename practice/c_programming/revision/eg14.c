//Armstrong number: 153: 1^3+5^3+3^3=153

#include<stdio.h>

int _power(int b,int e)
{
	int i,result;
	i=1;
	result=1;
	while(i<=e)
	{
		result*=b;
		i++;
	}
	return result;
}

int main()
{
	int x,y,z,i,n;
	int dc,num,sum,cal;
	int si,ei;
	char m;

	printf("Enter a starting point: ");
	scanf("%d",&si);
	while((m=getchar())!=EOF && m!='\n');

	printf("Enter a ending point[MAX=100000]: ");
	scanf("%d",&ei);
	while((m=getchar())!=EOF && m!='\n');

	if(si<0)
	{
		si=1;
	}
	if(si>ei)
	{
		printf("Invalid starting and ending point\n");
		return 0;
	}
	if(ei>100000) ei=100000;
	printf("Armstrong number from %d to %d are....\n",si,ei);

	while(si<=ei)
	{
		num=si;
		dc=1;
		while(num>9)
		{
			dc++;
			num/=10;
		}
		num=si;
		//printf("%d, %d\n",num,dc);
		//printf("Num: %d\n",num);
		cal=0;
		while(num>0)
		{
			x=num%10;
			y=_power(x,dc);
			//printf("%d, %d     ",x,y);
			cal+=y;
			num/=10;
		}
		if(cal==si)
		{
			printf("%d\n",cal);
		}
		si++;
	}



	return 0;
}


