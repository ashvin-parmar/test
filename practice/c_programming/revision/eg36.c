#include<stdio.h>
#include<stdio_ext.h>
int factorial(int val)
{
  if(val<=1) return 1;    //A condition required to break the recursion loop
  return val*factorial(val-1);  //call to recursive function and then perform the operation required then return to next call
}
int main()
{
int num;
printf("Enter a number: ");
scanf("%d",&num);
__fpurge(stdin);
printf("Factorial of %d is %d\n",num,factorial(num));
return 0;
}
