//Reverse traversal on an interger

#include<stdio.h>
int main()
{
	int num,n;
	int count;
	int x,y,z;
	int revNum;
	char m;
	printf("Enter a number: ");
	scanf("%d",&num);
	while((m=getchar())!=EOF && m!='\n');
	printf("Num: %d\n",num);
	if(num<0)
	{
		n=(-1)*num;
	}
	else
	{
		n=num;
	}
	printf("Reverse traversal on an interger\n");
	x=0;
	revNum=0;
	while(n>0)
	{
		printf("%d\n",n%10);
		revNum=(revNum*10)+n%10;
		n/=10;
	}
	if(num<0)
	{
		revNum=(-1)*revNum;
	}

	printf("Reverse number: %d\n",revNum);			//This is not work for corner cases, but we have to thing about corner cases, solutions for this available in competative folder.
	return 0;
}
