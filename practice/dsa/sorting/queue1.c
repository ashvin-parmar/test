#include<stdio.h>
#include<stdlib.h>
int main()
{
int size;
char m;
int *queue;
int rear,front;
int i;
int num;
int choice;
printf("Enter size of stack: ");
scanf("%d",&size);
//fflush(stdin);
while((m=getchar())!='\n' && m!=EOF);
queue=(int *)malloc(sizeof(int)*size);
if(queue==NULL)
{
printf("Unable to create stack of size: %d\n",size);
return 0;
}

rear=0;
front=0;
while(1)
{
printf("1: add element\n");
printf("2: remove element\n");
printf("3: is Empty\n");
printf("4: is full\n");
printf("5: Element at top?\n");
printf("6: exit\n");
printf("Enter your choice: ");
scanf("%d",&choice);
while((m=getchar())!='\n' && m!=EOF);
if(choice==1)
{
if(rear==size) 
{
printf("queue is full, unable to add more data\n");
continue;
}
printf("Enter number: ");
scanf("%d",&num);
while((m=getchar())!='\n' && m!=EOF);
queue[rear]=num;
rear++;
}
else if(choice==2)
{
if(front==rear)
{
printf("queue is empty, unable to remove data from queue\n");
continue;
}
num=queue[front];
printf("Removed element: %d\n",num);
front++;
if(front==rear)
{
front=0;
rear=0;
}
}
else if(choice==3)
{
printf("Queue is%sEmpty\n",rear==0?" ":" not ");
}
else if(choice==4)
{
printf("Queue is%sfull\n",rear==size?" ":" not ");
}
else if(choice==5)
{
if(rear==0) printf("Queue is empty\n");
else printf("Element at top is : %d\n",queue[front]);
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

free(queue);
}
