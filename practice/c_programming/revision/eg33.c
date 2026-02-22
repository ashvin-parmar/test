#include<stdio.h>
int main()
{
int num;
int e,f,digit;
int digitCount;		

num=1234;
digitCount=4;	//we know the algorithm
e=1;
f=10;
printf("Digits are: \n");
while(digitCount>0)
{
digit=(num/e)%f;
printf("%d\n",digit);
e*=10;
digitCount--;
}

num=1234;
digitCount=4;
e=1;
f=10;
printf("Digits are: \n");
while(digitCount>0)
{
digit=(num%f)/e;
printf("%d\n",digit);
e*=10;
f*=10;
digitCount--;
}
return 0;
}
