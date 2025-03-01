
#include<string.h>
#include<stdio.h>
int main()
{
char name[30];
printf("What is yout name: ");
fscanf(stdin,"%s",name);
name[strlen(name)-1]='\n';
sprintf(" something %s\n",name);
char m;
//while((m=getchar())!='\n' && m!=EOF);
name[strlen(name)-1]='\0';
fprintf(stdout,"Hello %s, Good morning!\n",name);
return 0;
}
