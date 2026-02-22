//Queue

#include<stdio.h>
int main()
{
	int x[10];
	int size=10;
	int front,rear;
	int ch;
	int num;
	int flag=1;
	char m;
	front=0;
	rear=0;
	while(flag)
	{
		printf("-----------------Queue Menu-------------------\n");
		printf("1: Add to queue\n");
		printf("2: Remove from queue\n");
		printf("3: Element at front\n");
		printf("4: Is queue empty\n");
		printf("5: Is queue full\n");
		printf("6. Exit\n");
		printf("Enter a choice: ");
		scanf("%d",&ch);
		while((m=getchar())!=EOF && m!='\n');
		switch(ch)
		{
			case 1:
				if(rear==size)
				{
					printf("Queue is already full\n");
					continue;
				}
				printf("Enter a number: ");
				scanf("%d",&num);
				while((m=getchar())!=EOF && m!='\n'); 
				x[rear]=num;
				rear++;
				break;
			case 2: 
				if(rear==front)
				{
					printf("Queue is empty\n");
					continue;
				}
		//This or
		//Reuse the remain part for next values, from begin: Method 1
				printf("Removed element is %d\n",x[front]);
				front++;
				if(front==rear)
				{
					rear=0;
					front=0;	
				}

		/* THAT PART	: Method 2	traversal on each removal
				   printf("Removed element is %d\n",x[0]);
				   rear--;
				   for(i=0;i<rear;i++)
				   {
				   x[i]=x[i+1];
				   }
		 */
				break;
			case 3: 
				if(rear==front)
				{
					printf("Queue is empty\n");
					continue;
				}
				printf("Element at front is: %d\n",x[front]);
				break;
			case 4: 
				if(rear==front)
				{
					printf("Yes, Queue is empty\n");
				}
				else
				{
					printf("No, Queue is not empty\n");
				}
				break;
			case 5: 
				if(rear==size)
				{
					printf("Yes, Queue is full\n");
				}
				else
				{
					printf("No, Queue is not full\n");
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
