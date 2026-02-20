//dynamically memeory creation and management [malloc and free]
//Pointer [array]

#include<stdio.h>
#include<stdlib.h>
int main()
{
int size;
char m;
int *x;		//Pointer
int i;
//We always have to initialize the code at intial of code.
//int x[size];	//We cannot initialize variable in between program -> wrong 
//That's not how we create a dynamic array;
printf("Enter size: ");
scanf("%d",&size);
while((m=getchar())!=EOF && m!='\n');

x=(int *)malloc(sizeof(int)*size);

printf("Asking for inputs: ==>\n");
for(i=0;i<size;i++)
{
printf("Enter a number: ");
scanf("%d",&x[i]);
while((m=getchar())!=EOF && m!='\n');
}

printf("Inputs are: ==>\n");
for(i=0;i<size;i++)
{
printf("%d\n",x[i]);
}

free(x);		//Memory management using free to delete the allocated memory
return 0;
}
