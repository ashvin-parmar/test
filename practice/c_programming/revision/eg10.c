//Count the number of digits in any number [negative + positive] , must work for both

#include<stdio.h>
int main()
{
	int num,n;
	int count;
	int x,y,z;
	char m;
	printf("Enter a number: ");
	scanf("%d",&num);
	while((m=getchar())!=EOF && m!='\n');
	printf("%d\n",num);
	if(num<0)
	{
		n=(-1)*num;
	}
	else
	{
		n=num;
	}
	count=1;
	while(n>9)
	{
		count++;
		printf("%d\n",n);
		n/=10;
	}
	printf("Number of digits in %d is %d\n",num,count);

	return 0;
}
