//forward traversal on an interger

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
printf("Num: %d\n",num);
if(num<0)
{
n=(-1)*num;
}
else
{
n=num;
}
y=n;
printf("Forward traversal on an interger\n");
count=1;
x=1;
while(n>9)
{
count++;
x*=10;
n/=10;
}
n=y;
while(x>0)
{
printf("%d\n",n/x);
n=n%x;
x/=10;
}

return 0;
}
