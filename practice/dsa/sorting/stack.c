#include<stdio.h>
#include<stdlib.h>
int main()
{
int size;
char m;
int *stack;
int top;
int i;
int num;
int choice;
printf("Enter size of stack: ");
scanf("%d",&size);
//fflush(stdin);
while((m=getchar())!='\n' && m!=EOF);
stack=(int *)malloc(sizeof(int)*size);
if(stack==NULL)
{
printf("Unable to create stack of size: %d\n",size);
return 0;
}

top=0;
while(1)
{
printf("1: Push element\n");
printf("2: Pop element\n");
printf("3: Is Empty\n");
printf("4: Is full\n");
printf("5: Element at top?\n");
printf("6: exit\n");
printf("Enter your choice: ");
scanf("%d",&choice);
while((m=getchar())!='\n' && m!=EOF);
if(choice==1)
{
if(top==size) 
{
printf("stack is full, unable to add more data\n");
continue;
}
printf("Enter number: ");
scanf("%d",&num);
while((m=getchar())!='\n' && m!=EOF);
stack[top]=num;
top++;
}
else if(choice==2)
{
if(top==0)
{
printf("stack is empty, unable to remove data from stack\n");
continue;
}
top--;
num=stack[top];
printf("Removed element: %d\n",num);
}
else if(choice==3)
{
printf("Stack is%sEmpty\n",top==0?" ":" not ");
}
else if(choice==4)
{
printf("Stack is%sfull\n",top==size?" ":" not ");
}
else if(choice==5)
{
if(top==0) printf("Stack is empty\n");
else printf("Element at top is : %d\n",stack[top-1]);
}
else if(choice==6)
{
break;
}
else
{
printf("Invalid choice\n");
}
}

free(stack);
}
