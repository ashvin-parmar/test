//for, while, switch-case, do-while

#include<stdio.h>
#include<stdio_ext.h>
int main()
{
	int i;
	int ch;

	i=0;
	while(i<5)
	{
		printf("%d\n",i);
		i++;
	}
	printf("-------------------------\n");
	i=0;
	while(i<5)
	{
		i++;
		printf("%d\n",i);
	}
	printf("-------------------------\n");

	for(i=0;i<=5;i++)
	{
		printf("%d\n",i);
	}
	printf("-------------------------\n");

	printf("Enter a choice [1-6]: ");
	scanf("%d",&ch);
	__fpurge(stdin);
	switch(ch)
	{
		case 1: printf("Your choice is 1\n"); break;
		case 2: printf("Your choice is 2\n"); break;
		case 3: 
		case 4: 
		case 5: printf("Your choice is from [3-5]\n"); break;
		case 6: {
				printf("Your choice is 6\n");
			}
			break;
		default : printf("You have not selected from given choice\n");
	}
	printf("---------------------------\n");

	i=0;
	do
	{
		printf("%d\n",i);	//Execute one time in any case, then checked for condition in while loop
		i++;
	}while(i>1);

	return 0;
}
