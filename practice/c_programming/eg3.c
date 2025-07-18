//Virtual polymorphism

#include<stdio.h>


typedef struct _Car {

#define car_manual(a) _Generic((a),\

)(a)

}Car;

typedef struct _HondaCity
{
Car car;
int topSpeed;
void HondaCity_manual(struct _HondaCity *hondaCity)
{
printf("Honda City car manual\n");
printf("Top speed of Honda City is : %d\n",topSpeed);
}
struct _HondaCity * new_HondaCity()
{
struct _HondaCity * hondaCity;
hondaCity=(struct _HondaCity *)malloc(sizeof(struct _HondaCity *));
return hondaCity;
}
void destruct_HondaCity(Car *car);
{
free()
}
}HondaCity; 
typedeg struct _Maruti800
{
Car car;
int price;
void maruti800_manual(struct _Maruti800 *maruti800)
{
printf("Maruti 800 car manual\n");
printf("Price of Maruti 800 is : %d\n",price);
}
}Maruti800;


int main()
{
int choice;
Car *c;
char m;
printf("1: Honda City\n");
printf("2: Maruti800 \n");
printf("Enter your choice: ");
scanf("%d",&choice);
c=NULL;
while((m=getchar())!='\n' && m!=EOF);
if(choice==1)
{
c=new_HondaCity();
}else if(choice==2)
{
c=new_Maruti800();
}
else
{
printf("Invalid choice\n");
}

if(c)
{
car_manual(c);
}
//Some work

if(c)
{
if(choice==1) destruct_HondaCity();
else if(choice==2) destruct_Maruti800();
//more choices 
}
return 0;
}
