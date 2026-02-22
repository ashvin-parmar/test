//Using all types of operators: 

#include<stdio.h>
#include<stdio_ext.h>
int main()
{

	//Assignment operators: 
	int x=10;

	//Arithmetic operators: +, -, *, /, %
	//CLI Designing: 
	int y=10;
	printf("%-8s %5d %-5s %5d %-3s %-5d\n","Sum of",x,"and",y,"is",(x+y));
	printf("%-8s %5d %-5s %5d %-3s %-5d\n","Diff of",x,"and",y,"is",(x-y));
	printf("%-8s %5d %-5s %5d %-3s %-5d\n","Mul of",x,"and",y,"is",(x*y));
	printf("%-8s %5d %-5s %5d %-3s %-5d\n","Div of",x,"and",y,"is",(x/y));
	printf("%-8s %5d %-5s %5d %-3s %-5d\n","Mod of",x,"and",y,"is",(x%y));

	//Relational Operators
	if(x!=y) printf("%d and %d is diff\n",x,y);
	if(x==y) printf("%d and %d is same\n",x,y);
	if(x<y) printf("%d is lesser than %d\n",x,y);
	if(x>y) printf("%d is greater than %d\n",x,y);
	//>= and <=

	//Logical operators: && || 
	x=10;
	if(x!=y && x==20)
	{
		printf("x=%d is not equals to %d and equals to 20 \n",x,y);
	}
	else if(x==20 || y==10)
	{
		printf("Whatever x==20 or y==10\n");
	}
	//Address operator: '&'

	int z;
	printf("Enter a number: ");
	scanf("%d",&z);
	__fpurge(stdin);
	printf("Given nuber is: %d\n",z);


	return 0;
}
