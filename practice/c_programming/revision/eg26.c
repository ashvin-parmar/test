#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,j,k;
	//Three variable method
	i=10;
	j=20;
	printf("i=%d,j=%d\n",i,j);
	k=i;
	i=j;
	j=k;
	printf("i=%d,j=%d\n",i,j);

	//Two variable method [swapping]
	i=10;
	j=20;
	printf("i=%d,j=%d\n",i,j);
	i=i+j;
	j=i-j;
	i=i-j;
	printf("i=%d,j=%d\n",i,j);

	return 0;
}

