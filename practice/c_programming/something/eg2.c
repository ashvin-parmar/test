#include<stdio.h>
#include<stdlib.h>
char *result;

//int
int _sum_int_int(int a,int b)
{
return a+b;
}
char * _sum_int_string(int a, char *b)
{
sprintf(result,"%d%s",a,b);
return result;
}
char * _sum_int_char(int a,char b)
{
sprintf(result,"%d%c",a,b);
return result;
}
float _sum_int_float(int a,float b)
{
return a+b;
}
//Float
float _sum_float_int(float a,int b)
{
return a+b;
}
char * _sum_float_string(float a, char *b)
{
sprintf(result,"%f%s",a,b);
return result;
}
char * _sum_float_char(float a,char b)
{
sprintf(result,"%f%c",a,b);
return result;
}
float _sum_float_float(float a,float b)
{
return a+b;
}
//string
char * _sum_string_int( char * a,int b)
{
sprintf(result,"%s%d",a,b);
return result;
}
char * _sum_string_string(char *a, char *b)
{
sprintf(result,"%s%s",a,b);
return result;
}
char * _sum_string_char(const char * a,char b)
{
sprintf(result,"%s%c",a,b);
return result;
}
char * _sum_string_float(char *a,float b)
{
sprintf(result,"%s%f",a,b);
return result;
}
//char 
char* _sum_char_int(char a,int b)
{
sprintf(result,"%c%d",a,b);
return result;
}
char* _sum_char_string(char a,char *b)
{
sprintf(result,"%c%s",a,b);
return result;
}
char* _sum_char_char(char a,char b)
{
result[0]=a;
result[1]=b;
result[2]='\0';
return result;
}
char* _sum_char_float(char a,float b)
{
sprintf(result,"%c%f",a,b);
return result;
}




#define sum(u,v) _Generic((u),	\
int: _Generic((v), \
int: _sum_int_int, \
float: _sum_int_float, \
char *: _sum_int_string, \
char: _sum_int_char \
),\
float: _Generic((v), \
int: _sum_float_int, \
float: _sum_float_float, \
char *: _sum_float_string, \
char: _sum_float_char \
), \
char *: _Generic((v), \
int: _sum_string_int, \
float: _sum_string_float, \
char *: _sum_string_string, \
char: _sum_string_char \
), \
char: _Generic((v), \
int: _sum_char_int, \
float: _sum_char_float, \
char *: _sum_char_string, \
char: _sum_char_char \
)\
)(u,v)


int main()
{
int a=10;
float b=20.20;
int c=20;
float d=40.40;
char ram[]="ram";
char shyam[]="shyam";
char m='A';
char mm='Z';

result=(char *)malloc(sizeof(char)*1025);

printf("%f\n",sum(a,b));
printf("%d\n",sum(a,c));
printf("%f\n",sum(b,d));
printf("%f\n",sum(d,a));

printf("%s\n",sum(ram,m));
printf("%s\n",sum(shyam,ram));
printf("%s\n",sum(ram,a));
printf("%s\n",sum(c,mm));
printf("%s\n",sum(ram,d));

return 0;
}
