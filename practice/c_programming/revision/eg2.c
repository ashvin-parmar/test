#include<stdio.h>
int main()
{
	int x,y,z;
	char m;
	printf("Enter a number: ");
	scanf("%d",&x);
	while((m=getchar())!=EOF && m!='\n') ;
	printf("Enter another number: ");
	scanf("%d",&y);
	while((m=getchar())!=EOF && m!='\n');
	z=x+y;

	printf("Sum of %d and %d is %d\n",x,y,z);

	if(z>50)
	{
		printf("%d is greater than 50\n",z);
	}
	else if(z<50)
	{
		printf("%d is lesser than 50\n",z);
	}
	else 
	{
		printf("%d is equals to 50\n",z);
	}

	return 0;
}
