//Stack

#include<stdio.h>
int main()
{
int x[10];
int size=10;
int top;
int ch;
int num;
int flag=1;
char m;
top=0;
while(flag)
{
printf("-----------------Stack Menu-------------------\n");
printf("1: Add to stack\n");
printf("2: Remove from stack\n");
printf("3: Element at top\n");
printf("4: Is stack empty\n");
printf("5: Is stack full\n");
printf("6. Exit\n");
printf("Enter a choice: ");
scanf("%d",&ch);
while((m=getchar())!=EOF && m!='\n');
switch(ch)
{
case 1:
if(top==size)
{
printf("Stack is already full\n");
continue;
}
printf("Enter a number: ");
scanf("%d",&num);
while((m=getchar())!=EOF && m!='\n'); 
x[top]=num;
top++;
break;
case 2: 
if(top==0)
{
printf("Stack is empty\n");
continue;
}
top--;
printf("Removed element is %d\n",x[top]);
break;
case 3: 
if(top==0)
{
printf("Stack is empty\n");
continue;
}
printf("Element at top is: %d\n",x[top-1]);
break;
case 4: 
if(top==0)
{
printf("Yes, Stack is empty\n");
}
else
{
printf("No, Stack is not empty\n");
}
break;
case 5: 
if(top==size)
{
printf("Yes, Stack is full\n");
}
else
{
printf("No, Stack is not full\n");
}
break;
case 6:
flag=0;
break;
default: 
printf("Invalid choice\n");
}
}


return 0;
}
