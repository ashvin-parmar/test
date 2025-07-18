#include<stdio.h>
#include<time.h>
#include<stdlib.h>
extern int rand();
int main(int c,char *argc[])
{
if(c<3)
{
printf("./choose start_point end_point\n");
return 0;
}
int si=atoi(argc[1]);
int ei=atoi(argc[2]);
//printf("Starting point: %d\n",si);
//printf("ending point: %d\n",ei);
srand(time(NULL));
int random_number=rand();
int choose=random_number%(ei-si+1);
choose+=si;
printf("choosen number is: %d\n",choose);
return 0;
}
