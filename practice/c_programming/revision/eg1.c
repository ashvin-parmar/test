#include<stdio.h>
#include<stdio_ext.h>
int main()
{
	int x;
	printf("Enter a number: ");
	scanf("%d",&x);
	__fpurge(stdin);
	printf("Given number is: %d\n",x);
	return 0;
}
