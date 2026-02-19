//Prime numbers checking

#include<stdio.h>
int main()
{
int x,y,z,i,ep;
int si,ei;
char m;

printf("Enter a starting point: ");
scanf("%d",&si);
while((m=getchar())!=EOF && m!='\n');

printf("Enter a ending point[MAX=100]: ");
scanf("%d",&ei);
while((m=getchar())!=EOF && m!='\n');

if(si>ei)
{
printf("Invalid starting and ending point\n");
return 0;
}
if(si<0)
{
si=1;
}
if(ei>100) ei=100;
printf("Prime number from %d to %d are....\n",si,ei);
i=si;
while(i<=ei)
{
x=i;
y=2;
ep=x/2;
//while(y<x)
while(y<=ep)		//optimized
{
if(x%y==0) break;
y++;
}
//if(y==x) printf("%d\n",x);
if(y==ep+1) printf("%d\n",x);
i++;
}


return 0;
}
