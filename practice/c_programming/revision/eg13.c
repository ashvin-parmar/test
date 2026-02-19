// Power function replica

#include<stdio.h>
int main()
{
int b,e;
int i,result;
char m;
printf("Enter base: ");
scanf("%d",&b);
while((m=getchar())!=EOF && m!='\n');

printf("Enter exponent: ");
scanf("%d",&e);
while((m=getchar())!=EOF && m!='\n');

printf("Base: %d, Exponent: %d\n",b,e);

i=1;
result=1;
while(i<=e)
{
result*=b;
i++;
}
printf("%d^%d=%d\n",b,e,result);
return 0;
}
